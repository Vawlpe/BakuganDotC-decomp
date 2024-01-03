#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891ba00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined uVar4;
  
  *(undefined *)(param_1 + 0x2176) = 1;
  uVar1 = DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,0x2b);
  if (iVar2 == 2) {
    uVar1 = DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar1,0x2e);
    if (iVar2 == 0) {
      uVar4 = 0;
      if ((1 < *(int *)(DAT_08ac58c4 + 4)) && (uVar4 = 2, *(int *)(DAT_08ac58c4 + 4) == 4)) {
        uVar4 = 2;
        piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
        if ((*(ushort *)(*piVar3 + 0x82) & 1) == 0) {
          uVar4 = 0;
        }
      }
      *(undefined *)(param_1 + 0x2176) = uVar4;
    }
  }
  return;
}

