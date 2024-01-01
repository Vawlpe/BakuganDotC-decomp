#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a018f4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((*(int *)(param_1 + 4) != 0) && (piVar3 = (int *)(param_2 + -0x10), param_2 != 0)) {
    if ((*(int *)(param_2 + -8) == param_2) &&
       (iVar1 = FUN_089d7ad8(*(int *)(param_1 + 4) + 0x20,piVar3), iVar1 != 0)) {
      FUN_089d843c(*(int *)(param_1 + 4) + 0x30,piVar3,1);
      *(int *)(*(int *)(param_1 + 4) + 0xc) =
           *(int *)(*(int *)(param_1 + 4) + 0xc) + *(int *)(param_2 + -4);
      *(int *)(*(int *)(param_1 + 4) + 8) =
           *(int *)(*(int *)(param_1 + 4) + 8) - *(int *)(param_2 + -4);
      iVar1 = *(int *)(param_2 + -0xc);
      if (iVar1 == 0) {
        iVar1 = *piVar3;
      }
      else if (*(int *)(param_2 + -8) + *(int *)(param_2 + -4) == iVar1) {
        *(int *)(param_2 + -4) = *(int *)(iVar1 + 0xc) + *(int *)(param_2 + -4) + 0x10;
        FUN_089d7ad8(*(int *)(param_1 + 4) + 0x30,*(undefined4 *)(param_2 + -0xc));
        *(int *)(*(int *)(param_1 + 4) + 0xc) = *(int *)(*(int *)(param_1 + 4) + 0xc) + 0x10;
        *(int *)(*(int *)(param_1 + 4) + 0x10) = *(int *)(*(int *)(param_1 + 4) + 0x10) + -1;
        iVar1 = *piVar3;
      }
      else {
        iVar1 = *piVar3;
      }
      uVar4 = 1;
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0xc);
        uVar4 = 1;
        if ((iVar2 != 0) && (uVar4 = 1, (int *)(*(int *)(iVar1 + 8) + iVar2) == piVar3)) {
          *(int *)(iVar1 + 0xc) = *(int *)(param_2 + -4) + iVar2 + 0x10;
          FUN_089d7ad8(*(int *)(param_1 + 4) + 0x30,piVar3);
          *(int *)(*(int *)(param_1 + 4) + 0xc) = *(int *)(*(int *)(param_1 + 4) + 0xc) + 0x10;
          *(int *)(*(int *)(param_1 + 4) + 0x10) = *(int *)(*(int *)(param_1 + 4) + 0x10) + -1;
          uVar4 = 1;
        }
      }
    }
  }
  return uVar4;
}

