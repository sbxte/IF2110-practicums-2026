#ifndef SEGEL_ANOMALI_H
#define SEGEL_ANOMALI_H

#include "bintree.h"

void deleteTree(BinTree *P, ElType x);
/* Prasyarat: *P adalah BST dengan nilai unik dan tidak kosong.
              x pasti terdapat pada *P.
   I.S. *P terdefinisi, tidak kosong, dan memuat x.
   F.S. Simpul bernilai x dihapus dari *P dan *P tetap BST.
        - Jika simpul tersebut daun, simpul dihapus.
        - Jika simpul tersebut hanya punya satu anak, anak itu naik
          menggantikan posisinya.
        - Jika simpul tersebut punya dua anak, nilainya diganti dengan nilai
          TERBESAR pada upapohon kirinya (simpul terkanan upapohon kiri), lalu
          simpul pemilik nilai terbesar itu yang dihapus.
        Simpul yang dibuang didealokasi dengan deallocTreeNode.
        Jika simpul terakhir dihapus, *P menjadi NULL. */

#endif
