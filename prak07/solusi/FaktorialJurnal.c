#include "FaktorialJurnal.h"

/* FAKTORIAL JURNAL */
/* DEFINISI DAN SPESIFIKASI */
int faktorial(int n)
/* Menghitung faktorial n secara rekursif.
   I.S. 0 <= n <= 12.
   F.S. Mengembalikan n!, dengan 0! = 1. Tidak mencetak keluaran. */
{
  if (n == 0) {
    return 1;
  } else
    return n * faktorial(n - 1);
}
