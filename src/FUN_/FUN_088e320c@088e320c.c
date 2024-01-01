#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e320c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  
  iVar6 = *(int *)(param_1 + 0x324);
  bVar3 = false;
  if (iVar6 == 0x457) {
    bVar3 = true;
    if (*(int *)(param_1 + 0x338) < 1) {
      FUN_088e1184(param_1);
      piVar5 = (int *)FUN_0880cc48();
      if (*(char *)(*piVar5 + 0x410) < '\x01') {
        *(undefined4 *)(param_1 + 0x324) = 2;
        *(undefined4 *)(param_1 + 0x338) = 0x2d;
      }
      else {
        *(undefined4 *)(param_1 + 0x324) = 3;
        *(undefined4 *)(param_1 + 0x338) = 0x2d;
        iVar6 = FUN_089edb80();
        iVar4 = FUN_089edb80();
        uVar8 = *(undefined4 *)(iVar4 + 0x24);
        uVar1 = *(undefined4 *)(iVar4 + 0x28);
        uVar2 = *(undefined4 *)(iVar4 + 0x2c);
        *(undefined4 *)(iVar6 + 0x40) = *(undefined4 *)(iVar4 + 0x20);
        *(undefined4 *)(iVar6 + 0x44) = uVar8;
        *(undefined4 *)(iVar6 + 0x48) = uVar1;
        *(undefined4 *)(iVar6 + 0x4c) = uVar2;
        iVar6 = FUN_089edb80();
        *(undefined4 *)(iVar6 + 0x4c) = 0;
        uVar8 = FUN_089edb80();
        FUN_089ede1c(uVar8,3);
        uVar8 = FUN_089edb80();
        FUN_089edf24(uVar8,0x1e);
        bVar3 = false;
      }
    }
    else {
      *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + -1;
    }
  }
  else if (iVar6 == 3) {
    bVar3 = false;
    if (*(int *)(param_1 + 0x338) < 1) {
      uVar8 = FUN_089edb80();
      iVar6 = FUN_089edf70(uVar8);
      if (iVar6 != 0) {
        *(undefined *)(param_1 + 0x355) = 1;
        iVar6 = FUN_089bfa40(500);
        if (*(char *)(iVar6 + 0x6e8) != '\0') {
          iVar6 = FUN_089bfa40(500);
          *(undefined *)(iVar6 + 0x6e8) = 0;
        }
      }
    }
    else {
      *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + -1;
    }
  }
  else if (iVar6 == 2) {
    bVar3 = true;
    if (*(int *)(param_1 + 0x338) < 1) {
      uVar8 = FUN_089edb80();
      iVar6 = FUN_089edf70(uVar8);
      if (iVar6 != 0) {
        *(undefined *)(param_1 + 0x355) = 1;
        *(undefined4 *)(param_1 + 0x324) = 3;
        bVar3 = false;
      }
    }
    else {
      *(int *)(param_1 + 0x338) = *(int *)(param_1 + 0x338) + -1;
    }
  }
  else if (iVar6 == 1) {
    fVar7 = (float)FUN_089df648(param_1);
    if (fVar7 == 0.0) {
      FUN_088def24(0x3e4ccccd,param_1,0,1,0);
      *(undefined4 *)(param_1 + 0x324) = 0x457;
      *(undefined4 *)(param_1 + 0x338) = 0x1e;
    }
    bVar3 = true;
  }
  else if (iVar6 == 0) {
    FUN_088def24(0x3e4ccccd,param_1,0x1b,0,0);
    FUN_089df730(0x41800000,param_1);
    iVar6 = FUN_089edb80();
    *(undefined4 *)(iVar6 + 0x30) = 0x3f800000;
    *(undefined4 *)(iVar6 + 0x34) = 0;
    *(undefined4 *)(iVar6 + 0x38) = 0;
    *(undefined4 *)(iVar6 + 0x3c) = 0x3e800000;
    iVar6 = FUN_089edb80();
    iVar4 = FUN_089edb80();
    uVar8 = *(undefined4 *)(iVar4 + 0x34);
    uVar1 = *(undefined4 *)(iVar4 + 0x38);
    uVar2 = *(undefined4 *)(iVar4 + 0x3c);
    *(undefined4 *)(iVar6 + 0x20) = *(undefined4 *)(iVar4 + 0x30);
    *(undefined4 *)(iVar6 + 0x24) = uVar8;
    *(undefined4 *)(iVar6 + 0x28) = uVar1;
    *(undefined4 *)(iVar6 + 0x2c) = uVar2;
    iVar6 = FUN_089edb80();
    *(undefined4 *)(iVar6 + 0x40) = 0x3f800000;
    *(undefined4 *)(iVar6 + 0x44) = 0;
    *(undefined4 *)(iVar6 + 0x48) = 0;
    *(undefined4 *)(iVar6 + 0x4c) = 0x3f000000;
    uVar8 = FUN_089edb80();
    FUN_089ede1c(uVar8,3);
    uVar8 = FUN_089edb80();
    FUN_089edf24(uVar8,0x1e);
    uVar8 = FUN_089edb80();
    FUN_089edde8(uVar8,1);
    *(undefined4 *)(param_1 + 0x324) = 1;
    *(undefined4 *)(param_1 + 0x338) = 0x2d;
  }
  if (bVar3) {
    uVar8 = FUN_089edb80();
    iVar6 = FUN_089edf70(uVar8);
    if (iVar6 == 0) {
      iVar6 = *(int *)(param_1 + 0x544);
    }
    else {
      uVar8 = FUN_089edb80();
      FUN_089ede1c(uVar8,4);
      uVar8 = FUN_089edb80();
      FUN_089edf24(uVar8,0x1e);
      iVar6 = *(int *)(param_1 + 0x544);
    }
  }
  else {
    iVar6 = *(int *)(param_1 + 0x544);
  }
  if (iVar6 != 0) {
    uVar8 = atan2f((*(float **)(param_1 + 0x544))[2] - *(float *)(param_1 + 0x28),
                   **(float **)(param_1 + 0x544) - *(float *)(param_1 + 0x20));
    FUN_088defe8(uVar8,0x3f800000,0x3e0efa35,param_1);
  }
  return;
}

