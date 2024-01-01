#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ac694(int param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  short *psVar4;
  uint uVar5;
  undefined4 uVar6;
  float fVar7;
  
  iVar2 = FUN_088abb68();
  if (iVar2 == 0) {
    uVar6 = 0x457a0000;
    iVar2 = FUN_0880d354();
    if (iVar2 != 0) {
      uVar6 = 0x44fa0000;
    }
    iVar2 = FUN_088abfa8(*(float *)(param_1 + 0x1f0) * 5.0,uVar6,param_1,param_1,param_1 + 0x238,
                         param_1 + 0x283,1.0 <= *(float *)(param_1 + 0x228));
    *(bool *)(param_1 + 0x284) = iVar2 == 0;
    fVar7 = *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0x228);
  }
  else {
    *(undefined *)(param_1 + 0x284) = 1;
    fVar7 = *(float *)(param_1 + 0x238) * *(float *)(param_1 + 0x228);
  }
  *(float *)(param_1 + 0x6c) = fVar7;
  FUN_088ac4a0(param_1);
  uVar5 = *(uint *)(param_1 + 0x304);
  if ((-1 < (int)uVar5) && (uVar5 < 0xc)) {
    iVar2 = param_1 + *(short *)(&DAT_08a84328 + uVar5 * 8);
    pcVar3 = (code *)(&PTR_FUN_08a8432c)[uVar5 * 2];
    if (*(short *)(&DAT_08a8432a + uVar5 * 8) != 0) {
      psVar4 = (short *)(*(int *)(pcVar3 + iVar2) + *(short *)(&DAT_08a8432a + uVar5 * 8) * 8);
      pcVar3 = *(code **)(psVar4 + 2);
      iVar2 = iVar2 + *psVar4;
    }
    (*pcVar3)(iVar2);
    if (*(int *)(param_1 + 0x304) < 1) {
      cVar1 = *(char *)(param_1 + 0x282);
      goto LAB_088ac7cc;
    }
    FUN_088ac580(param_1);
  }
  cVar1 = *(char *)(param_1 + 0x282);
LAB_088ac7cc:
  if (cVar1 != '\0') {
    (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
              (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
    return;
  }
  FUN_088ac608(param_1,0);
  return;
}

