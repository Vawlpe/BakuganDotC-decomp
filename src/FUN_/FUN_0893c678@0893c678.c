#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893c678(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  int iVar6;
  undefined auStack_f0 [64];
  undefined auStack_b0 [128];
  
  iVar3 = *(int *)(param_1 + 0x7ec);
  switch(*(undefined *)(param_1 + 0x5ee)) {
  case 0:
    return;
  case 1:
    FUN_089b4c84(auStack_f0,"DWCardHelp");
    iVar3 = iVar3 << 2;
    break;
  case 2:
    FUN_089b4c84(auStack_f0,"DWHologramHelp");
    iVar3 = iVar3 << 2;
    break;
  case 3:
    FUN_089b4c84(auStack_f0,"DWCommon");
    iVar3 = 0;
    break;
  case 4:
    FUN_0893b6f8(param_1,param_1 + 0x6c0,iVar3);
    FUN_089b4c84(auStack_f0,"DWCommon");
    iVar3 = 4;
    break;
  case 5:
    FUN_089b4c84(auStack_f0,"DWMaxusPartsHelp");
    iVar3 = DAT_08ac19f0 << 2;
    break;
  case 6:
    FUN_089b4c84(auStack_f0,"DWMetalFigureHelp");
    iVar3 = iVar3 << 2;
    break;
  case 7:
    FUN_089b4c84(auStack_f0,"DWSpecialUnlock");
    iVar3 = 8;
    break;
  case 8:
    FUN_089b4c84(auStack_f0,"DWSpecialUnlock");
    iVar3 = 0x14;
    break;
  case 9:
    FUN_089b4c84(auStack_f0,"DWCommon");
    iVar3 = 8;
    break;
  default:
    goto switchD_0893c6cc_caseD_a;
  }
  iVar2 = param_1 + 0x6c0;
  iVar1 = FUN_0880dc00(auStack_f0);
  FUN_088cc354(iVar1);
  if (*(char *)(param_1 + 0x5ee) == '\x04') {
    strcpy(auStack_b0,*(undefined4 *)(iVar1 + iVar3));
    strcat(iVar2,auStack_b0);
    iVar3 = *(int *)(param_1 + 0x63c);
  }
  else {
    strcpy(iVar2,*(undefined4 *)(iVar1 + iVar3));
    iVar3 = *(int *)(param_1 + 0x63c);
  }
  FUN_089f51b8();
  *(undefined4 *)(iVar3 + 0x84) = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x63c) + 0x74);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
  (**(code **)(iVar1 + 0x14))
            (*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 100),0,
             *(int *)(param_1 + 0x63c) + (int)*(short *)(iVar1 + 0x10),iVar2,1,0,0);
  FUN_088184e8(0,*(undefined4 *)(param_1 + 0x63c),iVar2,param_1 + 0x764,param_1 + 0x76c,
               param_1 + 0x774);
  *(undefined4 *)(param_1 + 0x75c) = *(undefined4 *)(*(int *)(param_1 + 0x63c) + 0x84);
  iVar1 = *(int *)(param_1 + 0x75c);
  iVar3 = 0;
  fVar5 = (float)*(int *)(*(int *)(param_1 + 0x63c) + 0x88);
  iVar2 = 0;
  *(float *)(param_1 + 0x754) = fVar5;
  if (0.0 < fVar5) {
    iVar4 = iVar1;
    do {
      iVar6 = (int)(*(float *)(iVar4 + 100) - *(float *)(iVar1 + 100));
      if (iVar3 < iVar6) {
        iVar3 = iVar6;
      }
      iVar2 = iVar2 + 1;
      iVar4 = *(int *)(iVar4 + 4);
    } while ((float)iVar2 < fVar5);
  }
  iVar2 = 0;
  if (0.0 < fVar5) {
    do {
      iVar2 = iVar2 + 1;
      *(float *)(iVar1 + 100) = *(float *)(iVar1 + 100) - (float)(iVar3 / 2 + 6);
      iVar1 = *(int *)(iVar1 + 4);
    } while ((float)iVar2 < *(float *)(param_1 + 0x754));
  }
  *(undefined4 *)(param_1 + 0x744) = 0;
  *(undefined4 *)(param_1 + 0x74c) = 0;
  *(undefined *)(param_1 + 0x779) = 1;
switchD_0893c6cc_caseD_a:
  return;
}

