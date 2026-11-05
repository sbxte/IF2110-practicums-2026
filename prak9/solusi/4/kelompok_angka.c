#include "kelompok_angka.h"
#include "linkedlist.h"

/* KELOMPOK ANGKA */
/* DEFINISI DAN SPESIFIKASI */
void kelompokkan(List l, List *angka, List *jumlah)
/* Mengelompokkan l menjadi dua list baru berdasarkan kelompok angka yang sama dan bersebelahan.
   Kelompok adalah deretan angka yang sama dan bersebelahan, yang tidak bisa diperpanjang lagi.
   Selesaikan secara rekursif.
   I.S. l terdefinisi, mungkin kosong. *angka dan *jumlah sembarang.
        l berisi paling banyak 100 elemen, setiap elemen bernilai -100..100.
   F.S. l tidak berubah.
        *angka  berisi angka dari setiap kelompok pada l, dari kiri ke kanan.
        *jumlah berisi jumlah anggota setiap kelompok, dengan urutan yang sama.
        Kedua list sama panjang; jika l kosong keduanya NIL.
        Semua node pada *angka dan *jumlah adalah node baru (bukan node milik l).
   Contoh: l = [3,3,5,5,5,3] menghasilkan *angka = [3,5,3] dan *jumlah = [2,3,1]. */
{
	if (l == NIL) {
		*angka = NIL;
		*jumlah = NIL;
		return;
	}

	kelompokkan(NEXT(l), angka, jumlah);
	if (isEmpty(*angka)) {
		*angka = konso(head(l), *angka);
		*jumlah = konso(1, *jumlah);
	} else {
		// angka not empty
		if (head(*angka) == head(l)) {
			// same run
			// increment jumlah
			List rem = tail(*jumlah);
			ElType cur = head(*jumlah);
			ElType updated = cur + 1;
			*jumlah = konso(updated, rem);
		} else {
			// start of different run
			*angka = konso(head(l), *angka);
			*jumlah = konso(1, *jumlah);
		}
	}
}
