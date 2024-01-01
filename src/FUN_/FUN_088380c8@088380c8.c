#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088380c8(int param_1,int param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 + param_3 * 2;
  sVar1 = *(short *)(iVar3 + 0xae8);
  if (sVar1 < 1) {
    if (((-1 < sVar1) && (*(int *)(DAT_08ac58c4 + 0x2c) == 9)) &&
       (*(char *)(param_2 + 0x665) != '\0')) {
      *(short *)(iVar3 + 0xae8) = sVar1 + 1;
    }
  }
  else if (sVar1 < 2) {
    iVar2 = FUN_0882cce0(param_1,0,0x35,0x2a11,0);
    if (iVar2 != 0) {
      FUN_0882cd8c(param_1,1,2,PTR_DAT_08ab9f80,0xffffffff);
      *(short *)(iVar3 + 0xae8) = *(short *)(iVar3 + 0xae8) + 1;
    }
  }
  else if ((sVar1 < 3) && (*(int *)(DAT_08ac58c4 + 0x2c) != 9)) {
    FUN_0882cd8c(param_1,0,0,0,0xffffffff);
    *(short *)(iVar3 + 0xae8) = *(short *)(iVar3 + 0xae8) + 1;
  }
  return;
}

