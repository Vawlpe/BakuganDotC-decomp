#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e7488(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088e7364(param_1,0);
  if ((iVar1 == 0) &&
     (iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 0x94))
                        (*(undefined4 *)(param_1 + 0x410),0x40000000,
                         param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x90),param_1 + 0x370,0,0),
     iVar1 != 0)) {
    *(undefined4 *)(param_1 + 0x3a0) = 0;
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 1;
  }
  return;
}

