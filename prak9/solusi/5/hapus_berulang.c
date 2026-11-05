#include "hapus_berulang.h"
#include "linkedlist.h"

int count(List l, ElType val) {
	if (isEmpty(l)) {
		return 0;
	}

	int next = count(NEXT(l), val);
	if (head(l) == val) {
		return next + 1;
	} else {
		return next;
	}
}

void erase(List *l, int target)
{
	if (*l == NIL) {
		return;
	}

	erase(&(NEXT(*l)), target);
	if (INFO(*l) == target) {
		*l = NEXT(*l);
	}
}

/* HAPUS BERULANG */
/* DEFINISI DAN SPESIFIKASI */
void hapusBerulang(List *l)
/* Menghapus semua node yang angkanya muncul lebih dari sekali pada list.
   Harus diselesaikan secara rekursif.
   I.S. l terdefinisi, mungkin kosong.
        l berisi paling banyak 100 elemen, setiap elemen bernilai -1000..1000.
   F.S. l hanya berisi node yang angkanya muncul tepat satu kali pada list awal,
        dengan urutan semula.
        Node lainnya dihapus dan didealokasi dengan dealokasi.
        Node yang tersisa adalah node yang sama; tidak ada node baru, INFO tidak diubah.
        Jika semua angka muncul lebih dari sekali, l menjadi NIL.
   Contoh: [4,1,4,2,1,5] menjadi [2,5]; [3,3,3] menjadi []. */
{
	if (isEmpty(*l)) {
		return;
	}

	if (count(*l, head(*l)) > 1) {
		erase(l, head(*l));
		if (!isEmpty(*l)) {
			hapusBerulang(l);
		}
	} else {
		hapusBerulang(&NEXT(*l));
	}
}
