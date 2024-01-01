#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08895a04(int param_1)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x138) + 0x14))
                    (param_1 + 0xf0 + (int)*(short *)(*(int *)(param_1 + 0x138) + 0x10));
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x96c) == 0) {
      uVar2 = *(uint *)(param_1 + 0x9d4);
      iVar1 = (**(code **)(*(int *)(param_1 + 0xe8) + 0x14))
                        (param_1 + 0xa0 + (int)*(short *)(*(int *)(param_1 + 0xe8) + 0x10));
      if (iVar1 == 0 && ((uVar2 & 0x1000) == 0 && ((uVar2 & 0x2000) == 0 && (uVar2 & 0x4000) == 0)))
      {
        *(undefined *)(param_1 + 0x104) = 1;
      }
      fVar3 = *(float *)(param_1 + 0x934);
    }
    else {
      fVar3 = *(float *)(param_1 + 0x934);
    }
    if (3.0 <= fVar3) {
      *(undefined *)(param_1 + 0x104) = 1;
    }
    iVar1 = *(int *)(param_1 + 0x138);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x138);
  }
  (**(code **)(iVar1 + 0x14))(param_1 + 0xf0 + (int)*(short *)(iVar1 + 0x10));
  return;
}

