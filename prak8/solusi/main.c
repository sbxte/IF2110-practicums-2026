#include "linkedlist.h"
#include "selang_seling.h"

int main() {
  for (int i = 0; i < 10; i++) {
    List l;
    CreateList(&l);
    for (int j = 0; j < i; j++) {
      insertLast(&l, j);
    }

    selangSeling(&l);

    displayList(l);
    dealokasiList(&l);
  }
  return 0;
}
