#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ebd54(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  
  if ((*(byte *)(param_1 + 0x273) & 1) == 0) {
    iVar2 = 0x14;
    puVar3 = &DAT_08a990a8;
    do {
      iVar2 = iVar2 + -1;
      if (*puVar3 == (param_2 & 0xffff)) {
        iVar2 = FUN_089c59d4();
        if (iVar2 == 0) {
          return;
        }
        uVar1 = FUN_089c59f0();
        FUN_089c6350(uVar1,puVar3[1],0,0);
        return;
      }
      puVar3 = puVar3 + -2;
    } while (-1 < iVar2);
  }
  return;
}

