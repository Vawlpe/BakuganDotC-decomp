#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088b10a0(int param_1)

{
  int iVar1;
  float fVar2;
  undefined4 local_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar1 = *(int *)(param_1 + 0x130);
  local_30 = *(undefined4 *)(iVar1 + 0xb0);
  uStack_28 = *(undefined4 *)(iVar1 + 0xb8);
  uStack_24 = *(undefined4 *)(iVar1 + 0xbc);
  local_2c = *(float *)(iVar1 + 0xb4) + 9999.0;
  iVar1 = FUN_0889d57c(&local_30,&local_30);
  if ((iVar1 != 0) && (20.0 < ABS(*(float *)(*(int *)(param_1 + 0x334) + 0x104) - local_2c))) {
    *(float *)(*(int *)(param_1 + 0x334) + 0x104) = local_2c;
  }
  if (DAT_08b002b4 == 4) {
    fVar2 = (float)FUN_0889d6e4();
    iVar1 = FUN_089e6b3c(*(undefined4 *)(param_1 + 0x334));
    if (*(float *)(iVar1 + 4) <= fVar2) {
      return 1;
    }
  }
  return 0;
}

