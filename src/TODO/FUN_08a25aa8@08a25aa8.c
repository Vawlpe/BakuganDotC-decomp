#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a25aa8(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  if (param_1 != 0) {
    if ((param_2 & 2) == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = FUN_08a10958(param_1,1,0);
      iVar3 = FUN_08a10970(param_1,1,0);
      iVar4 = *(int *)(param_1 + 0x10);
      if ((*(int *)(param_1 + 0xc) != 0) && (iVar2 == 0)) {
        FUN_08a24d00(*(int *)(param_1 + 0xc),1,0x80000001,param_3);
      }
      if (iVar4 == 0) {
        iVar2 = *(int *)(param_1 + 4);
      }
      else if (iVar3 == 0) {
        FUN_08a24c1c(iVar4,1,0x80000001,param_3);
        iVar2 = *(int *)(param_1 + 4);
      }
      else {
        iVar2 = *(int *)(param_1 + 4);
      }
      uVar1 = 1;
      if (iVar2 == *(int *)(param_1 + 8)) {
        if ((*(ushort *)(param_1 + 2) & 0x10) == 0) {
          iVar2 = FUN_08a111b4(param_1,0,0,0x80000001);
          FUN_08a10200(param_3,2,4,iVar2 + 4);
          uVar1 = 1;
        }
        else {
          uVar1 = 1;
        }
      }
    }
  }
  return uVar1;
}

