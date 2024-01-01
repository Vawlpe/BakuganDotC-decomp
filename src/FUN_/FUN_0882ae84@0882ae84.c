#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0882ae84(int param_1)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  
  uVar1 = *(uint *)(param_1 + 0x540);
  if (uVar1 < 6) {
    if (uVar1 == 1) {
      if (-1 < *(int *)(param_1 + 0x538)) {
        iVar2 = *(int *)(param_1 + 0x534);
        *(int *)(param_1 + 0x534) = iVar2 + 1;
        if (iVar2 <= *(int *)(param_1 + 0x538)) {
          iVar2 = *(int *)(param_1 + 0x53c);
          goto LAB_0882af28;
        }
        *(int *)(param_1 + 0x540) = *(int *)(param_1 + 0x540) + 1;
      }
    }
    else if (uVar1 == 2) {
      fVar3 = *(float *)(param_1 + 0x530) - 0.05;
      *(float *)(param_1 + 0x530) = fVar3;
      if (fVar3 <= 0.0) {
        *(undefined4 *)(param_1 + 0x530) = 0;
        *(undefined4 *)(param_1 + 0x540) = 3;
      }
    }
    else if (uVar1 == 3) {
      *(undefined4 *)(param_1 + 0x540) = 4;
    }
    else {
      if ((uVar1 == 4) || (uVar1 == 5)) {
        FUN_089bf7a8(param_1,1);
        return 1;
      }
      fVar3 = *(float *)(param_1 + 0x530) + 0.1;
      *(float *)(param_1 + 0x530) = fVar3;
      if (1.0 <= fVar3) {
        *(undefined4 *)(param_1 + 0x530) = 0x3f800000;
        *(uint *)(param_1 + 0x540) = uVar1 + 1;
      }
      if (*(int *)(param_1 + 0x53c) == 1) {
        *(code **)(DAT_08ac5934 + 0x14) = FUN_0882ab08;
      }
    }
    iVar2 = *(int *)(param_1 + 0x53c);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x53c);
  }
LAB_0882af28:
  *(int *)(param_1 + 0x53c) = iVar2 + 1;
  return 0;
}

