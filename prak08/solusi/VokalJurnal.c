#include "mesinkarakter.h"
#include "VokalJurnal.h"

int hitungVokal(void)
/* Membaca karakter dari awal sampai sebelum MARK dengan mesin karakter.
   Memanggil START sendiri dan tidak mencetak keluaran.
   Menghasilkan banyaknya huruf vokal (a, i, u, e, o), tanpa membedakan
   huruf besar dan kecil. Spasi dan karakter lain tidak dihitung.
   I.S. Posisi baca masukan berada di awal teks; teks diakhiri MARK.
   F.S. Semua karakter sebelum MARK telah diproses. */
{
	START();
	int count = 0;
	while (currentChar != MARK) {
		switch (currentChar) {
			case 'a':
			case 'i':
			case 'u':
			case 'e':
			case 'o':
			case 'A':
			case 'I':
			case 'U':
			case 'E':
			case 'O':
				count++;
				break;
			default:
				break;
		}
		ADV();
	}
	return count;
}
