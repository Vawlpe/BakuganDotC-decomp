#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_088877ec(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  undefined auStack_60 [15];
  byte local_51;
  int local_50;
  int local_4c;
  
  if (param_1 == 0) {
    return 0.0;
  }
  if (param_3 < 0x23) {
    fVar4 = (float)FUN_08887710(param_3,param_4,param_5);
    return fVar4;
  }
  param_3 = param_3 + -0x23;
  FUN_0888c034(auStack_60,param_3);
  fVar4 = (float)FUN_08887350(param_1 + 0x434);
  if (((param_3 == 0) || (param_3 == 0x3a)) || (param_3 == 0x3b)) {
    if (*(char *)(param_1 + 0x464) != '\0') {
      fVar4 = fVar4 * 1.5;
    }
    iVar1 = *(int *)(param_1 + 0x14);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  iVar3 = 6;
  iVar1 = (**(code **)(iVar1 + 0x54))(param_1 + *(short *)(iVar1 + 0x50));
  if (iVar1 == 0) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 100))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x60));
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
      if (iVar1 != 0) {
        iVar3 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                          (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
      }
      goto LAB_08887930;
    }
    pcVar2 = *(char **)(param_1 + 0x4bc);
  }
  else {
    pcVar2 = *(char **)(param_1 + 0x4bc);
  }
  iVar3 = (int)*pcVar2;
LAB_08887930:
  fVar5 = (float)FUN_0888746c(0,iVar3,param_4,param_5);
  if (param_4 == 0) {
    fVar4 = fVar4 * fVar5 * (float)local_50 * (float)(uint)local_51;
  }
  else {
    fVar4 = fVar4 * fVar5 * (float)local_4c * 0.7;
  }
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  return fVar4;
}

