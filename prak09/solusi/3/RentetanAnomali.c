#include "RentetanAnomali.h"
#include "listrec.h"

void foo(List l, int batas, int *max, int *run) {
	if (l == NIL) {
		*max = 0;
		*run = 0;
		return;
	}

	foo(NEXT(l), batas, max, run);
	if (INFO(l) > batas) {
		*run = *run + 1;
		if (*run > *max) {
			*max = *run;
		}
	} else {
		*run = 0;
	}
}

/* RENTETAN ANOMALI */
/* DEFINISI DAN SPESIFIKASI */
int rentetanTerpanjang(List l, int batas)
/* Menghitung panjang rentetan sinyal berbahaya terpanjang secara rekursif.
   I.S. l terdefinisi, mungkin kosong.
   F.S. Mengembalikan panjang maksimum deretan node berturut-turut dengan INFO > batas.
        Hasilnya 0 jika l kosong atau tidak memiliki sinyal berbahaya.
        List tidak berubah dan tidak ada node yang dialokasikan atau didealokasi.
        Tidak membaca masukan atau mencetak keluaran.
   Gunakan rekursi tanpa loop; fungsi bantuan rekursif boleh dibuat. */
{
	int max = 0;
	int run = 0;
	foo(l, batas, &max, &run);
	return max;
}
