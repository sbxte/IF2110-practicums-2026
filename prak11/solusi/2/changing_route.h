#ifndef CHANGING_ROUTE_H
#define CHANGING_ROUTE_H

#include "bintree.h"

/* DEFINISI DAN SPESIFIKASI */
boolean changingRoute(BinTree P);
/* Mengembalikan true apabila terdapat setidaknya satu jalur dari
   akar hingga daun yang setiap dua simpul bertetangga memiliki
   paritas berbeda.

   I.S. P merupakan pohon biner valid atau pohon kosong (NULL).
        P berisi paling banyak 1000 simpul.
   F.S. Menghasilkan true apabila terdapat jalur akar-ke-daun
        dengan paritas yang selalu bergantian, false jika tidak.
        Pohon kosong menghasilkan false, satu simpul menghasilkan true.
        Struktur dan isi pohon tidak berubah. */

#endif
