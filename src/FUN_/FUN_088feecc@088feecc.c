#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088feecc(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_50 [64];
  
  iVar1 = FUN_0880ddb4(0xffffffff);
  if ((*(int *)(&DAT_08ab9c2c + iVar1 * 4) != 0) && (*(int *)(param_1 + 0x4c4) != 0)) {
    strcpy(auStack_50,*(undefined4 *)(*(int *)(&DAT_08ab9c2c + iVar1 * 4) + param_2 * 4));
    uVar2 = FUN_089d9674();
    FUN_089d988c(uVar2,auStack_50);
  }
  return;
}

