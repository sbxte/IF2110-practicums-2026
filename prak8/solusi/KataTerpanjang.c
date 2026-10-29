#include "KataTerpanjang.h"
#include "mesinkarakter.h"

int panjangKataTerpanjang(void)
/* Membaca teks sampai sebelum MARK dan menghasilkan panjang kata terpanjang.
   Memanggil START sendiri dan tidak mencetak keluaran.
   Kata adalah deret huruf yang dipisahkan satu atau lebih spasi.
   Jika tidak ada kata, hasilnya 0.
   I.S. Posisi baca masukan berada di awal teks; teks diakhiri MARK.
   F.S. Semua karakter sebelum MARK telah diproses. */
{
	int max = 0;
	int count = 0;
	START();
	while (currentChar != MARK) {
		if (currentChar == ' ') {
			if (count > max) {
				max = count;
			}
			count = 0;
		} else {
			count++;
		}
		ADV();
	}

	if (count > max) {
		max = count;
	}

	return max;
}
