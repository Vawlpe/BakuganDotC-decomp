#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_0888a044(int param_1)

{
  undefined uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x8c);
  uVar1 = 0;
  if (iVar2 < 2) {
    if (0 < iVar2) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x28) + 0x14);
      iVar2 = (**(code **)(iVar2 + 0x5c))(*(int *)(param_1 + 0x28) + (int)*(short *)(iVar2 + 0x58));
      uVar1 = iVar2 != 0;
    }
  }
  else if (iVar2 < 3) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x14);
    iVar2 = (**(code **)(iVar2 + 0x6c))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x68));
    if ((iVar2 == 0) &&
       (iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x14),
       iVar2 = (**(code **)(iVar2 + 100))(*(int *)(param_1 + 0x2c) + (int)*(short *)(iVar2 + 0x60)),
       iVar2 == 0)) {
      return 1;
    }
    uVar1 = 2;
  }
  return uVar1;
}

