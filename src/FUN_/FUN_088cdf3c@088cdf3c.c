#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088cdf3c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af2dbc;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  uVar4 = DAT_08b001bc;
  uVar3 = DAT_08b001b8;
  uVar2 = DAT_08b001b4;
  puVar1 = DAT_08ac5934;
  *DAT_08ac5934 = DAT_08b001b0;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  DAT_08ac5934[7] = 1;
  FUN_089ce1a4(DAT_08ac5928,0x10);
  FUN_089ce1b4(DAT_08ac5928,2);
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_088cdb44(param_1);
  FUN_088cdd7c(param_1);
  FUN_088cdec4(param_1);
  if (*(int *)(param_1 + 0x10) != 4) {
    piVar5 = (int *)FUN_0880cc48();
    if (*(char *)(*piVar5 + (*(uint *)(DAT_08ac58c4 + 0x3c) & 0xff) * 4 +
                  (*(uint *)(param_1 + 0x10) & 0xff) + 0x411) == '\0') {
      piVar5 = (int *)FUN_0880cc48();
      *(undefined *)
       (*piVar5 + (*(uint *)(DAT_08ac58c4 + 0x3c) & 0xff) * 4 + (*(uint *)(param_1 + 0x10) & 0xff) +
       0x411) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x14) = 100;
    }
  }
  return param_1;
}

