#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f8720(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x94) != 0) {
    uVar1 = FUN_089f2178(*(undefined4 *)(param_1 + 0x98));
    uVar2 = FUN_089f1308(uVar1);
    uVar2 = FUN_089f1418(uVar2);
    puVar3 = (undefined4 *)FUN_089e3014(DAT_08ac5c8c,uVar2,0xffffffff);
    *puVar3 = 0xdf000032;
    puVar3[1] = 0xe0000000;
    puVar3[2] = 0xe1000000;
    puVar3[3] = 0xc6000101;
    uVar2 = FUN_089f16bc(puVar3 + 4);
    uVar2 = FUN_089f9290(*(undefined4 *)(param_1 + 0x94),uVar2,param_1 + 0x30,param_1 + 0xa0,
                         &DAT_08b001b0);
    FUN_089f13c8(uVar1,uVar2);
  }
  return;
}

