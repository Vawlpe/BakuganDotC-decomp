#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088726ec(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  uVar2 = FUN_08871dc8();
  FUN_088608d8(0x3e4ccccd,param_1,uVar2,1,0);
  bVar1 = false;
  iVar4 = *(int *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x391) != '\0') {
    iVar3 = (**(code **)(iVar4 + 0xa4))(param_1 + *(short *)(iVar4 + 0xa0));
    iVar4 = *(int *)(param_1 + 0x14);
    if (iVar3 != 2) {
      bVar1 = true;
    }
  }
  if (bVar1) {
    (**(code **)(iVar4 + 0x34))(0x3f333333,param_1 + *(short *)(iVar4 + 0x30));
  }
  else {
    (**(code **)(iVar4 + 0x34))(0x3f800000,param_1 + *(short *)(iVar4 + 0x30));
  }
  iVar4 = FUN_0886002c(param_1);
  if (iVar4 != 0) {
    FUN_088715b0(param_1,1);
    return;
  }
  if ((*(uint *)(param_1 + 0x16c) & 4) == 0) {
    fVar7 = *(float *)(param_1 + 0x174);
LAB_0887281c:
    fVar6 = (float)FUN_08865c40(param_1);
    if (fVar6 * 0.9 <= fVar7) {
      if ((*(uint *)(param_1 + 0x144) & 0x10) == 0) {
        uVar5 = *(uint *)(param_1 + 0x16c);
        goto LAB_088728e0;
      }
      iVar4 = *(int *)(param_1 + 0x168);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x168);
    }
    *(undefined4 *)(iVar4 + 0x50) = 5;
    iVar4 = FUN_088602ec(param_1,1);
    if (iVar4 == 0) {
      iVar4 = FUN_08862c8c(param_1,0xc);
      if (iVar4 == 0) {
        FUN_088706f0(param_1,0x17,0);
      }
      else {
        FUN_088706f0(param_1,0x18,0);
        if (*(char *)(*(int *)(param_1 + 0x4bc) + 2) != '\0') {
          *(undefined4 *)(param_1 + 0x3cc) = 1;
        }
      }
    }
    else {
      FUN_088706f0(param_1,0x17,0);
    }
  }
  else {
    iVar4 = FUN_08888170(param_1 + 0x434);
    if (iVar4 != 0) {
      fVar7 = *(float *)(param_1 + 0x174);
      goto LAB_0887281c;
    }
    if ((*(uint *)(param_1 + 0x144) & 0x10) != 0) {
      fVar7 = *(float *)(param_1 + 0x174);
      goto LAB_0887281c;
    }
    uVar5 = *(uint *)(param_1 + 0x16c);
LAB_088728e0:
    if ((((uVar5 & 2) != 0) && (iVar4 = FUN_088886fc(param_1 + 0x434), iVar4 != 0)) &&
       (*(char *)(*(int *)(param_1 + 0x4bc) + 2) == '\x02')) {
      FUN_088706f0(param_1,0xc,0);
      fVar7 = (float)FUN_089df51c(param_1);
      FUN_089df450(fVar7 * 0.3,param_1);
    }
  }
  return;
}

