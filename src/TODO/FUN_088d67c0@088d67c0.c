#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088d67c0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auStack_30 [20];
  
  uVar4 = 0;
  iVar1 = FUN_088e1948();
  iVar2 = _DONE_NotZero_DAT_08AAC9E0();
  if (iVar2 != 0) {
    uVar3 = _DONE_Get_DAT_08AAC9E0();
    iVar2 = FUN_0880d0ac(uVar3,0x2f);
    if (0 < iVar2) {
      iVar1 = 0;
    }
  }
  if ((iVar1 != 0) &&
     (iVar1 = *(int *)(*(int *)(iVar1 + 0x170) + 0xf4), iVar2 = *(int *)(iVar1 + 4),
     iVar1 = (**(code **)(iVar2 + 0x14))
                       (iVar1 + *(short *)(iVar2 + 0x10),param_1 + 0x1c0,auStack_30), iVar1 != 0)) {
    uVar4 = 1;
  }
  return uVar4;
}

