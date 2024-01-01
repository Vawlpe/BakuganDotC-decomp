#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x088fd114)

undefined4 * FUN_088fcb70(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined auStack_5c [16];
  int local_4c;
  undefined auStack_48 [40];
  
  FUN_088fc770();
  *param_1 = &DAT_08af458c;
  param_1[0x20] = *(undefined4 *)(param_2 + 0x40);
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar3 = FUN_089d7d74(0x28,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  param_1[0x21] = uVar3;
  param_1[0x22] = 10;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x28] = in_V72;
  param_1[0x29] = in_V76;
  param_1[0x2a] = in_V7A;
  param_1[0x2b] = in_V7E;
  param_1[0x2c] = 0;
  *(undefined *)((int)param_1 + 0xba) = 0;
  uVar1 = DAT_08abfe7c;
  uVar3 = DAT_08abfe78;
  uVar2 = DAT_08abfe74;
  param_1[0x30] = DAT_08abfe70;
  param_1[0x31] = uVar2;
  param_1[0x32] = uVar3;
  param_1[0x33] = uVar1;
  param_1[0x34] = in_V72;
  param_1[0x35] = in_V76;
  param_1[0x36] = in_V7A;
  param_1[0x37] = in_V7E;
  uVar1 = DAT_08abfe7c;
  uVar3 = DAT_08abfe78;
  uVar2 = DAT_08abfe74;
  param_1[0x38] = DAT_08abfe70;
  param_1[0x39] = uVar2;
  param_1[0x3a] = uVar3;
  param_1[0x3b] = uVar1;
  param_1[0x3c] = 0;
  *(undefined *)(param_1 + 0x3d) = 1;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar4 = (undefined4 *)FUN_089d7d74(8,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = &DAT_08af6f18;
    *puVar4 = param_1;
    puVar4[1] = &DAT_08af6f40;
    puVar5 = puVar4;
  }
  if ((int)param_1[0x23] < (int)param_1[0x22]) {
    iVar6 = param_1[0x23];
  }
  else {
    iVar9 = param_1[0x22];
    iVar6 = iVar9 * 2;
    if (iVar6 == 0) {
      iVar6 = param_1[0x23];
    }
    else {
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar3 = FUN_089d7d74(iVar9 << 3,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      if (iVar6 < (int)param_1[0x23]) {
        param_1[0x23] = iVar6;
      }
      memcpy_jak(uVar3,param_1[0x21],param_1[0x23] << 2);
      param_1[0x22] = iVar6;
      if (param_1[0x21] != 0) {
        uVar2 = param_1[0x21];
        FUN_089d8634();
        FUN_089d7fd8(uVar2,0,0);
        FUN_089d866c();
        param_1[0x21] = 0;
      }
      param_1[0x21] = uVar3;
      iVar6 = param_1[0x23];
    }
  }
  if (iVar6 < (int)param_1[0x22]) {
    *(undefined4 **)(param_1[0x21] + param_1[0x23] * 4) = puVar5;
    param_1[0x23] = param_1[0x23] + 1;
  }
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar4 = (undefined4 *)FUN_089d7d74(8,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = &DAT_08af6f18;
    *puVar4 = param_1;
    puVar4[1] = &DAT_08af6f68;
    puVar5 = puVar4;
  }
  if ((int)param_1[0x23] < (int)param_1[0x22]) {
    iVar6 = param_1[0x23];
  }
  else {
    iVar9 = param_1[0x22];
    iVar6 = iVar9 * 2;
    if (iVar6 == 0) {
      iVar6 = param_1[0x23];
    }
    else {
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar3 = FUN_089d7d74(iVar9 << 3,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      if (iVar6 < (int)param_1[0x23]) {
        param_1[0x23] = iVar6;
      }
      memcpy_jak(uVar3,param_1[0x21],param_1[0x23] << 2);
      param_1[0x22] = iVar6;
      if (param_1[0x21] != 0) {
        uVar2 = param_1[0x21];
        FUN_089d8634();
        FUN_089d7fd8(uVar2,0,0);
        FUN_089d866c();
        param_1[0x21] = 0;
      }
      param_1[0x21] = uVar3;
      iVar6 = param_1[0x23];
    }
  }
  if (iVar6 < (int)param_1[0x22]) {
    *(undefined4 **)(param_1[0x21] + param_1[0x23] * 4) = puVar5;
    param_1[0x23] = param_1[0x23] + 1;
  }
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar4 = (undefined4 *)FUN_089d7d74(0x14,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = &DAT_08af6f18;
    *puVar4 = param_1;
    puVar4[1] = &DAT_08af6f90;
    puVar4[3] = 0x3d00adfd;
    puVar5 = puVar4;
  }
  if ((int)param_1[0x23] < (int)param_1[0x22]) {
    iVar6 = param_1[0x23];
  }
  else {
    iVar9 = param_1[0x22];
    iVar6 = iVar9 * 2;
    if (iVar6 == 0) {
      iVar6 = param_1[0x23];
    }
    else {
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar3 = FUN_089d7d74(iVar9 << 3,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      if (iVar6 < (int)param_1[0x23]) {
        param_1[0x23] = iVar6;
      }
      memcpy_jak(uVar3,param_1[0x21],param_1[0x23] << 2);
      param_1[0x22] = iVar6;
      if (param_1[0x21] != 0) {
        uVar2 = param_1[0x21];
        FUN_089d8634();
        FUN_089d7fd8(uVar2,0,0);
        FUN_089d866c();
        param_1[0x21] = 0;
      }
      param_1[0x21] = uVar3;
      iVar6 = param_1[0x23];
    }
  }
  if (iVar6 < (int)param_1[0x22]) {
    *(undefined4 **)(param_1[0x21] + param_1[0x23] * 4) = puVar5;
    param_1[0x23] = param_1[0x23] + 1;
  }
  piVar8 = DAT_08abfc50[3];
  if ((int)DAT_08abfc50[2] < 1) {
    piVar7 = &DAT_08b00bac;
    memset_jak((undefined *)&DAT_08b00bac,0,4);
  }
  else {
    piVar7 = *DAT_08abfc50;
  }
  if (piVar8 == (int *)*piVar7) {
    local_4c = 0;
    if (param_1[0x24] != 0) {
      iVar6 = *(int *)(param_1[0x24] + 4);
      (**(code **)(iVar6 + 0x14))(param_1[0x24] + (int)*(short *)(iVar6 + 0x10));
    }
    param_1[0x25] = local_4c;
    if ((local_4c < 0) || ((int)param_1[0x23] <= local_4c)) {
      piVar8 = &DAT_08b00fc8;
      memset_jak((undefined *)&DAT_08b00fc8,0,4);
    }
    else {
      piVar8 = (int *)(param_1[0x21] + local_4c * 4);
    }
    iVar6 = *piVar8;
    param_1[0x24] = iVar6;
    (**(code **)(*(int *)(iVar6 + 4) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 4) + 8),auStack_48)
    ;
    iVar6 = param_1[2];
  }
  else {
    if (param_1[0x24] != 0) {
      iVar6 = *(int *)(param_1[0x24] + 4);
      (**(code **)(iVar6 + 0x14))(param_1[0x24] + (int)*(short *)(iVar6 + 0x10));
    }
    param_1[0x25] = 1;
    if ((int)param_1[0x23] < 2) {
      piVar8 = &DAT_08b00fc8;
      memset_jak((undefined *)&DAT_08b00fc8,0,4);
    }
    else {
      piVar8 = (int *)(param_1[0x21] + 4);
    }
    iVar6 = *piVar8;
    param_1[0x24] = iVar6;
    (**(code **)(*(int *)(iVar6 + 4) + 0xc))(iVar6 + *(short *)(*(int *)(iVar6 + 4) + 8),auStack_5c)
    ;
    iVar6 = param_1[2];
  }
  puVar5 = (undefined4 *)
           (**(code **)(*(int *)(iVar6 + 4) + 0x14))(iVar6 + *(short *)(*(int *)(iVar6 + 4) + 0x10))
  ;
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar1 = puVar5[3];
  param_1[0x28] = *puVar5;
  param_1[0x29] = uVar2;
  param_1[0x2a] = uVar3;
  param_1[0x2b] = uVar1;
  param_1[0x2d] = 0x3dcccccd;
  return param_1;
}

