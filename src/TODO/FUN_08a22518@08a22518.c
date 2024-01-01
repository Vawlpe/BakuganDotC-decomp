#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a22518(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_4 = (param_1 & 0xf) * 0x10 + param_4;
  uVar5 = (param_3 & 0xff) << 7 | param_2 & 0xff;
  if (0x3fff < uVar5) {
    uVar5 = 0x3fff;
  }
  *(uint *)(param_4 + 0x44) = uVar5;
  uVar1 = FUN_08a208bc(param_1 & 0xf,*(undefined4 *)(param_4 + 0x40));
  if (uVar1 != 0) {
    uVar4 = 0;
    uVar3 = uVar1;
    do {
      if ((uVar3 & 1) != 0) {
        uVar2 = FUN_08a1fa88(uVar4,uVar5);
        FUN_08a209ec(uVar4,uVar2);
      }
      uVar4 = uVar4 + 1;
      uVar3 = uVar1 >> (uVar4 & 0x1f);
    } while (uVar4 < 0x20);
  }
  return 0;
}

