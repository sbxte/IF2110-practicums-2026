#include "peta_jarak.h"

BinTree foo(BinTree t, ElType prev)
{
	if (isTreeEmpty(t)) {
		return NULL;
	}

	ElType res = ROOT(t) + prev;
	return NewTree(res, foo(LEFT(t), res), foo(RIGHT(t), res));
}

/* DEFINISI DAN SPESIFIKASI */
BinTree petaJarak(BinTree P)
/* Mengirimkan pohon biner BARU yang strukturnya sama persis dengan P.
   Nilai setiap simpul pada pohon baru adalah total jarak dari akar hingga
   simpul tersebut, yaitu jumlah nilai seluruh simpul pada jalur dari akar P
   hingga simpul yang bersesuaian (termasuk akar dan simpul itu sendiri).

   I.S. P merupakan pohon biner valid atau pohon kosong (NULL).
        P berisi paling banyak 1000 simpul, setiap nilai 0..1000.
   F.S. P tidak berubah (struktur maupun nilainya).
        Seluruh simpul pada pohon hasil adalah simpul baru yang dibuat dengan
        NewTree, CreateTree, atau newTreeNode, bukan simpul milik P.
        Jika P kosong, mengirimkan pohon kosong (NULL).
   Contoh: (5(3()())(2(4()())())) menghasilkan (5(8()())(7(11()())())).
           (1(2(3()())())()) menghasilkan (1(3(6()())())()). */
{
	return foo(P, 0);
}
