#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08887028(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = -1;
  if (param_1 == 0) {
    return -1;
  }
  iVar2 = *(int *)(param_1 + 0x5c0);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (3 < iVar2) {
    iVar2 = 3;
  }
  switch(*(undefined4 *)(param_1 + 0x5b8)) {
  case 0:
    if (*(char *)(param_1 + 0x5e4) != '\0') {
      if (iVar2 == 2) {
        iVar2 = 4;
      }
      if (iVar2 == 3) {
        iVar2 = 5;
      }
    }
    return iVar2;
  case 1:
    if (*(char *)(param_1 + 0x5e4) != '\0') {
      if (iVar2 == 2) {
        iVar2 = 4;
      }
      if (iVar2 == 3) {
        iVar2 = 5;
      }
    }
    return iVar2 + 6;
  case 2:
    return iVar2 + 0xc;
  case 3:
    return iVar2 + 0x10;
  case 4:
  case 5:
    return 0x14;
  case 6:
  case 7:
    iVar1 = 0x14;
    if ((5 < param_2) && (param_2 < 0x16)) {
      iVar1 = 0x15;
    }
  }
  return iVar1;
}

