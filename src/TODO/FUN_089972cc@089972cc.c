#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089972cc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = 0;
  do {
    if (*(int *)(param_1 + 0x1220) == 0) {
      return;
    }
    if (*(float *)(param_1 + 0x122c) == 0.0) {
      iVar3 = *(int *)(param_1 + 0x1220);
    }
    else if (*(float *)(param_1 + 0x1224) == *(float *)(param_1 + 0x1228)) {
      iVar3 = *(int *)(param_1 + 0x1220);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x1240);
      iVar3 = 0;
      if (0.0 < *(float *)(param_1 + 0x122c)) {
        do {
          iVar3 = iVar3 + 1;
          *(undefined4 *)(iVar4 + 0xbc) = *(undefined4 *)(param_1 + 0x1224);
          iVar4 = *(int *)(iVar4 + 4);
        } while ((float)iVar3 < *(float *)(param_1 + 0x122c));
      }
      *(undefined4 *)(param_1 + 0x1228) = *(undefined4 *)(param_1 + 0x1224);
      iVar3 = *(int *)(param_1 + 0x1220);
    }
    uVar1 = DAT_08b0019c;
    uVar6 = DAT_08b00198;
    uVar2 = DAT_08b00194;
    *(undefined4 *)(iVar3 + 0xc0) = DAT_08b00190;
    *(undefined4 *)(iVar3 + 0xc4) = uVar2;
    *(undefined4 *)(iVar3 + 200) = uVar6;
    *(undefined4 *)(iVar3 + 0xcc) = uVar1;
    uVar6 = *(undefined4 *)(param_1 + 0x1220);
    uVar2 = FUN_089f2178(0x43c80000);
    FUN_089f5084(uVar6,uVar2);
    iVar5 = iVar5 + 1;
    param_1 = param_1 + 0x224;
  } while (iVar5 < 3);
  return;
}

