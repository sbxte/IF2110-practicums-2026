#include "listberkait.h"
#include <stdlib.h>

Address newNode(ElType val) {
  Address p = malloc(sizeof(Node));
  if (p != Nil) {
    INFO(p) = val;
    NEXT(p) = Nil;
  }
  return p;
}
