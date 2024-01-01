#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_08887bac(float param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  param_4 = param_4 & 0xff;
  fVar3 = 0.0;
  if ((*(char *)((int)param_2 + 0x8d) == '\0') && (0.0 < param_1)) {
    fVar2 = (float)FUN_08887b94(param_2);
    fVar2 = fVar2 - param_1;
    if ((param_4 != 0) && (fVar2 <= fVar3)) {
      fVar2 = 1.0;
    }
    if (fVar2 <= fVar3) {
      *(undefined *)((int)param_2 + 0x8d) = 1;
      fVar2 = fVar3;
    }
    FUN_08887ae4(fVar2,param_2);
    if ((*(int *)(DAT_08ac58c4 + 0x20) == 1) &&
       (iVar1 = *(int *)(*param_2 + 0x14),
       iVar1 = (**(code **)(iVar1 + 0xb4))(*param_2 + (int)*(short *)(iVar1 + 0xb0)), iVar1 != 0)) {
      fVar2 = *(float *)(*param_2 + 0x590);
      iVar1 = FUN_08887a90(param_2);
      fVar3 = (float)iVar1;
      if (iVar1 < 0) {
        fVar3 = fVar3 + 4.294967e+09;
      }
      FUN_08887ae4(fVar3 * fVar2,param_2);
      *(undefined *)((int)param_2 + 0x8d) = 0;
    }
    return param_1;
  }
  return 0.0;
}

