#include "CatatanMebel.h"

/* CATATAN MEBEL */
/* DEFINISI DAN SPESIFIKASI */
void faktorialP(int n, int *hasil)
/* Menghitung faktorial n secara rekursif melalui parameter output hasil.
   I.S. 0 <= n <= 12. hasil menunjuk variabel int yang valid;
        nilai awal variabel tersebut sembarang.
   F.S. *hasil berisi n!, dengan 0! = 1. Tidak mencetak keluaran. */
{
	if (n == 0) {
		*hasil = 1;
	} else  {
		faktorialP(n - 1, hasil);
		*hasil *= n;
	}
}

