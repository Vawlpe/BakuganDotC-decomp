#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cad58(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x45) * 0x28;
  bVar1 = *(byte *)(iVar3 + 0x24);
  uVar2 = 0;
  if (bVar1 == 0) {
    uVar2 = FUN_089c9e94(param_1);
    DONE_Get_DAT_08AC58D0();
    iVar3 = FUN_089cb9cc(uVar2);
    *(uint *)(iVar3 + 0x48) =
         *(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x45) * 0x28 + 0x24;
    *(undefined *)(*(int *)(param_1 + 0x3c) + (uint)*(byte *)(param_1 + 0x45) * 0x28 + 0x24) = 1;
    uVar2 = 2;
  }
  else if (bVar1 < 2) {
    uVar2 = 2;
  }
  else if (bVar1 < 3) {
    *(undefined *)(iVar3 + 0x24) = 0;
  }
  return uVar2;
}

