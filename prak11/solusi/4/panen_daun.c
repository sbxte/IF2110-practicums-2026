#include "panen_daun.h"

void panenAnak(Address* child);

void panenRekurs(Address* P) 
{
	panenAnak(&LEFT((*P)));
	panenAnak(&RIGHT((*P)));
}

void panenAnak(Address* child)
{
	if (isTreeEmpty(*child)) {
		return;
	} 

	// Panen
	if (isOneElmt(*child)) {
		deallocTreeNode(*child);
		*child = NULL;
		return;
	}

	// Lebih dari satu
	panenRekurs(child);
}

/* DEFINISI DAN SPESIFIKASI */
void panenDaun(BinTree P)
/* Memanen seluruh daun pada pohon biner P sebanyak SATU KALI.
   Daun yang dipanen adalah simpul yang merupakan daun pada pohon AWAL
   (sebelum panen dimulai) dan memiliki induk.
   Daun tersebut dilepas dari induknya dan didealokasi dengan deallocTreeNode.

   I.S. P merupakan pohon biner valid atau pohon kosong (NULL).
        P berisi paling banyak 1000 simpul, setiap nilai -1000..1000.
   F.S. Seluruh daun awal yang memiliki induk sudah dipanen.
        Nilai simpul yang tersisa tidak berubah.
        Simpul yang baru menjadi daun akibat panen TIDAK ikut dipanen.
        Akar yang tidak memiliki anak tidak dipanen (tidak memiliki induk).
        Simpul yang tersisa adalah simpul yang sama seperti semula
        (tidak ada simpul baru), dan posisinya (kiri/kanan) tidak berubah.
   Contoh: (1(2(4()())(5()()))(3()())) menjadi (1(2()())()).
           (1(2(3()())())()) menjadi (1(2()())()). */
{
	if (isTreeEmpty(P) || isOneElmt(P)) {
		return;
	}

	panenRekurs(&P);
}
