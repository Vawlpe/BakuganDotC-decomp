#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089698b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0x2a88) != 0) {
    if (*(float *)(param_1 + 0x2b40) == 0.0) {
      iVar3 = *(int *)(param_1 + 0x2a88);
    }
    else if (*(char *)(param_1 + 0x2b65) == '\0') {
      iVar3 = *(int *)(param_1 + 0x2a88);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x2b48);
      iVar3 = 0;
      if (0.0 < *(float *)(param_1 + 0x2b40)) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar4 + 0xbc) = *(undefined4 *)(param_1 + 0x2b30);
          iVar4 = *(int *)(iVar4 + 4);
        } while ((float)iVar3 < *(float *)(param_1 + 0x2b40));
      }
      *(undefined *)(param_1 + 0x2b65) = 0;
      iVar3 = *(int *)(param_1 + 0x2a88);
    }
    uVar1 = DAT_08b0019c;
    uVar5 = DAT_08b00198;
    uVar2 = DAT_08b00194;
    *(undefined4 *)(iVar3 + 0xc0) = DAT_08b00190;
    *(undefined4 *)(iVar3 + 0xc4) = uVar2;
    *(undefined4 *)(iVar3 + 200) = uVar5;
    *(undefined4 *)(iVar3 + 0xcc) = uVar1;
    uVar5 = *(undefined4 *)(param_1 + 0x2a88);
    uVar2 = FUN_089f2178(0x457a0000);
    FUN_089f5084(uVar5,uVar2);
  }
  return;
}

