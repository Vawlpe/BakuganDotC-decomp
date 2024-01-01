#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089cc300(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if ((*(int *)(DAT_08ac58e0 + 4) != 0) && (iVar1 = FUN_08a30d50(), iVar1 != 0)) {
    uVar2 = FUN_08a30760(*(undefined4 *)(DAT_08ac58e0 + 4));
    for (iVar1 = FUN_08a30f40(uVar2); iVar1 != 0; iVar1 = FUN_08a30f40(iVar1)) {
      iVar3 = FUN_08a30f54(iVar1);
      if (iVar3 == 0) {
        iVar3 = FUN_08a30f20(iVar1);
        if (iVar3 == 0) {
          return iVar4;
        }
        iVar3 = FUN_089cbde8();
        if (0 < iVar3) {
          if (iVar3 < 4) {
            if (iVar3 < 3) {
              iVar4 = 1;
            }
          }
          else if (iVar3 < 5) {
            iVar4 = 1;
          }
        }
        if (iVar4 != 0) {
          return iVar4;
        }
      }
    }
  }
  return iVar4;
}

