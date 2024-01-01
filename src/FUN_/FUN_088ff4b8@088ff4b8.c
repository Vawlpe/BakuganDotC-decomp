#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ff4b8(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined auStack_50 [64];
  
  iVar2 = FUN_0880ddb4(0xffffffff);
  if ((*(int *)(&DAT_08ab9c2c + iVar2 * 4) != 0) && (*(int *)(param_1 + 0x4c4) != 0)) {
    puVar4 = (undefined4 *)(*(int *)(&DAT_08ab9c2c + iVar2 * 4) + param_2 * 4);
    strcpy(auStack_50,*puVar4);
    strcat(auStack_50,&DAT_08a99d10);
    uVar3 = FUN_089d9674();
    FUN_089d9914(uVar3,auStack_50);
    iVar2 = *(int *)(param_1 + 0x4c4);
    uVar3 = FUN_089d9674();
    uVar1 = FUN_089d9c84(uVar3,*puVar4);
    *(undefined2 *)(*(int *)(iVar2 + 0x164) + param_2 * 2) = uVar1;
  }
  return;
}

