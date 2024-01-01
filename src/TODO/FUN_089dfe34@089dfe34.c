#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089dfe34(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  *(undefined *)(param_2 + 0xb0) = 0;
  if (param_3 != -1) {
    if (*(char *)(param_2 + 0x13c) == '\0') {
      if (param_3 < *(int *)(param_2 + 0xf4)) {
        FUN_08a15a20(param_1,*(undefined4 *)(param_2 + 0x130),param_3);
        *(char *)(param_2 + 0x134) = (char)param_3;
      }
    }
    else {
      *(char *)(param_2 + 0x134) = (char)((*(byte *)(param_2 + 0x134) + 1) % 3);
      uVar1 = FUN_089d9674();
      iVar2 = FUN_089d9ed4(uVar1,param_3);
      uVar4 = (uint)*(byte *)(param_2 + 0x134);
      iVar3 = *(int *)(param_2 + 0x130);
      if (iVar2 != 0) {
        *(int *)(param_2 + 0x138) = param_3;
        memcpy_jak(*(int *)(iVar3 + 0x14) + uVar4 * 0x30,iVar2,0x30);
        uVar4 = (uint)*(byte *)(param_2 + 0x134);
        iVar3 = *(int *)(param_2 + 0x130);
      }
      FUN_08a15a20(param_1,iVar3,uVar4);
    }
    return 1;
  }
  return 0;
}

