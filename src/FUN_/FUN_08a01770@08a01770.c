#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a01770(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar3 = param_2 & *(int *)(param_1 + 8) - 1U;
    iVar4 = *(int *)(iVar2 + 0x34);
    if (uVar3 != 0) {
      param_2 = param_2 + (*(int *)(param_1 + 8) - uVar3);
    }
    iVar5 = 0;
    if (iVar4 != 0) {
      uVar3 = *(uint *)(iVar4 + 0xc);
      while ((iVar5 = iVar4, uVar3 < param_2 && (iVar4 = *(int *)(iVar4 + 4), iVar5 = 0, iVar4 != 0)
             )) {
        uVar3 = *(uint *)(iVar4 + 0xc);
      }
    }
    if (iVar5 != 0) {
      if (*(uint *)(iVar5 + 0xc) < param_2 + 0x10) {
        FUN_089d7ad8(iVar2 + 0x30,iVar5);
        iVar2 = *(int *)(param_1 + 4);
      }
      else {
        FUN_089d7ad8(iVar2 + 0x30,iVar5);
        iVar2 = *(int *)(iVar5 + 8) + param_2;
        FUN_089d7aac(iVar2,(*(int *)(iVar5 + 0xc) - param_2) + -0x10,param_3,param_4);
        FUN_089d843c(*(int *)(param_1 + 4) + 0x30,iVar2,1);
        *(uint *)(iVar5 + 0xc) = param_2;
        *(int *)(*(int *)(param_1 + 4) + 0x10) = *(int *)(*(int *)(param_1 + 4) + 0x10) + 1;
        *(int *)(*(int *)(param_1 + 4) + 0xc) = *(int *)(*(int *)(param_1 + 4) + 0xc) + -0x10;
        iVar2 = *(int *)(param_1 + 4);
      }
      FUN_089d843c(iVar2 + 0x20,iVar5,0);
      uVar1 = *(undefined4 *)(iVar5 + 8);
      *(int *)(*(int *)(param_1 + 4) + 8) =
           *(int *)(*(int *)(param_1 + 4) + 8) + *(int *)(iVar5 + 0xc);
      *(int *)(*(int *)(param_1 + 4) + 0xc) =
           *(int *)(*(int *)(param_1 + 4) + 0xc) - *(int *)(iVar5 + 0xc);
    }
  }
  return uVar1;
}

