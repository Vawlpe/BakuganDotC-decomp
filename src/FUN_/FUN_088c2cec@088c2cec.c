#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c2cec(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  
  uVar3 = DAT_08b001bc;
  uVar2 = DAT_08b001b8;
  uVar4 = DAT_08b001b4;
  puVar1 = DAT_08ac5934;
  uVar6 = *(uint *)(param_1 + 0x61c);
  if (uVar6 < 5) {
    if (uVar6 == 1) {
      iVar5 = FUN_089c2b10(1);
      if (iVar5 != 0) {
        uVar4 = FUN_089c2b48(1);
        iVar5 = FUN_089c3818(uVar4);
        if (iVar5 == 0) {
          return;
        }
      }
      iVar5 = FUN_089c2f78();
      if (iVar5 == 0) {
        FUN_089c2ef0();
      }
      else {
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      }
    }
    else if (uVar6 == 2) {
      iVar5 = FUN_089c2f78();
      if (iVar5 != 0) {
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      }
    }
    else if (uVar6 == 3) {
      *DAT_08ac5934 = DAT_08b001b0;
      puVar1[1] = uVar4;
      puVar1[2] = uVar2;
      puVar1[3] = uVar3;
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    else if (uVar6 == 4) {
      iVar5 = FUN_089c8f8c();
      if (iVar5 != 0) {
        *(undefined4 *)(DAT_08ac58c4 + 0xc) = *(undefined4 *)(param_1 + 0x620);
        FUN_089bf7a8(param_1,1);
      }
    }
    else {
      FUN_088be360(param_1,0);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  return;
}

