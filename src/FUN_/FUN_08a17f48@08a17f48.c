#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a17f48(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  undefined auStack_60 [64];
  
  if ((((param_3 != 0) && (param_4 != 0)) && (param_5 != 0)) &&
     (iVar1 = FUN_08a17094(param_3,param_4,auStack_60), iVar1 != 0)) {
    if ((*(ushort *)(param_3 + 2) & 0x100) == 0) {
      if ((*(ushort *)(param_3 + 2) & 0x200) != 0) {
        uVar2 = (uint)*(ushort *)(param_3 + 0xe);
        if ((uVar2 + 1 & 0xffff0000) == 0) {
          if (*(ushort *)(param_5 + 0x1c) <= uVar2) {
            return;
          }
          uVar2 = *(int *)(param_5 + 0xc) + uVar2 * 0x10;
        }
        if (uVar2 != 0) {
          FUN_08a16ba0(param_2,uVar2,*(undefined *)(param_3 + 0xd),0,auStack_60,iVar1);
        }
      }
    }
    else {
      uVar2 = (uint)*(ushort *)(param_3 + 0xe);
      if ((uVar2 + 1 & 0xffff0000) == 0) {
        if (*(ushort *)(param_5 + 0x18) <= uVar2) {
          return;
        }
        uVar2 = *(int *)(param_5 + 4) + uVar2 * 0xc0;
      }
      if (uVar2 != 0) {
        FUN_08a16dbc(param_2,uVar2,*(undefined *)(param_3 + 0xd),0,auStack_60);
      }
    }
  }
  return;
}

