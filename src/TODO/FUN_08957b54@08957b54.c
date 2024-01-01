#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08957b54(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x502c) != 0) {
    if (*(float *)(param_1 + 0x50e4) == 0.0) {
      iVar3 = *(int *)(param_1 + 0x502c);
    }
    else if (*(char *)(param_1 + 0x5109) == '\0') {
      iVar3 = *(int *)(param_1 + 0x502c);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x50ec);
      iVar3 = 0;
      if (0.0 < *(float *)(param_1 + 0x50e4)) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar4 + 0xbc) = *(undefined4 *)(param_1 + 0x50d4);
          iVar4 = *(int *)(iVar4 + 4);
        } while ((float)iVar3 < *(float *)(param_1 + 0x50e4));
      }
      *(undefined *)(param_1 + 0x5109) = 0;
      iVar3 = *(int *)(param_1 + 0x502c);
    }
    uVar1 = DAT_08b0019c;
    uVar5 = DAT_08b00198;
    uVar2 = DAT_08b00194;
    *(undefined4 *)(iVar3 + 0xc0) = DAT_08b00190;
    *(undefined4 *)(iVar3 + 0xc4) = uVar2;
    *(undefined4 *)(iVar3 + 200) = uVar5;
    *(undefined4 *)(iVar3 + 0xcc) = uVar1;
    uVar5 = *(undefined4 *)(param_1 + 0x502c);
    uVar2 = FUN_089f2178(0x457a0000);
    FUN_089f5084(uVar5,uVar2);
  }
  return;
}

