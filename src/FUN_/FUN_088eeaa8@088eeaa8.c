#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088eeaa8(int param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  uVar3 = 2;
  *(undefined *)(param_1 + 0x269) = 0;
  bVar1 = *(ushort *)(param_1 + 0x250) < *(ushort *)(param_1 + 0x252);
  while( true ) {
    if (!bVar1) {
      if (*(short *)(param_1 + 0x256) == *(short *)(param_1 + 600)) {
        uVar3 = 5;
      }
      return uVar3;
    }
    puVar2 = *(undefined **)(param_1 + 0x20);
    FUN_088ee0e8(param_1,*puVar2,puVar2[1],(int)*(short *)(puVar2 + 2));
    if (*(char *)(param_1 + 0x269) != '\0') break;
    *(short *)(param_1 + 0x250) = *(short *)(param_1 + 0x250) + 1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
    bVar1 = *(ushort *)(param_1 + 0x250) < *(ushort *)(param_1 + 0x252);
  }
  return 3;
}

