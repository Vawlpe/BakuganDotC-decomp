#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089225d0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined auStack_120 [256];
  
  if (*(byte *)(param_1 + 0x22a1) == 0) {
    DAT_08ac0e70 = 1;
    iVar2 = FUN_089bf6e8(0x1fe,100);
    iVar1 = FUN_0880dc00("DWHologramHelp");
    FUN_088cc354(iVar1);
    uVar3 = (uint)*(byte *)(param_1 + 0x22a0);
    if (uVar3 == 0xb) {
      FUN_0890e844(*(undefined4 *)(iVar1 + 0x2c));
      *(undefined4 *)(iVar2 + 0x7c) = 1;
      *(undefined4 *)(iVar2 + 0x84) = 0;
      cVar6 = *(char *)(param_1 + 0x22a1) + '\x01';
    }
    else if (uVar3 == 10) {
      FUN_0890e844(*(undefined4 *)(iVar1 + 0x28));
      *(undefined4 *)(iVar2 + 0x7c) = 1;
      *(undefined4 *)(iVar2 + 0x84) = 0;
      cVar6 = *(char *)(param_1 + 0x22a1) + '\x01';
    }
    else if (uVar3 == 7) {
      uVar5 = *(undefined4 *)(PTR_PTR_DAT_08aae714 + 0x60);
      uVar4 = _DONE_Get_DAT_08AAC9E0();
      uVar4 = FUN_0880d0ac(uVar4,0x2d);
      FUN_089b4c84(auStack_120,uVar5,uVar4);
      uVar4 = FUN_08816aac();
      FUN_08816ba4(uVar4,auStack_120);
      iVar1 = FUN_08816aac();
      FUN_0890e844(*(undefined4 *)(iVar1 + 0xc));
      *(undefined *)(iVar2 + 0x92) = 0;
      *(undefined4 *)(iVar2 + 0x7c) = 1;
      *(undefined4 *)(iVar2 + 0x84) = 0;
      cVar6 = *(char *)(param_1 + 0x22a1) + '\x01';
    }
    else {
      uVar4 = *(undefined4 *)(iVar1 + uVar3 * 4);
      if (uVar3 == 6) {
        FUN_0890e844(uVar4);
        *(undefined4 *)(iVar2 + 0x7c) = 1;
        *(undefined4 *)(iVar2 + 0x84) = 1;
        cVar6 = *(char *)(param_1 + 0x22a1) + '\x01';
      }
      else {
        FUN_0890e844(uVar4);
        *(undefined4 *)(iVar2 + 0x7c) = 0;
        *(undefined4 *)(iVar2 + 0x84) = 1;
        cVar6 = *(char *)(param_1 + 0x22a1) + '\x01';
      }
    }
    *(char *)(param_1 + 0x22a1) = cVar6;
  }
  else {
    if (1 < *(byte *)(param_1 + 0x22a1)) {
      return 1;
    }
    DAT_08ac0e70 = 1;
    iVar2 = FUN_089bf93c(0x1fe,1);
    if (iVar2 == 0) {
      iVar2 = FUN_0890e868();
      if (iVar2 == 1) {
        *(undefined *)(param_1 + 0x22a2) = 0;
      }
      else {
        *(undefined *)(param_1 + 0x22a2) = 1;
      }
      *(undefined *)(param_1 + 0x22a1) = 2;
    }
  }
  return 0;
}

