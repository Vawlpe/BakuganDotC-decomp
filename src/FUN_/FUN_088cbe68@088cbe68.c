#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cbe68(int param_1,undefined4 param_2,char **param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  float fVar7;
  
  uVar2 = DAT_08b00efc;
  uVar1 = DAT_08b00ef8;
  uVar6 = DAT_08b00ef4;
  *(undefined4 *)(param_1 + 0x1a0) = DAT_08b00ef0;
  *(undefined4 *)(param_1 + 0x1a4) = uVar6;
  *(undefined4 *)(param_1 + 0x1a8) = uVar1;
  *(undefined4 *)(param_1 + 0x1ac) = uVar2;
  uVar2 = DAT_08b0019c;
  uVar1 = DAT_08b00198;
  uVar6 = DAT_08b00194;
  iVar4 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar4 + 0xb0) = DAT_08b00190;
  *(undefined4 *)(iVar4 + 0xb4) = uVar6;
  *(undefined4 *)(iVar4 + 0xb8) = uVar1;
  *(undefined4 *)(iVar4 + 0xbc) = uVar2;
  *(undefined4 *)(param_1 + 0x130) = 0;
  if (param_3 == (char **)0x0) {
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    *(uint *)(param_1 + 0x70) = (uint)(param_3[1] != (char *)0x0);
    if (*param_3 == (char *)0x0) {
      uVar6 = 0x41b00000;
    }
    else {
      uVar6 = 0x41980000;
    }
    *(undefined4 *)(param_1 + 0x54) = uVar6;
    if ((*(float *)(param_1 + 0x1a0) == 0.0) && (*(float *)(param_1 + 0x1a4) == 0.0)) {
      FUN_088cbd50(param_1,param_1 + 0x1b0);
      FUN_088cbdc0(param_1,(undefined4 *)(param_1 + 0x1a0));
    }
    fVar7 = *(float *)(param_1 + 0x1a0) * 0.00195312 * 1.02;
    if (*param_3 == (char *)0x0) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      pcVar5 = *param_3;
      if (*(float *)(param_1 + 0x1a0) < 256.0) {
        pcVar5 = "NonTexture";
      }
      FUN_089d8634();
      uVar6 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar3 = FUN_089d7d74(400,0,0);
      FUN_089d816c(uVar6);
      FUN_089d866c();
      iVar4 = 0;
      if (iVar3 != 0) {
        uVar6 = FUN_089f77dc(pcVar5);
        FUN_088c7690(iVar3,uVar6,1,param_1);
        iVar4 = iVar3;
      }
      *(int *)(param_1 + 0x130) = iVar4;
      *(undefined4 *)(param_1 + 0x6c) = 1;
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(float *)(param_1 + 0x20) =
           (float)(int)((fVar7 * 18.0 + 16.0) - *(float *)(param_1 + 0x1a0) * 0.5);
      *(float *)(param_1 + 0x24) = (float)(int)(17.0 - *(float *)(param_1 + 0x1b4) * 0.5);
    }
    if (param_3[1] == (char *)0x0) {
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    else {
      FUN_089d8634();
      uVar6 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar3 = FUN_089d7d74(400,0,0);
      FUN_089d816c(uVar6);
      FUN_089d866c();
      iVar4 = 0;
      if (iVar3 != 0) {
        uVar6 = FUN_089f7720(param_3[1]);
        FUN_088c7690(iVar3,uVar6,2,param_1);
        iVar4 = iVar3;
      }
      *(int *)(param_1 + 300) = iVar4;
      *(undefined4 *)(param_1 + 0x70) = 1;
      if (*(int *)(param_1 + 0x130) == 0) {
        *(float *)(*(int *)(param_1 + 300) + 0x60) = *(float *)(param_1 + 0x1a0) - 30.0;
        *(float *)(*(int *)(param_1 + 300) + 100) = *(float *)(param_1 + 0x1a4) - 22.0;
      }
      else {
        *(float *)(*(int *)(param_1 + 300) + 0x60) =
             (float)(int)((*(float *)(param_1 + 0x1a0) * 0.5 - 14.0) - fVar7 * 28.0);
        *(float *)(*(int *)(param_1 + 300) + 100) =
             (float)(int)(*(float *)(param_1 + 0x1b4) * 0.5 - 18.0);
      }
    }
  }
  return;
}

