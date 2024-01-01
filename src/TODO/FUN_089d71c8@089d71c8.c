#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089d71c8(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((*(int *)(param_1 + 4) != 0) && (param_2 != 0)) {
    piVar1 = (int *)FUN_089d73e0(param_1);
    if (piVar1 == (int *)0x0) {
      FUN_089d7384(param_1);
    }
    else {
      iVar2 = FUN_089d7ad8(*(int *)(param_1 + 4) + 0x20,piVar1);
      if (iVar2 != 0) {
        FUN_089d843c(*(int *)(param_1 + 4) + 0x30,piVar1,1);
        *(int *)(*(int *)(param_1 + 4) + 0xc) = *(int *)(*(int *)(param_1 + 4) + 0xc) + piVar1[3];
        *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(*(int *)(param_1 + 4) + 8) - piVar1[3];
        iVar2 = piVar1[1];
        if (iVar2 == 0) {
          iVar2 = *piVar1;
        }
        else if (piVar1[2] + piVar1[3] == *(int *)(iVar2 + 8)) {
          piVar1[3] = piVar1[3] + *(int *)(iVar2 + 0xc);
          FUN_089d7ad8(*(int *)(param_1 + 4) + 0x30,iVar2);
          FUN_089d749c(param_1,iVar2);
          *(int *)(*(int *)(param_1 + 4) + 0x10) = *(int *)(*(int *)(param_1 + 4) + 0x10) + -1;
          iVar2 = *piVar1;
        }
        else {
          iVar2 = *piVar1;
        }
        if (((iVar2 != 0) && (iVar3 = *(int *)(iVar2 + 0xc), iVar3 != 0)) &&
           (*(int *)(iVar2 + 8) + iVar3 == piVar1[2])) {
          *(int *)(iVar2 + 0xc) = iVar3 + piVar1[3];
          FUN_089d7ad8(*(int *)(param_1 + 4) + 0x30,piVar1);
          FUN_089d749c(param_1,piVar1);
          *(int *)(*(int *)(param_1 + 4) + 0x10) = *(int *)(*(int *)(param_1 + 4) + 0x10) + -1;
        }
        uVar4 = 1;
      }
    }
  }
  return uVar4;
}

