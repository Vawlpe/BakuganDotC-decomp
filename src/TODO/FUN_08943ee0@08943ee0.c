#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08943ee0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined auStack_a0 [136];
  
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 < 1) {
    if (-1 < iVar4) {
      if (*(int *)(param_1 + 0x20) == 0) {
        return;
      }
      iVar4 = FUN_089eb03c(*(undefined4 *)(param_1 + 0x20),0x80);
      if (iVar4 == 0) {
        return;
      }
      uVar3 = FUN_089eb248(*(undefined4 *)(param_1 + 0x20));
      FUN_08817a90(uVar3,1);
      iVar4 = FUN_089eb248(*(undefined4 *)(param_1 + 0x20));
      uVar2 = DAT_08b00f5c;
      uVar1 = DAT_08b00f58;
      uVar3 = DAT_08b00f54;
      *(undefined4 *)(iVar4 + 0xb0) = DAT_08b00f50;
      *(undefined4 *)(iVar4 + 0xb4) = uVar3;
      *(undefined4 *)(iVar4 + 0xb8) = uVar1;
      *(undefined4 *)(iVar4 + 0xbc) = uVar2;
      iVar4 = FUN_089eb248(*(undefined4 *)(param_1 + 0x20));
      uVar2 = DAT_08b00f5c;
      uVar1 = DAT_08b00f58;
      uVar3 = DAT_08b00f54;
      *(undefined4 *)(iVar4 + 0xc0) = DAT_08b00f50;
      *(undefined4 *)(iVar4 + 0xc4) = uVar3;
      *(undefined4 *)(iVar4 + 200) = uVar1;
      *(undefined4 *)(iVar4 + 0xcc) = uVar2;
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      return;
    }
  }
  else if (iVar4 < 2) {
    iVar4 = DAT_08ac1bd4 * 4;
    *(int *)(param_1 + 0x2c) = DAT_08ac1bd4;
    FUN_089eb2e0(auStack_a0,
                 *(undefined4 *)(PTR_PTR_DAT_08aae714 + *(int *)(&DAT_08a9d020 + iVar4) * 4));
    FUN_089eb14c(*(undefined4 *)(param_1 + 0x20),0xf0,0x88,auStack_a0,1,0);
    iVar4 = FUN_089eb248(*(undefined4 *)(param_1 + 0x20));
    iVar7 = *(int *)(iVar4 + 0x84);
    iVar4 = FUN_089eb248(*(undefined4 *)(param_1 + 0x20));
    iVar5 = *(int *)(iVar4 + 0x88);
    *(int *)(param_1 + 0x24) = iVar7;
    iVar4 = 0;
    *(int *)(param_1 + 0x28) = iVar5;
    if (0 < iVar5) {
      do {
        uVar6 = *(uint *)(iVar7 + 0xd0);
        iVar4 = iVar4 + 1;
        *(uint *)(iVar7 + 0xd0) = uVar6 | 0x20;
        *(uint *)(iVar7 + 0xd0) = uVar6 & 0xfffffffe | 0x20;
        iVar7 = iVar7 + 0x160;
      } while (iVar4 < iVar5);
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

