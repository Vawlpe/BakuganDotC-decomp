#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cc200(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_089bc814();
  if (iVar1 != 0) {
    uVar2 = DONE_GetPtr_DAT_08AC51F8();
    iVar1 = FUN_089bc984(uVar2);
    if (((iVar1 != 0) && (*(int *)(DAT_08ac58e0 + 4) != 0)) && (iVar1 = FUN_08a30d50(), iVar1 != 0))
    {
      FUN_08a30b14(*(undefined4 *)(DAT_08ac58e0 + 4));
      uVar2 = FUN_08a30760(*(undefined4 *)(DAT_08ac58e0 + 4));
      for (iVar1 = FUN_08a30f40(uVar2); iVar1 != 0; iVar1 = FUN_08a30f40(iVar1)) {
        iVar3 = FUN_08a30f54(iVar1);
        if (iVar3 == 0) {
          iVar3 = FUN_08a30f20(iVar1);
          if (iVar3 == 0) {
            return;
          }
          iVar4 = FUN_089cbe14(iVar3);
          if (iVar4 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x10) + 0x34))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 0x30));
            return;
          }
        }
      }
    }
  }
  return;
}

