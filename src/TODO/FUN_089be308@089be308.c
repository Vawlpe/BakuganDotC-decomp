#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089be308(int param_1,int param_2)

{
  undefined4 uVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 0x24);
  uVar1 = 0;
  if ((((puVar2 != (ushort *)0x0) && (*puVar2 != 0)) && (-1 < param_2)) &&
     (param_2 < (int)(uint)*puVar2)) {
    uVar1 = *(undefined4 *)(puVar2 + param_2 * 0x20 + 2);
  }
  return uVar1;
}

