#include "SinyalBerbahaya.h"

/* SINYAL BERBAHAYA */
/* DEFINISI DAN SPESIFIKASI */
int hitungBerbahaya(List l, int batas)
/* Menghitung banyaknya sinyal dengan nilai lebih besar dari batas.
   I.S. l terdefinisi, mungkin kosong.
   F.S. Mengembalikan banyaknya node dengan INFO > batas; 0 jika l kosong.
        Nilai sama dengan batas tidak dihitung.
   Gunakan rekursi tanpa loop. */
{
	if (l == NIL) {
		return 0;
	} else {
		int x = 0;
		if (INFO(l) > batas) {
			x = 1;
		}
		return x + hitungBerbahaya(NEXT(l), batas);
	}
}
