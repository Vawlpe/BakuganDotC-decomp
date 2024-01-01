#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08808718(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined auStack_320 [780];
  
  uVar6 = *(uint *)(param_1 + 0x14);
  if (uVar6 < 5) {
    if (uVar6 == 0) {
      iVar4 = FUN_089eb03c(*(undefined4 *)(param_1 + 0x2c),0x300);
      if (iVar4 == 0) {
        return;
      }
      uVar3 = FUN_089edb80();
      iVar4 = FUN_089edf70(uVar3);
      if (iVar4 == 0) {
        return;
      }
      uVar3 = FUN_089eb248(*(undefined4 *)(param_1 + 0x2c));
      FUN_08817a90(uVar3,0);
      *(undefined4 *)(param_1 + 0x14) = 1;
      uVar3 = FUN_089edb80();
      FUN_089ede1c(uVar3,1);
      uVar3 = FUN_089edb80();
      FUN_089edf24(uVar3,10);
      return;
    }
    if (uVar6 == 1) {
      uVar3 = FUN_089edb80();
      iVar4 = FUN_089edf70(uVar3);
      if (iVar4 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x14) = 2;
      return;
    }
    if (uVar6 == 2) {
      iVar4 = FUN_089eb134(*(undefined4 *)(param_1 + 0x2c));
      if (iVar4 == 0) {
        return;
      }
      uVar3 = FUN_089edb80();
      FUN_089ede1c(uVar3,4);
      puVar5 = DAT_08ac5934;
      iVar4 = FUN_089edb80();
      uVar3 = *(undefined4 *)(iVar4 + 0x44);
      uVar1 = *(undefined4 *)(iVar4 + 0x48);
      uVar2 = *(undefined4 *)(iVar4 + 0x4c);
      *puVar5 = *(undefined4 *)(iVar4 + 0x40);
      puVar5[1] = uVar3;
      puVar5[2] = uVar1;
      puVar5[3] = uVar2;
      uVar3 = FUN_089edb80();
      FUN_089edf24(uVar3,10);
      *(undefined4 *)(param_1 + 0x14) = 3;
      return;
    }
    if (uVar6 == 3) {
      FUN_089eb2e0(auStack_320,*(undefined4 *)PTR_PTR_DAT_08aae714);
      puVar5 = (undefined4 *)FUN_089eb23c(*(undefined4 *)(param_1 + 0x2c));
      uVar2 = DAT_08b0019c;
      uVar1 = DAT_08b00198;
      uVar3 = DAT_08b00194;
      *puVar5 = DAT_08b00190;
      puVar5[1] = uVar3;
      puVar5[2] = uVar1;
      puVar5[3] = uVar2;
      FUN_089eb14c(*(undefined4 *)(param_1 + 0x2c),0xf0,0x88,auStack_320,1,1);
      iVar4 = FUN_089ceba4(DAT_08ac5934);
      *(int *)(param_1 + 0x1c) = iVar4 * 3;
      *(undefined4 *)(param_1 + 0x14) = 4;
    }
    else if (uVar6 != 4) goto LAB_08808764;
    if (*(int *)(param_1 + 0x1c) < 1) {
      uVar3 = FUN_089edb80();
      FUN_089ede1c(uVar3,4);
      uVar3 = FUN_089edb80();
      FUN_089edf24(uVar3,10);
      *(undefined4 *)(param_1 + 0x14) = 5;
    }
    else {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    }
  }
  else {
LAB_08808764:
    uVar3 = FUN_089edb80();
    iVar4 = FUN_089edf70(uVar3);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
  }
  return;
}

