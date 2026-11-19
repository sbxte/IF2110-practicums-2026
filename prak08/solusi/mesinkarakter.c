#include "mesinkarakter.h"
#include <stdio.h>

char currentChar;

static FILE *pita;
static int retval;

void START(void) {
  pita = stdin;
  ADV();
}

void ADV(void) {
  retval = fscanf(pita, "%c", &currentChar);
  if (retval == EOF) {
    currentChar = MARK;
  }
}

int EOP(void) { return currentChar == MARK; }
