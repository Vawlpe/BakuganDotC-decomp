#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885ff24(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  iVar3 = param_1 + 0x434;
  if (*(char *)(param_1 + 0x390) != '\0') {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
    bVar1 = false;
    if (iVar2 != 1) {
      bVar1 = true;
    }
  }
  if ((bVar1) && (*(int *)(param_1 + 8) != 0xf)) {
    if (param_2 == 6) {
      FUN_08888444(iVar3,6,0);
    }
    else {
      FUN_08888444(iVar3,param_2,param_3);
    }
  }
  else if (param_2 == 6) {
    FUN_088881b4(iVar3,6,param_3);
  }
  else {
    FUN_088881b4(iVar3,param_2,0);
  }
  return;
}

