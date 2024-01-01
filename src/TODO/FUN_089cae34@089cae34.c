#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cae34(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined auStack_110 [256];
  
  iVar5 = *(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x45) * 0x28;
  bVar1 = *(byte *)(iVar5 + 0x24);
  uVar2 = 0;
  if (bVar1 == 0) {
    if (*(char *)(param_1 + 0x40) == '%') {
      uVar2 = FUN_089c9e94(param_1);
      uVar3 = FUN_089c9da8(param_1);
      uVar4 = FUN_089c9da8(param_1);
      FUN_089b4c84(auStack_110,uVar2,uVar3,uVar4);
    }
    else {
      uVar2 = FUN_089c9e94(param_1);
      uVar3 = FUN_089c9da8(param_1);
      FUN_089b4c84(auStack_110,uVar2,uVar3);
    }
    _DONE_Get_DAT_08AC58D0();
    iVar5 = FUN_089cb9cc(auStack_110);
    *(uint *)(iVar5 + 0x48) =
         *(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x45) * 0x28 + 0x24;
    *(undefined *)(*(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x45) * 0x28 + 0x24) = 1;
    uVar2 = 2;
  }
  else if (bVar1 < 2) {
    uVar2 = 2;
  }
  else if (bVar1 < 3) {
    *(undefined *)(iVar5 + 0x24) = 0;
  }
  return uVar2;
}

