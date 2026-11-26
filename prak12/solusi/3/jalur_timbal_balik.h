#ifndef JALUR_TIMBAL_BALIK_H
#define JALUR_TIMBAL_BALIK_H

#include <stddef.h>
#include "graph.h"

int countReciprocalNeighbors(Graph G, int x);
/* Prasyarat: G adalah graf berarah yang valid tanpa sisi dari simpul ke
   dirinya sendiri. Graf boleh kosong.
   Menghitung simpul v yang terhubung melalui kedua sisi x -> v dan v -> x.
   Menghasilkan 0 jika simpul x tidak ada. Isi dan struktur G tetap. */

#endif
