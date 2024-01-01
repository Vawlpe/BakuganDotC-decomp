#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a03728(void)

{
  int **ppiVar1;
  int **ppiVar2;
  int *piVar3;
  
  FUN_08a036f8();
  ppiVar2 = DAT_08af11dc;
  if ((DAT_08af11dc[3] == (int *)0x0) && (*DAT_08af11dc != (int *)0x0)) {
    piVar3 = *DAT_08af11dc;
    if (*(char *)(DAT_08af11dc + 4) != '\0') {
      ppiVar1 = DAT_08af11dc + 1;
      DAT_08af11dc = (int **)*DAT_08af11dc;
      FUN_08a034e8(*ppiVar1);
      piVar3 = (int *)DAT_08af11dc;
    }
    DAT_08af11dc = (int **)piVar3;
    FUN_08a036f8(ppiVar2);
  }
  return;
}

