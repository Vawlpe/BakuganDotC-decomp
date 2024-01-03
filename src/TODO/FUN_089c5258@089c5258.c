#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c5258(undefined4 *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  float fVar7;
  
  iVar4 = -1;
  cVar5 = '\0';
  FUN_089bb728(*param_1);
  iVar6 = param_1[7];
  iVar1 = DONE_Get_DAT_08AC5874();
  iVar6 = iVar6 + *(int *)(iVar1 + 4) * param_1[8];
  if (0 < (int)param_1[9]) {
    iVar1 = param_1[8] + 1;
    param_1[9] = param_1[9] + -1;
    param_1[8] = iVar1;
    if (1 < iVar1) {
      param_1[8] = 0;
    }
  }
  if (0 < (int)param_1[0x13]) {
    param_1[0x13] = param_1[0x13] + -1;
  }
  fVar7 = (float)FUN_089c4e18(param_1);
  if (DAT_08ac563c == '\0') {
    if ((1 < *(int *)(DAT_08ac5638 + 0xc)) && (iVar1 = param_1[2] + 3, (int)param_1[2] < 2)) {
      param_1[2] = iVar1;
      param_1[3] = iVar1;
    }
    if (*(int *)(DAT_08ac5638 + 0xc) < 2) {
      if ((int)param_1[2] < 3) {
        cVar5 = '\x01';
        goto LAB_089c5368;
      }
      cVar2 = *(char *)((int)param_1 + 0xe5);
    }
    else {
      cVar2 = *(char *)((int)param_1 + 0xe5);
    }
  }
  else {
    iVar1 = param_1[2] + 3;
    if ((int)param_1[2] < 2) {
      param_1[2] = iVar1;
      param_1[3] = iVar1;
    }
LAB_089c5368:
    cVar2 = *(char *)((int)param_1 + 0xe5);
  }
  if (cVar2 != cVar5) {
    *(char *)((int)param_1 + 0xe5) = cVar5;
  }
  FUN_089bb790(*param_1);
  uVar3 = param_1[2];
  if (5 < uVar3) goto LAB_089c53e4;
  if (uVar3 != 1) {
    if (uVar3 == 2) goto LAB_089c53e4;
    if (uVar3 != 4) {
      if (uVar3 != 5) {
        iVar4 = (int)(fVar7 * 4096.0);
        FUN_08a207a4(iVar6,iVar4,iVar4);
      }
      goto LAB_089c53e4;
    }
  }
  FUN_08a20754(iVar6);
LAB_089c53e4:
  if (cVar5 == '\0') {
    iVar1 = 0x8000;
    if (iVar4 < 0) {
      iVar1 = (int)(fVar7 * 32768.0);
    }
    FUN_08a23d80(param_1[4],iVar1,iVar1,iVar6);
  }
  else {
    iVar1 = 0x8000;
    if (iVar4 < 0) {
      iVar1 = (int)(fVar7 * 32768.0);
    }
    zz_sceAudioOutput2OutputBlocking(iVar1,iVar6);
  }
  return 1;
}

