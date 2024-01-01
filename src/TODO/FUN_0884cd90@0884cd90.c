#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0884cd90(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(DAT_08ac58c4 + 0xc);
  iVar3 = 0;
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    iVar3 = 1;
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,0x2e);
    if (iVar2 != 0) {
      iVar3 = 8;
    }
    switch(uVar4) {
    case 4:
      iVar3 = 4;
      break;
    case 6:
      iVar3 = 9;
      break;
    case 9:
      iVar3 = 2;
      break;
    case 0xb:
      iVar3 = 5;
    }
    if (iVar3 == 5) {
      uVar4 = 0;
      if (DAT_08aba778 < 1) {
        if (-1 < DAT_08aba778) {
          uVar4 = 2;
        }
      }
      else if (DAT_08aba778 < 2) {
        uVar4 = 0;
      }
      else if (DAT_08aba778 < 3) {
        uVar4 = 1;
      }
      FUN_089b1e24(uVar4);
    }
  }
  else {
    if (DAT_08aba778 < 7) {
      if (5 < DAT_08aba778) {
        return 6;
      }
    }
    else if (DAT_08aba778 < 8) {
      return 10;
    }
    switch(uVar4) {
    case 3:
      iVar3 = 3;
      break;
    case 4:
      iVar3 = 4;
      break;
    case 9:
      iVar3 = 2;
      break;
    case 10:
      iVar3 = 7;
      break;
    case 0xc:
      iVar3 = 6;
    }
  }
  return iVar3;
}

