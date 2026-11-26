#include "bintree.h"
#include "cari_kode.h"

boolean isMemberTree(ElType x, BinTree P)
/* Prasyarat: P adalah BST dengan kunci unik atau NULL.
   Menghasilkan true jika x terdapat pada P, dan false jika tidak.
   Pencarian mengikuti satu jalur dari akar. Isi dan struktur P tetap. */
{
	if (isTreeEmpty(P)) {
		return false;
	}

	if (ROOT(P) == x) {
		return true;
	}

	if (ROOT(P) < x) {
		return isMemberTree(x, RIGHT(P));
	} else {
		return isMemberTree(x, LEFT(P));
	}
}
