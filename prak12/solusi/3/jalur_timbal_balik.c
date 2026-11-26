#include "jalur_timbal_balik.h"

static int countRec(Graph G, int from, AdrAdjNode to) {
	if (to == NULL) {
		return 0;
	}

	int curr = 0;
	
	// Cari arah balik ada atau gak
	if (searchEdge(G, SUCC_ID(to), from) != NULL) {
		curr = 1;
	}

	return curr + countRec(G, from, NEXTSUCC(to));
}

static int count(Graph G, AdrNode n) {
	if (n == NULL) {
		return 0;
	}

	return countRec(G, ID(n), TRAIL(n));
}


int countReciprocalNeighbors(Graph G, int x)
/* Prasyarat: G adalah graf berarah yang valid tanpa sisi dari simpul ke
   dirinya sendiri. Graf boleh kosong.
   Menghitung simpul v yang terhubung melalui kedua sisi x -> v dan v -> x.
   Menghasilkan 0 jika simpul x tidak ada. Isi dan struktur G tetap. */
{
	return count(G, searchNode(G, x));
}
