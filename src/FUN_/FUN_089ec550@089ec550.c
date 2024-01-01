#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ec550(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    fVar6 = *(float *)(param_1 + 0x20);
    iVar5 = (int)(*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x2c) * 0.5);
    iVar4 = FUN_089eb248(*(undefined4 *)(param_1 + 0x74));
    uVar7 = *(undefined4 *)(iVar4 + 0xcc);
    if (*(char *)(param_1 + 0x58) != '\0') {
      iVar4 = FUN_089eb248(*(undefined4 *)(param_1 + 0x74));
      uVar1 = *(undefined4 *)(param_1 + 0x44);
      uVar2 = *(undefined4 *)(param_1 + 0x48);
      uVar3 = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(iVar4 + 0xc0) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(iVar4 + 0xc4) = uVar1;
      *(undefined4 *)(iVar4 + 200) = uVar2;
      *(undefined4 *)(iVar4 + 0xcc) = uVar3;
      iVar4 = FUN_089eb248(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(iVar4 + 0xcc) = uVar7;
      FUN_089eb14c(*(undefined4 *)(param_1 + 0x74),(int)fVar6 + 1,iVar5 + 1,
                   *(undefined4 *)(param_1 + 0x18),*(undefined *)(param_1 + 0x5a),0);
    }
    iVar4 = FUN_089eb248(*(undefined4 *)(param_1 + 0x74));
    uVar1 = *(undefined4 *)(param_1 + 0x34);
    uVar2 = *(undefined4 *)(param_1 + 0x38);
    uVar3 = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(iVar4 + 0xc0) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar4 + 0xc4) = uVar1;
    *(undefined4 *)(iVar4 + 200) = uVar2;
    *(undefined4 *)(iVar4 + 0xcc) = uVar3;
    iVar4 = FUN_089eb248(*(undefined4 *)(param_1 + 0x74));
    *(undefined4 *)(iVar4 + 0xcc) = uVar7;
    FUN_089eb14c(*(undefined4 *)(param_1 + 0x74),(int)fVar6,iVar5,*(undefined4 *)(param_1 + 0x18),
                 *(undefined *)(param_1 + 0x5a),0);
  }
  return;
}

