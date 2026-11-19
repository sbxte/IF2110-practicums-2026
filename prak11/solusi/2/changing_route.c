#include "changing_route.h"

ElType absParity(ElType x)
{
	if (x >= 0) {
		return x % 2;
	} else {
		return (x * -1) % 2;
	}
}

boolean valid(BinTree parent, BinTree child) {
	return !isTreeEmpty(child) && absParity(ROOT(child)) != absParity(ROOT(parent)) && changingRoute(child);
}

/* DEFINISI DAN SPESIFIKASI */
boolean changingRoute(BinTree P)
/* Mengembalikan true apabila terdapat setidaknya satu jalur dari
   akar hingga daun yang setiap dua simpul bertetangga memiliki
   paritas berbeda.

   I.S. P merupakan pohon biner valid atau pohon kosong (NULL).
        P berisi paling banyak 1000 simpul.
   F.S. Menghasilkan true apabila terdapat jalur akar-ke-daun
        dengan paritas yang selalu bergantian, false jika tidak.
        Pohon kosong menghasilkan false, satu simpul menghasilkan true.
        Struktur dan isi pohon tidak berubah. */
{
	if (isTreeEmpty(P)) {
		return false;
	}

	if (isOneElmt(P)) {
		return true;
	}

	return valid(P, LEFT(P)) || valid(P, RIGHT(P));
}
