#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08982878(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (*(int *)(param_1 + 0xcd8) != 0) {
    if (*(float *)(param_1 + 0xce4) == 0.0) {
      iVar3 = *(int *)(param_1 + 0xcd8);
    }
    else if (*(float *)(param_1 + 0xcdc) == *(float *)(param_1 + 0xce0)) {
      iVar3 = *(int *)(param_1 + 0xcd8);
    }
    else {
      iVar4 = *(int *)(param_1 + 0xcf8);
      iVar3 = 0;
      if (0.0 < *(float *)(param_1 + 0xce4)) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar4 + 0xbc) = *(undefined4 *)(param_1 + 0xcdc);
          iVar4 = *(int *)(iVar4 + 4);
        } while ((float)iVar3 < *(float *)(param_1 + 0xce4));
      }
      *(undefined4 *)(param_1 + 0xce0) = *(undefined4 *)(param_1 + 0xcdc);
      iVar3 = *(int *)(param_1 + 0xcd8);
    }
    uVar1 = DAT_08b0019c;
    uVar5 = DAT_08b00198;
    uVar2 = DAT_08b00194;
    *(undefined4 *)(iVar3 + 0xc0) = DAT_08b00190;
    *(undefined4 *)(iVar3 + 0xc4) = uVar2;
    *(undefined4 *)(iVar3 + 200) = uVar5;
    *(undefined4 *)(iVar3 + 0xcc) = uVar1;
    uVar5 = *(undefined4 *)(param_1 + 0xcd8);
    uVar2 = FUN_089f2178(0x43a00000);
    FUN_089f5084(uVar5,uVar2);
  }
  return;
}

