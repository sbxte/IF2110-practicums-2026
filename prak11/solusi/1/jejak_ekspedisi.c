#include "jejak_ekspedisi.h"

/* DEFINISI DAN SPESIFIKASI */
int hitungJejak(BinTree P)
/* Mengembalikan jumlah seluruh simpul yang terdapat dalam pohon biner P.

   I.S. P merupakan sebuah pohon biner yang valid atau pohon kosong (NULL).
        P berisi paling banyak 1000 simpul.
   F.S. Menghasilkan jumlah seluruh simpul dalam pohon biner P.
        Jika P merupakan pohon kosong, mengembalikan 0.
        Struktur dan isi pohon tidak berubah. */
{
	if (isTreeEmpty(P)) {
		return 0;
	} else {
		return 1 + hitungJejak(LEFT(P)) + hitungJejak(RIGHT(P));
	}
}
