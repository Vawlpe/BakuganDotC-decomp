#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e5bec(int param_1,int param_2,char param_3,char param_4)

{
  int iVar1;
  
  iVar1 = param_1 + 0x1b0;
  if (*(int *)(param_1 + 0x3e0) != 0) {
    iVar1 = param_1 + 0x3f0;
  }
  if (iVar1 != 0) {
    if (param_4 != '\0') {
      FUN_08824658(DAT_08ac5c70,0xffffffff,iVar1);
    }
    if (param_3 == '\0') {
      FUN_08824658(DAT_08ac5c70,param_2,iVar1);
    }
    else if (param_2 != -1) {
      FUN_088243d8(DAT_08ac5c70,param_2,iVar1);
    }
  }
  return;
}

