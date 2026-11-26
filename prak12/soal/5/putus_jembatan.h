#ifndef PUTUS_JEMBATAN_H
#define PUTUS_JEMBATAN_H

#include <stddef.h>
#include "graph.h"

void deleteEdge(Graph *g, int prec, int succ);
/* Menghapus busur dari prec menuju succ dari g.
   I.S. g terdefinisi. Simpul prec dan succ ada pada g, dan busur <prec, succ>
        pasti ada pada g.
   F.S. Entri succ dilepas dari list successor milik prec dan didealokasi
        dengan deallocAdjNode. Urutan entri successor lain tetap.
        NPRED(succ) berkurang 1. Simpul dan busur lain tidak berubah. */

#endif
