#include "palindrom.h"

/* DEFINISI DAN SPESIFIKASI */
void palindromTerpanjang(void)
/* Palindrom terbaca sama dari depan dan belakang; huruf besar dan kecil berbeda.
   Kata satu huruf termasuk palindrom.
   I.S. Pita belum dibaca dan diakhiri MARK.
        Setiap kata berisi 1..NMax huruf Latin, besar atau kecil.
   F.S. Mencetak "<jumlah kata palindrom> <kata terpanjang>" dalam satu baris
        Kata terpanjang dipilih di antara kata palindrom, 
        Jika terdapat beberapa kata terpanjang, ambil yang muncul pertama
        Jika tidak ada palindrom, cetak "0".
        Pita dibaca sampai MARK dan keluaran diakhiri newline. */
{
	STARTWORD();
	Word maxPal;
	int palCount = 0;
	int maxPalLen = 0;
	while (!EndWord) {
		int isPalindrom = 1;
		int length = currentWord.Length;
		for (int i = 0; i <= currentWord.Length / 2; i++) {
			if (currentWord.TabWord[i] != currentWord.TabWord[length - i - 1]) {
				isPalindrom = 0;
				break;
			}
		}
		if (isPalindrom == 1) {
			palCount++;
		}
		if (isPalindrom == 1 && length > maxPalLen) {
			maxPalLen = length;
			maxPal = currentWord;
		}
		ADVWORD();
	}

	if (palCount == 0) {
		printf("0\n");
	} else {
		printf("%d ", palCount);
		for (int i = 0; i < maxPal.Length; i++) {
			printf("%c", maxPal.TabWord[i]);
		}
		printf("\n");
	}
}
