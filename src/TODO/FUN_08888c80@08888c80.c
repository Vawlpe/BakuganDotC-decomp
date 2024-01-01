#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08888c80(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *(float *)(*(int *)(param_1 + 0x88) + param_3 * 0xc + 0xe0);
  if ((*(char *)(param_1 + 0x8d) == '\0') && (iVar1 = FUN_08888c1c(param_1,param_2,1), iVar1 != 0))
  {
    fVar5 = *(float *)(param_1 + 0x98);
    iVar1 = FUN_08887a90(param_1);
    fVar4 = (float)iVar1;
    if (iVar1 < 0) {
      fVar4 = fVar4 + 4.294967e+09;
    }
    if (fVar5 / fVar4 < 0.2) {
      iVar1 = param_1 + param_2 * 4;
      uVar2 = *(uint *)(iVar1 + 0xd4);
      if ((int)uVar2 < 0) {
        uVar2 = -(-uVar2 & 3);
      }
      else {
        uVar2 = uVar2 & 3;
      }
      fVar3 = *(float *)(iVar1 + 0xbc) +
              fVar3 * *(float *)(*(int *)(param_1 + 0x88) + uVar2 * 0xc + 0xe8);
      *(float *)(iVar1 + 0xbc) = fVar3;
      if (10000.0 < fVar3) {
        *(undefined4 *)(iVar1 + 0xbc) = 0x461c4000;
      }
    }
  }
  return;
}

