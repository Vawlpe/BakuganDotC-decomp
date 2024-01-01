#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088c1e50(void)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(DAT_08ac58c4 + 0x3c);
  piVar1 = (int *)FUN_0880cc48();
  if (*(char *)(*piVar1 + (uVar2 & 0xff) * 4 + 0x412) != '\0') {
    return 1;
  }
  return 0;
}

