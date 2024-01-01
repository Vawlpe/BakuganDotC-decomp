#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880a6a0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10);
  if (iVar3 == 5) {
    uVar1 = FUN_08816aac();
    iVar3 = FUN_08816e58(uVar1);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 999;
    }
  }
  else if (iVar3 == 4) {
    iVar3 = FUN_08816aac();
    iVar3 = FUN_089eb134(*(undefined4 *)(iVar3 + 0x2c));
    if (iVar3 != 0) {
      iVar3 = FUN_08816aac();
      iVar2 = FUN_089edb80();
      *(float *)(iVar3 + 4) = *(float *)(iVar2 + 0x10) + 1.0;
      uVar1 = FUN_08816aac();
      FUN_08816ba4(uVar1,*(undefined4 *)(PTR_PTR_DAT_08aae714 + 0x24));
      iVar3 = FUN_08816aac();
      *(undefined4 *)(iVar3 + 0x40) = 1;
      uVar1 = FUN_08816aac();
      iVar3 = FUN_08816c28(uVar1,1,0xffffffff);
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
    }
  }
  else if (iVar3 == 1) {
    if ((*DAT_08aac9c8 != 0) && (iVar3 = FUN_089cc778(), iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x10) = 999;
      iVar3 = FUN_0880d2e0();
      if (iVar3 != 0) {
        iVar3 = FUN_089cc798(*DAT_08aac9c8);
        if (iVar3 < 3) {
          if (iVar3 < 1) {
            *(undefined4 *)(param_1 + 0x10) = 999;
          }
          else if (iVar3 < 2) {
            uVar1 = FUN_0880cc48();
            iVar2 = FUN_0880d488(uVar1);
            if (iVar2 == 0) {
              iVar3 = 4;
              *(undefined4 *)(param_1 + 0x10) = 4;
              uVar1 = FUN_0880cc48();
              FUN_0880ceb8(uVar1);
            }
            else {
              uVar1 = FUN_0880cc48();
              FUN_0880d458(uVar1);
            }
          }
        }
        else if (iVar3 != 5) {
          *(undefined4 *)(param_1 + 0x10) = 999;
        }
        uVar1 = FUN_0880cc48();
        FUN_0880cd9c(uVar1,1,iVar3);
      }
      uVar1 = FUN_089cc080();
      FUN_089cc5a8(uVar1,1);
    }
  }
  else {
    if (iVar3 != 0) {
      FUN_089bf7a8(param_1,1);
      return;
    }
    iVar3 = FUN_089cc058();
    if (iVar3 != 0) {
      uVar1 = FUN_089cc080();
      FUN_089cc460(uVar1,1);
      uVar1 = FUN_089cc080();
      iVar3 = FUN_089cc630(uVar1,1);
      *DAT_08aac9c8 = iVar3;
      iVar3 = *(int *)(*DAT_08aac9c8 + 0x10);
      (**(code **)(iVar3 + 0x14))(*DAT_08aac9c8 + (int)*(short *)(iVar3 + 0x10),1);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    }
  }
  return;
}

