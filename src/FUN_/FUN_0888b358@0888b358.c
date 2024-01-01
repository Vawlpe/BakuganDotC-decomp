#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0888b358(int param_1)

{
  int iVar1;
  undefined uVar2;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  uVar2 = 0;
  if (iVar1 < 2) {
    if ((0 < iVar1) && (iVar1 = FUN_0885fc80(*(undefined4 *)(param_1 + 0x28)), iVar1 == 0)) {
      uVar2 = *(undefined *)(*(int *)(param_1 + 0x28) + 0x476);
    }
  }
  else if ((iVar1 < 3) &&
          (iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x14),
          iVar1 = (**(code **)(iVar1 + 0x94))
                            (*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar1 + 0x90)), iVar1 != 0))
  {
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return uVar2;
}

