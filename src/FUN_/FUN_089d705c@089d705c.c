#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d705c(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar3 = param_2 & *(int *)(param_1 + 0x14) - 1U;
    iVar5 = *(int *)(iVar2 + 0x34);
    if (uVar3 != 0) {
      param_2 = param_2 + (*(int *)(param_1 + 0x14) - uVar3);
    }
    iVar4 = 0;
    if (iVar5 != 0) {
      uVar3 = *(uint *)(iVar5 + 0xc);
      iVar4 = iVar5;
      while ((uVar3 < param_2 && (iVar5 = *(int *)(iVar4 + 4), iVar4 = 0, iVar5 != 0))) {
        uVar3 = *(uint *)(iVar5 + 0xc);
        iVar4 = iVar5;
      }
    }
    if (iVar4 != 0) {
      if (param_2 < *(uint *)(iVar4 + 0xc)) {
        FUN_089d7ad8(iVar2 + 0x30,iVar4);
        uVar1 = FUN_089d7438(param_1);
        FUN_089d7ac4(uVar1,*(int *)(iVar4 + 8) + param_2,*(int *)(iVar4 + 0xc) - param_2,param_3,
                     param_4);
        FUN_089d843c(*(int *)(param_1 + 4) + 0x30,uVar1,1);
        *(uint *)(iVar4 + 0xc) = param_2;
        *(int *)(*(int *)(param_1 + 4) + 0x10) = *(int *)(*(int *)(param_1 + 4) + 0x10) + 1;
        iVar2 = *(int *)(param_1 + 4);
      }
      else {
        FUN_089d7ad8(iVar2 + 0x30,iVar4);
        iVar2 = *(int *)(param_1 + 4);
      }
      FUN_089d843c(iVar2 + 0x20,iVar4,0);
      uVar1 = *(undefined4 *)(iVar4 + 8);
      *(int *)(*(int *)(param_1 + 4) + 8) =
           *(int *)(*(int *)(param_1 + 4) + 8) + *(int *)(iVar4 + 0xc);
      *(int *)(*(int *)(param_1 + 4) + 0xc) =
           *(int *)(*(int *)(param_1 + 4) + 0xc) - *(int *)(iVar4 + 0xc);
    }
  }
  return uVar1;
}

