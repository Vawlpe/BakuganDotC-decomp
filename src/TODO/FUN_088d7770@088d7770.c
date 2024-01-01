#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d7770(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined4 local_20;
  float local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(param_1 + 0x180);
  if (iVar2 < 2) {
    if (-1 < iVar2) {
      if (iVar2 < 1) {
        iVar2 = _DONE_NotZero_DAT_08AC5874();
        if (iVar2 != 0) {
          uVar1 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar1,0x2c00032,0,0);
        }
        iVar2 = _DONE_NotZero_DAT_08AC5874();
        if (iVar2 != 0) {
          uVar1 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar1,0x2c00039,0,0);
        }
        local_20 = *(undefined4 *)(param_1 + 0x20);
        uStack_18 = *(undefined4 *)(param_1 + 0x28);
        uStack_14 = *(undefined4 *)(param_1 + 0x2c);
        local_1c = *(float *)(param_1 + 0x24) + 3.0;
        FUN_08823f5c(DAT_08ac5c70,0x3c,&local_20);
        *(float *)(param_1 + 0x1f8) = *(float *)(param_1 + 0x1f8) - 0.03;
        *(undefined4 *)(param_1 + 0x180) = 1;
      }
      else {
        (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
                  (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
        *(undefined4 *)(param_1 + 0x180) = 2;
      }
    }
  }
  else if (iVar2 < 3) {
    fVar3 = (float)FUN_089df49c(param_1);
    fVar4 = (float)FUN_089df51c(param_1);
    if (fVar4 <= fVar3) {
      *(undefined4 *)(param_1 + 0x180) = 3;
    }
  }
  else if (iVar2 < 4) {
    *(undefined4 *)(param_1 + 0x16c) = 0;
    *(undefined4 *)(param_1 + 0x180) = 0;
  }
  return;
}

