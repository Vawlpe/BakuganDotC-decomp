#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088467ac(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(DAT_08ac58c4 + 0x2c);
  iVar1 = FUN_088660e0();
  uVar4 = 0;
  if (iVar1 == 0) {
    return 0;
  }
  iVar3 = 0;
  iVar2 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x94))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x90));
  if (iVar2 != 0) {
    iVar3 = iVar1;
  }
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        FUN_088660c8();
        if (*(int *)(iVar3 + 0x170) != 0) {
          FUN_08854e90(*(int *)(iVar3 + 0x170));
        }
        FUN_08846590(param_1,iVar5);
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      }
    }
    else {
      if (iVar1 < 2) {
        if (param_2 == '\0') {
          return 0;
        }
        *(int *)(param_1 + 0x14) = iVar1 + 1;
      }
      else if (2 < iVar1) {
        return 0;
      }
      *(int *)(DAT_08ac58c4 + 0x2c) = iVar5 + 1;
      *(undefined4 *)(param_1 + 0x14) = 0;
      uVar4 = 1;
    }
    return uVar4;
  }
  return 0;
}

