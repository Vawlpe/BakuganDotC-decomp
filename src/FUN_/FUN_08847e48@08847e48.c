#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08847e48(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 char param_6,int param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  float fVar5;
  
  *(undefined4 *)(param_4 + 0x2ac) = 2;
  *(undefined4 *)(param_4 + 0x3c0) = *(undefined4 *)(param_4 + 0x50);
  *(undefined4 *)(param_4 + 0x3c4) = *(undefined4 *)(param_4 + 0x54);
  *(undefined4 *)(param_4 + 0x3c8) = *(undefined4 *)(param_4 + 0x58);
  *(undefined4 *)(param_4 + 0x3cc) = *(undefined4 *)(param_4 + 0x5c);
  *(undefined4 *)(param_4 + 0x3d0) = *(undefined4 *)(param_4 + 0x60);
  *(undefined4 *)(param_4 + 0x3d4) = *(undefined4 *)(param_4 + 100);
  *(undefined4 *)(param_4 + 0x3d8) = *(undefined4 *)(param_4 + 0x68);
  *(undefined4 *)(param_4 + 0x3dc) = *(undefined4 *)(param_4 + 0x6c);
  *(undefined4 *)(param_4 + 0x3e0) = *(undefined4 *)(param_4 + 0x80);
  *(undefined4 *)(param_4 + 0x3e4) = *(undefined4 *)(param_4 + 0x84);
  *(undefined4 *)(param_4 + 1000) = *(undefined4 *)(param_4 + 0x88);
  *(undefined4 *)(param_4 + 0x3ec) = *(undefined4 *)(param_4 + 0x8c);
  *(undefined4 *)(param_4 + 0x3f0) = *(undefined4 *)(param_4 + 0x158);
  *(undefined4 *)(param_4 + 0x38c) = param_1;
  *(undefined4 *)(param_4 + 0x390) = param_2;
  *(undefined4 *)(param_4 + 0x398) = param_3;
  *(undefined4 *)(param_4 + 0x3a4) = 0;
  *(undefined4 *)(param_4 + 0x3fc) = 0;
  *(undefined4 *)(param_4 + 0x3f8) = 0;
  *(undefined4 *)(param_4 + 0x3f4) = 0;
  if (param_7 < 2) {
    if (0 < param_7) {
      if (*(int *)(param_4 + 0x2a8) == 0) {
        *(undefined4 *)(param_4 + 0x2a8) = *(undefined4 *)(param_4 + 0x2a0);
      }
      *(int *)(param_4 + 0x380) = param_5 + 0x60;
      goto LAB_08847f20;
    }
  }
  else if (param_7 < 3) {
    *(int *)(param_4 + 0x380) = param_5;
    *(undefined4 *)(param_4 + 0x2a8) = *(undefined4 *)(param_4 + 0x2a0);
    *(undefined4 *)(param_4 + 900) = param_8;
    goto LAB_08847f20;
  }
  *(int *)(param_4 + 0x2a8) = param_5;
  *(int *)(param_4 + 0x380) = param_5 + 0x20;
  *(int *)(param_4 + 900) = param_5 + 0x30;
LAB_08847f20:
  puVar4 = *(undefined4 **)(param_4 + 0x380);
  uVar1 = puVar4[1];
  uVar2 = puVar4[2];
  uVar3 = puVar4[3];
  *(undefined4 *)(param_4 + 0x3b0) = *puVar4;
  *(undefined4 *)(param_4 + 0x3b4) = uVar1;
  *(undefined4 *)(param_4 + 0x3b8) = uVar2;
  *(undefined4 *)(param_4 + 0x3bc) = uVar3;
  if (*(int *)(param_4 + 900) == 0) {
    *(undefined4 *)(param_4 + 0x304) = 0;
  }
  else {
    fVar5 = *(float *)(*(int *)(param_4 + 900) + 4);
    *(float *)(param_4 + 0x300) = fVar5;
    if (3.141593 < fVar5) {
      *(float *)(param_4 + 0x300) = *(float *)(param_4 + 0x300) - 6.283185;
    }
    else if (*(float *)(param_4 + 0x300) <= -3.141593) {
      *(float *)(param_4 + 0x300) = *(float *)(param_4 + 0x300) + 6.283185;
    }
    *(undefined4 *)(param_4 + 0x304) = 0;
  }
  *(undefined4 *)(param_4 + 0x308) = 0;
  *(undefined *)(param_4 + 0x324) = 0;
  if (param_6 == '\0') {
    *(undefined4 *)(param_4 + 0x30c) = 0;
    return;
  }
  *(undefined4 *)(param_4 + 0x30c) = 0x3f800000;
  FUN_08847b68(param_4);
  return;
}

