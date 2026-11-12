#include "hitung_kata.h"

/* HITUNG KATA */
/* Pita dibaca dari masukan standar dan diakhiri MARK ('.').
   Kata dipisahkan oleh satu atau beberapa BLANK (spasi, tab, atau baris baru).
   Setiap kata terdiri dari huruf kecil dan panjangnya paling banyak NMax. */


int hitungKemunculan(Word w)
/* Mengirimkan berapa kali kata w muncul pada pita.
   Sebuah kata pada pita dihitung hanya jika sama persis dengan w
   (panjangnya sama dan setiap hurufnya sama).
   I.S. Pita belum dibaca (STARTWORD belum dipanggil). w tidak kosong.
   F.S. Seluruh pita sudah dibaca sampai MARK.
        Jika w tidak ada pada pita, hasilnya 0. */
{
	STARTWORD();

	int count = 0;
	while (!EndWord) {
		if (currentWord.Length != w.Length) {
			goto cont;
		}

		for (int i = 0; i < currentWord.Length; i++) {
			if (currentWord.TabWord[i] != w.TabWord[i]) {
				goto cont;
			}
		}
		count++;

cont:
		ADVWORD();
	}

	return count;
}
