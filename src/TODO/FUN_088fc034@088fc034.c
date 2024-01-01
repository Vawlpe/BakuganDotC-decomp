#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088fc034(undefined4 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < param_3[2]) {
    iVar2 = 0;
    do {
      if (iVar3 < 0) {
        memset_jak((undefined *)&DAT_08b00fd0,0,4);
        iVar1 = DAT_08b00fd0;
      }
      else {
        iVar1 = *(int *)(*param_3 + iVar2);
      }
      if (*(int *)(iVar1 + 0x3c) == param_2) {
        if (*(int *)(iVar1 + 0x58) == 1) {
          return iVar1;
        }
        iVar1 = param_3[2];
      }
      else {
        iVar1 = param_3[2];
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  return 0;
}

