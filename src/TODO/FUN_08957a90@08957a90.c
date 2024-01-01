#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08957a90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x5028) != 0) {
    if (*(float *)(param_1 + 0x50e0) == 0.0) {
      iVar3 = *(int *)(param_1 + 0x5028);
    }
    else if (*(char *)(param_1 + 0x5108) == '\0') {
      iVar3 = *(int *)(param_1 + 0x5028);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x50e8);
      iVar3 = 0;
      if (0.0 < *(float *)(param_1 + 0x50e0)) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar4 + 0xbc) = *(undefined4 *)(param_1 + 0x50d0);
          iVar4 = *(int *)(iVar4 + 4);
        } while ((float)iVar3 < *(float *)(param_1 + 0x50e0));
      }
      *(undefined *)(param_1 + 0x5108) = 0;
      iVar3 = *(int *)(param_1 + 0x5028);
    }
    uVar1 = DAT_08b00f5c;
    uVar5 = DAT_08b00f58;
    uVar2 = DAT_08b00f54;
    *(undefined4 *)(iVar3 + 0xc0) = DAT_08b00f50;
    *(undefined4 *)(iVar3 + 0xc4) = uVar2;
    *(undefined4 *)(iVar3 + 200) = uVar5;
    *(undefined4 *)(iVar3 + 0xcc) = uVar1;
    uVar5 = *(undefined4 *)(param_1 + 0x5028);
    uVar2 = FUN_089f2178(0x457a0000);
    FUN_089f5084(uVar5,uVar2);
  }
  return;
}

