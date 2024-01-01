#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893aae8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  undefined auStack_70 [64];
  
  switch(*(undefined *)(param_1 + 0x5ee)) {
  case 0:
    return;
  case 1:
    FUN_089b4c84(auStack_70,"DWCardName");
    break;
  case 2:
    FUN_089b4c84(auStack_70,"DWHologramName");
    break;
  case 3:
  case 4:
  case 5:
  case 7:
    return;
  case 6:
    FUN_089b4c84(auStack_70,"DWMetalFigureName");
    break;
  case 8:
    FUN_089b4c84(auStack_70,"DWSpecialUnlock");
    break;
  case 9:
    FUN_089b4c84(auStack_70,"DWMetalFigureName");
    break;
  default:
    goto switchD_0893ab38_caseD_a;
  }
  iVar3 = param_1 + 0x640;
  iVar1 = FUN_0880dc00(auStack_70);
  FUN_088cc354(iVar1);
  if (*(char *)(param_1 + 0x5ee) == '\t') {
    iVar2 = FUN_0893aa80(param_1,0,*(int *)(param_1 + 0x7ec) + 1U & 0xff);
    strcpy(iVar3,*(undefined4 *)(iVar1 + iVar2 * 4));
    iVar1 = *(int *)(param_1 + 0x638);
  }
  else {
    strcpy(iVar3,*(undefined4 *)(iVar1 + *(int *)(param_1 + 0x7ec) * 4));
    iVar1 = *(int *)(param_1 + 0x638);
  }
  FUN_089f51b8(iVar1);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x638) + 0x74);
  iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
  (**(code **)(iVar2 + 0x14))
            (*(undefined4 *)(iVar1 + 0x60),*(float *)(iVar1 + 100) + 4.0,0,
             *(int *)(param_1 + 0x638) + (int)*(short *)(iVar2 + 0x10),iVar3,1,0,0);
  FUN_088184e8(0,*(undefined4 *)(param_1 + 0x638),iVar3,param_1 + 0x760,param_1 + 0x768,
               param_1 + 0x770);
  *(undefined4 *)(param_1 + 0x758) = *(undefined4 *)(*(int *)(param_1 + 0x638) + 0x84);
  iVar3 = *(int *)(param_1 + 0x758);
  fVar4 = (float)*(int *)(*(int *)(param_1 + 0x638) + 0x88);
  iVar1 = 0;
  *(float *)(param_1 + 0x750) = fVar4;
  if (0.0 < fVar4) {
    do {
      iVar1 = iVar1 + 1;
      *(float *)(iVar3 + 100) = *(float *)(iVar3 + 100) - 12.0;
      iVar3 = *(int *)(iVar3 + 4);
    } while ((float)iVar1 < *(float *)(param_1 + 0x750));
  }
switchD_0893ab38_caseD_a:
  return;
}

