#include "putus_jembatan.h"

static void del(AdrAdjNode *n, int succ) {
	if (SUCC_ID(*n) == succ) {
		AdrAdjNode killthis = *n;
		*n = NEXTSUCC(*n);
		deallocAdjNode(killthis);
	} else {
		del(&NEXTSUCC(*n), succ);
	}
}

void deleteEdge(Graph *g, int prec, int succ)
/* Menghapus busur dari prec menuju succ dari g.
   I.S. g terdefinisi. Simpul prec dan succ ada pada g, dan busur <prec, succ>
        pasti ada pada g.
   F.S. Entri succ dilepas dari list successor milik prec dan didealokasi
        dengan deallocAdjNode. Urutan entri successor lain tetap.
        NPRED(succ) berkurang 1. Simpul dan busur lain tidak berubah. */
{
	AdrNode n = searchNode(*g, prec);
	del(&TRAIL(n), succ);

	AdrNode succNode = searchNode(*g, succ);
	NPRED(succNode) = NPRED(succNode) - 1;
}
