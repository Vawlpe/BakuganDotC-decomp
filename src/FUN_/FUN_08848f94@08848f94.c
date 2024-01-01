#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_08848f94(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = FUN_089bfa40(100);
  if ((param_3 == 0) &&
     (iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58)), iVar2 != 0)) {
    param_3 = 2;
  }
  FUN_0882c2cc(2,1);
  FUN_089bf2f0(uVar1,1);
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar4 = (undefined4 *)FUN_089d7d74(0x310,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    FUN_08848b50(puVar4,param_1,param_2,param_3);
    puVar5 = puVar4;
  }
  *puVar5 = 0x14a;
  puVar5[0xba] = uVar1;
  FUN_089bfbf0(puVar5,100);
  if (param_3 != 0) {
    FUN_0884bcc0(uVar1);
  }
  uVar1 = FUN_0884b268();
  FUN_0884df5c(uVar1);
  iVar2 = FUN_0884b268();
  *(undefined4 *)(iVar2 + 0x4e0) = 0x3f59999a;
  FUN_089e10cc(0x3e800000);
  if (param_3 == 0) {
    DAT_08aba77f = 0;
  }
  uVar1 = FUN_089bfff0();
  FUN_089c00ac(uVar1,param_1 + 0x20,param_1 + 0x20);
  iVar2 = FUN_089c59d4();
  if (iVar2 != 0) {
    uVar1 = FUN_089c59f0();
    FUN_089c6350(uVar1,0x200133,0,0);
  }
  return puVar5;
}

