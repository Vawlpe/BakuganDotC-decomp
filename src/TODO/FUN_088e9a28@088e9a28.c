#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_088e9a28(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  
  param_1[1] = 0;
  *(undefined *)(param_1 + 2) = 0;
  uVar2 = 0;
  puVar1 = param_1;
  do {
    puVar1[3] = 0;
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (uVar2 < 6);
  *param_1 = 0;
  *(undefined *)(param_1 + 9) = 1;
  *(undefined *)((int)param_1 + 0x25) = 1;
  return param_1;
}

