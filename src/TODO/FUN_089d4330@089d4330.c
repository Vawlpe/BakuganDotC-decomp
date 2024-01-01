#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d4330(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = FUN_089cd820();
  if (iVar1 != 0) {
    iVar1 = *(int *)(param_1 + 0x54);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        uVar2 = FUN_089cd83c();
        iVar1 = FUN_089cdad4(uVar2,4);
        if (iVar1 != 0) {
          uVar2 = FUN_089cd83c();
          iVar1 = FUN_089cda14(uVar2,4);
          if (iVar1 == 0) {
            iVar3 = -1;
          }
        }
        uVar2 = FUN_089cd83c();
        iVar1 = FUN_089cdad4(uVar2,5);
        if (iVar1 != 0) {
          uVar2 = FUN_089cd83c();
          iVar1 = FUN_089cda14(uVar2,5);
          if (iVar1 == 0) {
            iVar3 = -1;
          }
        }
        if (iVar3 != 0) {
          return iVar3;
        }
        *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
        return 0;
      }
    }
    else if (iVar1 < 2) {
      uVar2 = FUN_089cd83c();
      iVar1 = FUN_089cdb50(uVar2,4);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = FUN_089cd83c();
      iVar1 = FUN_089cdb50(uVar2,5);
      if (iVar1 == 0) {
        return 0;
      }
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + 1;
      return 0;
    }
    iVar3 = 1;
  }
  return iVar3;
}

