#include "bintree.h"
#include "sisip_kode.h"

static void foo(ElType x, BinTree *P) 
{
	if (isTreeEmpty(*P)) {
		*P = newTreeNode(x);
		return;
	}

	if (x == ROOT(*P)) {
		return;
	}
	if (x < ROOT(*P)) {
		foo(x, &(LEFT(*P)));
	} else {
		foo(x, &(RIGHT(*P)));
	}
}

BinTree insertTree(ElType x, BinTree P)
/* Prasyarat: P adalah BST dengan kunci unik atau NULL. Alokasi berhasil.
   Mengembalikan akar pohon setelah x disisipkan sebagai daun pada posisi
   yang ditentukan oleh pencarian BST. Simpul dan hubungan anak yang
   sudah ada dipertahankan. Jika x sudah ada, P tetap. */
{
	foo(x, &P);
	return P;
}
