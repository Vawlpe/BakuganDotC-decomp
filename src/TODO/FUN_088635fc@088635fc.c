#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088635fc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x1a8) == 0) {
    iVar2 = *(int *)(param_1 + 0x1a4);
    *(int *)(param_1 + 0x1a4) = iVar2 + -1;
    if (iVar2 < 1) {
      iVar2 = *(int *)(param_1 + 0x198);
      *(int *)(param_1 + 0x1a0) = iVar2;
      if (iVar2 != 0) {
        FUN_08888f04(param_1 + 0x434,iVar2);
      }
      if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
        iVar3 = *(int *)(param_1 + 0x150);
        iVar2 = FUN_0884b248();
        if (iVar2 != 0) {
          FUN_0884b268();
          uVar1 = _DONE_Get_DAT_08AAC9E0();
          iVar2 = FUN_0880d0ac(uVar1,2);
          if (iVar2 != 0) {
            uVar1 = _DONE_Get_DAT_08AAC9E0();
            FUN_0880d70c(uVar1,iVar3 + 0xe,*(int *)(param_1 + 0x1b0) + *(int *)(param_1 + 0x1b4));
          }
        }
      }
      FUN_088601c8(param_1);
      *(undefined4 *)(param_1 + 0x1b0) = 0;
      *(undefined4 *)(param_1 + 0x1b4) = 0;
      *(undefined4 *)(param_1 + 0x650) = 0x3f800000;
    }
  }
  else {
    FUN_08860108(param_1);
  }
  return;
}

