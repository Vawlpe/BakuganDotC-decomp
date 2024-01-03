#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08886820(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar6 = *param_1;
  param_1[0x39] = 0;
  if (iVar6 == 0) {
    return;
  }
  iVar5 = *(int *)(iVar6 + 8);
  iVar7 = *(int *)(iVar6 + 0x150);
  iVar6 = DONE_Get_DAT_08AAC9E0();
  iVar3 = 0;
  if (*(int *)(iVar6 + 4) != 0) {
    iVar3 = *(int *)(*(int *)(iVar6 + 4) + iVar7 * 8 + 0xd8);
  }
  iVar6 = DONE_Get_DAT_08AAC9E0();
  iVar4 = 0;
  if (*(int *)(iVar6 + 4) != 0) {
    iVar4 = *(int *)(*(int *)(iVar6 + 4) + iVar7 * 8 + 0xdc);
  }
  if (iVar3 == 0xff) {
    iVar6 = *param_1;
  }
  else {
    if (iVar4 != 0xff) {
      if (iVar3 <= iVar4) {
        iVar6 = *param_1;
        goto LAB_088868f8;
      }
      iVar6 = DONE_Get_DAT_08AAC9E0();
      if (*(int *)(iVar6 + 4) != 0) {
        *(int *)(*(int *)(iVar6 + 4) + iVar7 * 8 + 0xd8) = iVar4;
      }
      iVar6 = DONE_Get_DAT_08AAC9E0();
      if (*(int *)(iVar6 + 4) != 0) {
        *(int *)(*(int *)(iVar6 + 4) + iVar7 * 8 + 0xdc) = iVar3;
      }
    }
    iVar6 = *param_1;
  }
LAB_088868f8:
  if (iVar6 == 0) {
    return;
  }
  if (iVar5 < 1) {
    return;
  }
  if (0x14 < iVar5) {
    return;
  }
  bVar1 = false;
  if (((*(int *)(DAT_08ac58c4 + 0x20) == 1) &&
      (iVar6 = (**(code **)(*(int *)(iVar6 + 0x14) + 0x6c))
                         (iVar6 + *(short *)(*(int *)(iVar6 + 0x14) + 0x68)), iVar6 != 0)) &&
     (iVar6 = *(int *)(DAT_08ac58c4 + 4), iVar6 != 0x24)) {
    iVar3 = iVar5 * 4;
    iVar7 = 1;
    bVar1 = true;
    iVar4 = iVar3 + -1;
    if (((iVar6 != 8) && (iVar6 != 9)) && ((iVar6 != 10 && (iVar6 != 0xb)))) {
      bVar1 = false;
    }
    iVar6 = DONE_Get_DAT_08AAC9E0();
    if (*(int *)(iVar6 + 4) != 0) {
      *(int *)(*(int *)(iVar6 + 4) + 0xe0) = iVar3 + -4;
    }
    iVar6 = DONE_Get_DAT_08AAC9E0();
    if (*(int *)(iVar6 + 4) != 0) {
      *(int *)(*(int *)(iVar6 + 4) + 0xe4) = iVar4;
    }
    iVar6 = DONE_Get_DAT_08AAC9E0();
    if (*(int *)(iVar6 + 4) != 0) {
      *(undefined4 *)(*(int *)(iVar6 + 4) + 0xe8) = 0xffffffff;
    }
    switch(iVar5) {
    case 1:
    case 7:
    case 9:
    case 10:
    case 0xb:
      iVar6 = DONE_Get_DAT_08AAC9E0();
      if (*(int *)(iVar6 + 4) != 0) {
        *(int *)(*(int *)(iVar6 + 4) + 0xe4) = iVar3 + -3;
      }
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
      break;
    case 0xc:
      if (bVar1) {
        iVar6 = DONE_Get_DAT_08AAC9E0();
        if (*(int *)(iVar6 + 4) != 0) {
          *(int *)(*(int *)(iVar6 + 4) + 0xe4) = iVar3 + -3;
        }
      }
      else {
        iVar6 = DONE_Get_DAT_08AAC9E0();
        bVar1 = true;
        if (*(int *)(iVar6 + 4) == 0) goto LAB_08886af4;
        *(int *)(*(int *)(iVar6 + 4) + 0xe4) = iVar4;
      }
      break;
    case 0xd:
      if (bVar1) {
        iVar6 = DONE_Get_DAT_08AAC9E0();
        if (*(int *)(iVar6 + 4) != 0) {
          *(int *)(*(int *)(iVar6 + 4) + 0xe4) = iVar3 + -3;
        }
      }
      else {
        iVar6 = DONE_Get_DAT_08AAC9E0();
        if (*(int *)(iVar6 + 4) != 0) {
          *(int *)(*(int *)(iVar6 + 4) + 0xe4) = iVar3 + -2;
        }
      }
      break;
    case 0xe:
      if (bVar1) {
        iVar6 = DONE_Get_DAT_08AAC9E0();
        if (*(int *)(iVar6 + 4) != 0) {
          *(int *)(*(int *)(iVar6 + 4) + 0xe4) = iVar3 + -2;
        }
      }
      else {
        iVar6 = DONE_Get_DAT_08AAC9E0();
        bVar1 = true;
        if (*(int *)(iVar6 + 4) == 0) goto LAB_08886af4;
        *(int *)(*(int *)(iVar6 + 4) + 0xe4) = iVar4;
      }
      break;
    default:
      bVar1 = true;
      goto LAB_08886af4;
    }
    bVar1 = true;
  }
LAB_08886af4:
  iVar6 = DONE_Get_DAT_08AAC9E0();
  iVar3 = 0;
  if (*(int *)(iVar6 + 4) != 0) {
    iVar3 = *(int *)(*(int *)(iVar6 + 4) + iVar7 * 8 + 0xd8);
  }
  if (iVar3 == 0xff) {
    iVar3 = -1;
  }
  param_1[0x35] = iVar3;
  iVar6 = DONE_Get_DAT_08AAC9E0();
  iVar3 = 0;
  if (*(int *)(iVar6 + 4) != 0) {
    iVar3 = *(int *)(*(int *)(iVar6 + 4) + iVar7 * 8 + 0xdc);
  }
  if (iVar3 == 0xff) {
    iVar3 = -1;
  }
  param_1[0x36] = iVar3;
  if ((param_1[0x35] == -1) && (param_1[0x36] != -1)) {
    param_1[0x35] = param_1[0x36];
    param_1[0x36] = -1;
  }
  if ((*(int *)(DAT_08ac58c4 + 0x20) == 1) &&
     (iVar6 = *(int *)(*param_1 + 0x14),
     iVar6 = (**(code **)(iVar6 + 0x6c))(*param_1 + (int)*(short *)(iVar6 + 0x68)), iVar6 == 0)) {
    iVar6 = 0;
    piVar8 = param_1;
    do {
      iVar3 = 0;
      piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
      if (*(char *)(*piVar2 + iVar5 * 6 + iVar6 + 0x540) != '\0') {
        iVar3 = FUN_08913084(iVar5,iVar6);
      }
      piVar8[0x41] = iVar3;
      iVar6 = iVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (iVar6 < 6);
  }
  FUN_088867d4(param_1);
  if (bVar1) {
    iVar6 = 0;
    do {
      if (param_1[0x35] != -1) {
        param_1[0x2f] = 0x459c4000;
      }
      iVar6 = iVar6 + 1;
      param_1 = param_1 + 1;
    } while (iVar6 < 3);
  }
  return;
}

