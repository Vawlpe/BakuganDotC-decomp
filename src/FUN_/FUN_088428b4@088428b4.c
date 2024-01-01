#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088428b4(float param_1,float param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  float fVar8;
  
  iVar1 = -1;
  iVar7 = 0;
  piVar6 = &DAT_08a65498;
  piVar5 = &DAT_08a654f4;
  piVar4 = &DAT_08a65550;
  piVar3 = &DAT_08a655ac;
  do {
    if (param_4 < 2) {
      if (-1 < param_4) {
        if (param_4 < 1) {
          iVar1 = *piVar6;
        }
        else {
          iVar1 = *piVar5;
        }
      }
    }
    else if (param_4 < 3) {
      iVar1 = *piVar4;
    }
    else if (param_4 < 4) {
      iVar1 = *piVar3;
    }
    if (iVar1 != -1) {
      iVar2 = *(int *)(*(int *)(param_3 + 0x60) + iVar1 * 4);
      if (param_1 == 0.0) {
        *(float *)(iVar2 + 0x60) = *(float *)(iVar2 + 0x90);
        fVar8 = *(float *)(iVar2 + 0x94);
      }
      else {
        *(float *)(iVar2 + 0x60) = *(float *)(iVar2 + 0x90) + param_1;
        fVar8 = *(float *)(iVar2 + 0x94);
      }
      if (param_2 == 0.0) {
        *(float *)(iVar2 + 100) = fVar8;
      }
      else {
        *(float *)(iVar2 + 100) = fVar8 + param_2;
      }
    }
    iVar7 = iVar7 + 1;
    piVar6 = piVar6 + 1;
    piVar5 = piVar5 + 1;
    piVar4 = piVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar7 < 0x17);
  return;
}

