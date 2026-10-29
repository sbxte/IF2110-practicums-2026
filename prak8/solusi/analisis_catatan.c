#include "analisis_catatan.h"
#include "mesinkarakter.h"
#include <stdio.h>
#include <stdlib.h>

/* DEFINISI DAN SPESIFIKASI */
void analisisCatatan(int *jmlKata, int *terpanjang, int *jmlPalindrom)
/* Membaca seluruh pita karakter dengan mesin karakter dan menganalisis kata-katanya.
   Kata adalah rangkaian huruf kecil 'a'-'z' berurutan yang maksimal;
   karakter lain (spasi, newline) adalah pemisah.
   Palindrom adalah kata dengan panjang >= 2 yang terbaca sama dari depan dan belakang.
   I.S. Pita belum dibaca (START belum dipanggil).
        Pita berisi huruf kecil, spasi, dan newline, diakhiri MARK.
        Panjang setiap kata <= MAX_KATA.
   F.S. Pita sudah dibaca sampai MARK (EOP true).
        *jmlKata      berisi banyaknya kata.
        *terpanjang   berisi panjang kata terpanjang (0 jika tidak ada kata).
        *jmlPalindrom berisi banyaknya kata palindrom.
        Tidak ada keluaran yang dicetak oleh prosedur ini. */
{
	START();
	char *buf = malloc(10000);
	int bufI = 0;
	int maxWordLen = 0;
	int wordLen = 0;
	int wordC = 0;

	*jmlPalindrom = 0;
	while (currentChar != MARK) {
		buf[bufI] = currentChar;
		if (currentChar == ' ' || currentChar == '\n') {
			if (isPalindrom(&buf[bufI - wordLen], wordLen)) {
				(*jmlPalindrom)++;
			}
			if (wordLen > maxWordLen) {
				maxWordLen = wordLen;
			}
			if (wordLen > 0) {
				wordC++;
			}

			wordLen = 0;
		} else {
			wordLen++;
		}
		bufI++;
		ADV();
	}

	if (isPalindrom(&buf[bufI - wordLen], wordLen)) {
		(*jmlPalindrom)++;
	}
	if (wordLen > maxWordLen) {
		maxWordLen = wordLen;
	}
	if (wordLen > 0) {
		wordC++;
	}

	*jmlKata = wordC;
	*terpanjang = maxWordLen;

	free(buf);
}

