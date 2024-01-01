#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cc3a8(int param_1,short param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined auStack_50 [64];
  
  iVar4 = (int)param_2;
  uVar1 = FUN_0880dd54();
  FUN_089b4c84(auStack_50,"mes_CharacterName_%s.bin",uVar1);
  iVar2 = FUN_089be054(DAT_08ac520c,auStack_50);
  iVar3 = FUN_088cc354(iVar2);
  *(undefined4 *)(param_1 + 0x214) = 0;
  if (iVar4 < iVar3) {
    uVar1 = *(undefined4 *)(iVar2 + iVar4 * 4);
    *(int *)(param_1 + 0x204) = iVar4;
    *(undefined4 *)(param_1 + 0x214) = uVar1;
  }
  else {
    *(undefined4 *)(param_1 + 0x204) = 0xffffffff;
  }
  return;
}

