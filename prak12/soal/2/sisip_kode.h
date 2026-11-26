#ifndef SISIP_KODE_H
#define SISIP_KODE_H

#include "bintree.h"

BinTree insertTree(ElType x, BinTree P);
/* Prasyarat: P adalah BST dengan kunci unik atau NULL. Alokasi berhasil.
   Mengembalikan akar pohon setelah x disisipkan sebagai daun pada posisi
   yang ditentukan oleh pencarian BST. Simpul dan hubungan anak yang
   sudah ada dipertahankan. Jika x sudah ada, P tetap. */

#endif
