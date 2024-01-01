#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fa580(int *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  bVar2 = false;
  iVar7 = 0;
  FUN_089bb728(param_1[0x11]);
  if (*(char *)((int)param_1 + 9) == '\0') {
    cVar4 = *(char *)((int)param_1 + 9);
  }
  else if (param_1[5] < 0) {
    cVar4 = *(char *)((int)param_1 + 9);
  }
  else {
    iVar6 = zz_sceIoPollAsync(param_1[5],param_1 + 6);
    if (iVar6 < 1) {
      *(undefined *)((int)param_1 + 9) = 0;
      *(undefined *)((int)param_1 + 10) = 1;
      param_1[8] = param_1[6];
      cVar4 = *(char *)((int)param_1 + 9);
    }
    else {
      cVar4 = *(char *)((int)param_1 + 9);
    }
  }
  iVar6 = *param_1;
  if (cVar4 != '\0') goto LAB_089fa840;
  iVar5 = param_1[0x39];
  if ((param_1[8] < 0) && (iVar5 == 2)) {
    if (param_1[8] != -0x7ffdfcd7) {
      if (*(char *)((int)param_1 + 0xe1) == '\0') {
        param_1[0x3a] = 1;
        iVar5 = FUN_089fa2b0(param_1);
        if (iVar5 == 0) {
          FUN_089fa1ac(param_1,param_1[8]);
        }
      }
      *(undefined *)(param_1 + 0x3b) = 1;
      iVar5 = param_1[0x39];
      goto LAB_089fa664;
    }
    cVar4 = *(char *)(param_1 + 0x3b);
  }
  else {
LAB_089fa664:
    cVar4 = *(char *)(param_1 + 0x3b);
  }
  if (cVar4 != '\0') {
    switch(*param_1) {
    case 1:
      if (iVar5 == 2) goto switchD_089fa694_caseD_2;
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
switchD_089fa694_caseD_2:
      *param_1 = 6;
      *(undefined *)((int)param_1 + 10) = 0;
      *(undefined *)((int)param_1 + 9) = 0;
      param_1[8] = 0;
      break;
    case 6:
    }
  }
  bVar1 = true;
  if ((iVar5 == 2) && (iVar5 = FUN_089fb03c(), iVar5 != 0)) {
    uVar3 = _DONE_GetPtr_DAT_08AC61A8();
    iVar5 = FUN_089fb238(uVar3);
    if (iVar5 == 0) {
      bVar1 = false;
    }
  }
  if (!bVar1) {
    cVar4 = *(char *)((int)param_1 + 0xb);
    goto LAB_089fa844;
  }
  switch(*param_1) {
  case 1:
    (**(code **)(param_1[0x40] + 0x1c))((int)param_1 + (int)*(short *)(param_1[0x40] + 0x18));
    cVar4 = *(char *)((int)param_1 + 0xb);
    break;
  case 2:
    (**(code **)(param_1[0x40] + 0x24))((int)param_1 + (int)*(short *)(param_1[0x40] + 0x20));
    cVar4 = *(char *)((int)param_1 + 0xb);
    break;
  case 3:
    bVar2 = true;
    goto LAB_089fa840;
  case 4:
    (**(code **)(param_1[0x40] + 0x2c))((int)param_1 + (int)*(short *)(param_1[0x40] + 0x28));
    cVar4 = *(char *)((int)param_1 + 0xb);
    break;
  case 5:
    iVar7 = (**(code **)(param_1[0x40] + 0x34))
                      ((int)param_1 + (int)*(short *)(param_1[0x40] + 0x30));
    goto LAB_089fa840;
  case 6:
    (**(code **)(param_1[0x40] + 0x3c))((int)param_1 + (int)*(short *)(param_1[0x40] + 0x38));
    cVar4 = *(char *)((int)param_1 + 0xb);
    break;
  case 7:
    (**(code **)(param_1[0x40] + 0x44))((int)param_1 + (int)*(short *)(param_1[0x40] + 0x40));
    cVar4 = *(char *)((int)param_1 + 0xb);
    break;
  case 8:
    (**(code **)(param_1[0x40] + 0x4c))((int)param_1 + (int)*(short *)(param_1[0x40] + 0x48));
    cVar4 = *(char *)((int)param_1 + 0xb);
    break;
  case 9:
    if (*(char *)(param_1 + 2) == '\0') {
      *param_1 = 1;
    }
LAB_089fa840:
    cVar4 = *(char *)((int)param_1 + 0xb);
    break;
  case 10:
    (**(code **)(param_1[0x40] + 0x54))((int)param_1 + (int)*(short *)(param_1[0x40] + 0x50));
    cVar4 = *(char *)((int)param_1 + 0xb);
    break;
  default:
    cVar4 = *(char *)((int)param_1 + 0xb);
  }
LAB_089fa844:
  if (cVar4 != '\0') {
    zz_sceRtcGetCurrentClockLocalTime(&DAT_08ac6198);
  }
  if (((iVar7 == 0) && (*(char *)((int)param_1 + 9) == '\0')) && (*param_1 == 0)) {
    bVar2 = true;
  }
  FUN_089bb790(param_1[0x11]);
  if (bVar2) {
    FUN_089bbef8();
  }
  else if (iVar6 == *param_1) {
    if (param_1[8] == -0x7ffdfcd7) {
      zz_sceDisplayWaitVblankStartCB();
    }
    else {
      zz_sceKernelDelayThreadCB(200);
    }
  }
  return;
}

