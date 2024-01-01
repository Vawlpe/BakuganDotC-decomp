#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c2ed4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar3 = FUN_089bf93c(0x2724,1);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x6c8) != 0) {
      FUN_089bf300(*(undefined4 *)(param_1 + 0x6c8),1);
    }
    uVar4 = FUN_0880cc48();
    FUN_0880d808(uVar4,0x40000000);
    if (DAT_08b00bd4 == '\b') {
      FUN_088bede4(param_1,5);
    }
    else {
      FUN_088bede4(param_1,4);
    }
    iVar3 = FUN_089bfa40(0x19a);
    if (iVar3 != 0) {
      FUN_089109ec();
    }
    iVar3 = FUN_089edb80();
    if (0.0 < *(float *)(iVar3 + 0x2c)) {
      iVar3 = FUN_089edb80();
      iVar5 = FUN_089edb80();
      uVar4 = *(undefined4 *)(iVar5 + 0x24);
      uVar1 = *(undefined4 *)(iVar5 + 0x28);
      uVar2 = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar5 + 0x20);
      *(undefined4 *)(iVar3 + 0x34) = uVar4;
      *(undefined4 *)(iVar3 + 0x38) = uVar1;
      *(undefined4 *)(iVar3 + 0x3c) = uVar2;
      iVar3 = FUN_089edb80();
      *(undefined4 *)(iVar3 + 0x40) = 0;
      *(undefined4 *)(iVar3 + 0x44) = 0;
      *(undefined4 *)(iVar3 + 0x48) = 0;
      *(undefined4 *)(iVar3 + 0x4c) = 0;
      uVar4 = FUN_089edb80();
      FUN_089edf24(uVar4,0x14);
      iVar3 = *(int *)(param_1 + 0x2cc);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x2cc);
    }
    if (iVar3 == 4) {
      FUN_088bf230(param_1);
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
  }
  return;
}

