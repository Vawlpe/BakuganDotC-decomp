#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b2248(float param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  if ((DAT_08abd620 != (int *)0x0) && (iVar6 = *DAT_08abd620, iVar6 != 0)) {
    sVar1 = *(short *)(iVar6 + 0x32);
    while (sVar1 != param_2) {
      iVar6 = *(int *)(iVar6 + 4);
      if (iVar6 == 0) {
        return;
      }
      sVar1 = *(short *)(iVar6 + 0x32);
    }
    iVar5 = 0;
    if (DAT_08abd5bc != (int *)0x0) {
      iVar5 = *DAT_08abd5bc;
    }
    if (iVar5 != 0) {
      iVar7 = *(int *)(iVar5 + 0x154);
      while (iVar7 != iVar6) {
        iVar5 = *(int *)(iVar5 + 4);
        if (iVar5 == 0) {
          return;
        }
        iVar7 = *(int *)(iVar5 + 0x154);
      }
      *(float *)(iVar5 + 0x40) = param_1;
      *(float *)(iVar5 + 0x44) = param_1;
      *(float *)(iVar5 + 0x48) = param_1;
      *(undefined4 *)(iVar5 + 0x4c) = 0;
      uVar2 = *(undefined4 *)(iVar6 + 0x24);
      uVar3 = *(undefined4 *)(iVar6 + 0x28);
      uVar4 = *(undefined4 *)(iVar6 + 0x2c);
      *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar6 + 0x20);
      *(undefined4 *)(iVar5 + 0x24) = uVar2;
      *(undefined4 *)(iVar5 + 0x28) = uVar3;
      *(undefined4 *)(iVar5 + 0x2c) = uVar4;
      fVar8 = *(float *)(iVar5 + 0x24);
      iVar6 = FUN_088a9614();
      *(float *)(iVar5 + 0x24) = fVar8 - *(float *)(iVar6 + 4) * param_1;
    }
  }
  return;
}

