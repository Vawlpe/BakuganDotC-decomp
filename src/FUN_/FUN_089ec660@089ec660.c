#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ec660(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(int *)(param_1 + 0x5c) != 0)) {
    fVar6 = *(float *)(param_1 + 0x28);
    fVar5 = *(float *)(param_1 + 0x20);
    fVar8 = *(float *)(param_1 + 0x2c);
    fVar7 = *(float *)(param_1 + 0x24);
    iVar4 = *(int *)(param_1 + 0x7c);
    iVar2 = *(int *)(param_1 + 0x60);
    if ((iVar2 < 0) || (*(int *)(param_1 + 100) <= iVar2)) {
      FUN_089ed6a0(iVar4,0);
    }
    else {
      if (*(char *)(param_1 + 0x5a) == '\0') {
        iVar2 = FUN_089eb248(*(undefined4 *)(param_1 + 0x74));
        *(float *)(iVar4 + 0x40) =
             ((float)(int)(fVar5 - fVar6 * 0.5) +
             *(float *)(iVar2 + 0x94) *
             *(float *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60) * 8)) - 1.0;
        uVar3 = *(undefined4 *)(param_1 + 0x74);
      }
      else {
        iVar2 = FUN_089ec414(param_1,iVar2);
        *(float *)(iVar4 + 0x40) = (float)iVar2 - 2.0;
        uVar3 = *(undefined4 *)(param_1 + 0x74);
      }
      iVar2 = FUN_089eb248(uVar3);
      *(float *)(iVar4 + 0x44) =
           (float)(int)(fVar7 - fVar8 * 0.5) +
           *(float *)(iVar2 + 0x98) *
           (float)(int)*(short *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60) * 8 + 4);
      sVar1 = *(short *)(*(int *)(param_1 + 0x5c) + *(int *)(param_1 + 0x60) * 8 + 6);
      iVar2 = FUN_089eb248(*(undefined4 *)(param_1 + 0x74));
      FUN_089ed7b0(iVar4,(int)((float)(int)sVar1 + 2.0),(int)*(float *)(iVar2 + 0x98));
      fVar6 = *(float *)(param_1 + 0x6c);
      fVar5 = *(float *)(param_1 + 0x68) + fVar6;
      *(float *)(param_1 + 0x68) = fVar5;
      if (0 < *(int *)(param_1 + 0x1c)) {
        fVar5 = fVar5 + fVar6 * 5.0;
        *(float *)(param_1 + 0x68) = fVar5;
      }
      if (1.0 < fVar5) {
        *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
        *(float *)(param_1 + 0x6c) = -fVar6;
        fVar5 = 1.0;
      }
      else if (fVar5 < 0.0) {
        *(undefined4 *)(param_1 + 0x68) = 0;
        *(float *)(param_1 + 0x6c) = -fVar6;
        fVar5 = 0.0;
      }
      *(float *)(iVar4 + 0x1c) = fVar5 * 0.5 + 0.5;
      FUN_089ed6a0(iVar4,1);
    }
  }
  return;
}

