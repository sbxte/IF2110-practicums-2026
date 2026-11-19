#include "order_guardian.h"

// In Order
boolean checkInorder(BinTree P, Address *prev) {
  if (isTreeEmpty(P)) {
    return true;
  }

  // Left child first
  if (!checkInorder(LEFT(P), prev)) {
    return false;
  }

  // Then this node
  Address tmp = *prev;
  *prev = P;
  if (tmp != NULL && ROOT(tmp) >= ROOT(P)) {
    return false;
  }

  if (!checkInorder(RIGHT(P), prev)) {
    return false;
  }

  return true;
}

/* DEFINISI DAN SPESIFIKASI */
boolean checkOrder(BinTree P)
/* Memeriksa apakah pohon biner P memenuhi aturan Binary Search
   Tree (BST).

   I.S. P merupakan pohon biner valid atau pohon kosong (NULL).
        P berisi paling banyak 1000 simpul.

   F.S. Menghasilkan true apabila P merupakan BST, atau false jika
        tidak. Struktur dan isi pohon tidak berubah. */
{
  Address p = NULL;
  return checkInorder(P, &p);
}

// boolean checkOrderRec(BinTree P, ElType bound, boolean left)
// {
// 	if (isTreeEmpty(P)) {
// 		return true;
// 	}
//
// 	if (isOneElmt(P)) {
// 		return true;
// 	}
//
// 	ElType c = ROOT(P);
// 	if (!isTreeEmpty(LEFT(P)) && (ROOT(LEFT(P)) >= c || (!left &&
// ROOT(LEFT(P)) <= bound)))
// 	{
// 		return false;
// 	}
// 	if (!isTreeEmpty(RIGHT(P)) && (ROOT(RIGHT(P)) <= c || (left && bound <=
// ROOT(RIGHT(P)))))
// 	{
// 		return false;
// 	}
//
// 	return checkOrderRec(LEFT(P), c, true) && checkOrderRec(RIGHT(P), c,
// false);
// }
//
// /* DEFINISI DAN SPESIFIKASI */
// boolean checkOrder(BinTree P)
// /* Memeriksa apakah pohon biner P memenuhi aturan Binary Search
//    Tree (BST).
//
//    I.S. P merupakan pohon biner valid atau pohon kosong (NULL).
//         P berisi paling banyak 1000 simpul.
//
//    F.S. Menghasilkan true apabila P merupakan BST, atau false jika
//         tidak. Struktur dan isi pohon tidak berubah. */
// {
// 	if (isTreeEmpty(P) || isOneElmt(P)) {
// 		return true;
// 	}
//
// 	ElType c = ROOT(P);
//
// 	if (!isTreeEmpty(LEFT(P)) && ROOT(LEFT(P)) >= c)
// 	{
// 		return false;
// 	}
// 	if (!isTreeEmpty(RIGHT(P)) && ROOT(RIGHT(P)) <= c)
// 	{
// 		return false;
// 	}
//
// 	return checkOrderRec(LEFT(P), c, true) && checkOrderRec(RIGHT(P), c,
// false);
// }
