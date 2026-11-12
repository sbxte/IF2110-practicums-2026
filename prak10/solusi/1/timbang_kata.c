#include "timbang_kata.h"
#include <stdio.h>

/* DEFINISI DAN SPESIFIKASI */
void timbang(void)
/* I.S. Pita belum dibaca. Pita dijamin mengandung tepat satu kata "@"
        Kata-kata sebelum "@" dianggap sebagai bagian kiri
        Kata-kata sesudah "@" dianggap sebagai bagian kanan
   F.S. Mencetak:
        "KIRI"     jika jumlah kata bagian kiri > jumlah kata bagian kanan,
        "KANAN"    jika jumlah kata bagian kanan > jumlah kata bagian kiri,
        "SEIMBANG" jika jumlah kata keduanya sama.
        Kata "@" tidak dihitung. Pita dibaca sampai MARK dan hasil diakhiri newline. */
{
	STARTWORD();
	int before = 0;
	int after = 0;
	while (!(currentWord.TabWord[0] == '@' && currentWord.Length == 1)) {
		before++;
		ADVWORD();
	}
	ADVWORD();
	while (!EndWord) {
		after++;
		ADVWORD();
	}
	if (before == after) {
		printf("SEIMBANG\n");
	} else if (before < after) {
		printf("KANAN\n");
	} else {
		printf("KIRI\n");
	}
}
