#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

ushort * FUN_089be378(int param_1,int param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  
  puVar2 = *(ushort **)(param_1 + 0x24);
  puVar1 = (ushort *)&DAT_08aa04b8;
  if ((((puVar2 != (ushort *)0x0) && (*puVar2 != 0)) && (-1 < param_2)) &&
     (param_2 < (int)(uint)*puVar2)) {
    puVar1 = puVar2 + param_2 * 0x20 + 8;
  }
  return puVar1;
}

