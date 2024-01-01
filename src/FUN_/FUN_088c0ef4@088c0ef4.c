#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088c0ef4(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_088e1948();
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x354) != '\0')) {
    uVar1 = *(undefined *)(iVar2 + 0x540);
    FUN_088c0e50(param_1,uVar1);
    *(undefined *)(param_1 + 0x79b) = uVar1;
    iVar2 = FUN_089c59d4();
    if (iVar2 != 0) {
      uVar3 = FUN_089c59f0();
      FUN_089c6350(uVar3,0x2c0005a,0,0);
    }
    iVar2 = FUN_089c59d4();
    if (iVar2 != 0) {
      uVar3 = FUN_089c59f0();
      uVar3 = FUN_089c6350(uVar3,0x2c00023,0,0);
      *(undefined4 *)(param_1 + 0x6f4) = uVar3;
    }
    return 1;
  }
  return 0;
}

