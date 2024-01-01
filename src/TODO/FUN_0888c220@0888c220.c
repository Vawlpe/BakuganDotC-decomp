#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0888c220(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  fVar2 = (float)param_1;
  iVar1 = 0;
  if (fVar2 < 0.0) {
    iVar3 = 0;
  }
  else if (32.0 < fVar2) {
    iVar3 = 0x20;
  }
  else {
    iVar3 = (int)fVar2;
  }
  if (*(char **)(&DAT_08aba9e0 + iVar3 * 4) != (char *)0x0) {
    iVar1 = (int)**(char **)(&DAT_08aba9e0 + iVar3 * 4);
  }
  return iVar1;
}

