#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e1004(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0x3a0) != '\0') &&
     ((param_2 != '\0' || (*(char *)(param_1 + 0x3b8) != '\0')))) {
    iVar1 = FUN_089c59d4();
    if (iVar1 != 0) {
      uVar2 = FUN_089c59f0();
      FUN_089c6350(uVar2,0x2c00028,0,0);
    }
    FUN_088243d8(DAT_08ac5c70,0x44,param_1 + 0x1b0);
    FUN_08824658(DAT_08ac5c70,10,param_1 + 0x1b0);
    *(undefined *)(param_1 + 0x3a0) = 0;
    *(undefined4 *)(param_1 + 0x3a8) = 0xfffffff1;
    *(undefined *)(param_1 + 0x3b8) = 0;
  }
  return;
}

