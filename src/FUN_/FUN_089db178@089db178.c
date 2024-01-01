#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089db178(uint *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (uint)(puVar2 + 1);
  *puVar2 = 0x4a000000;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (uint)(puVar2 + 1);
  *puVar2 = 0x4b000000;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (uint)(puVar2 + 1);
  *puVar2 = 0x483f8000;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (uint)(puVar2 + 1);
  *puVar2 = 0x493f8000;
  puVar2 = (undefined4 *)*param_1;
  *param_1 = (uint)(puVar2 + 1);
  *puVar2 = 0xc0000000;
  uVar3 = *param_1;
  uVar1 = param_1[2];
  if (param_2 != (uint *)0x0) {
    if (uVar1 < uVar3) {
      return 0;
    }
    *param_2 = uVar3;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = uVar1 - uVar3;
  }
  return uVar3 - param_1[1];
}

