#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e14d4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_0880cc48();
  if (0 < *(int *)(*piVar1 + 0x464)) {
    piVar1 = (int *)FUN_0880cc48();
    iVar4 = *(int *)(*piVar1 + 0x464) + -300;
    iVar3 = 9999999;
    if ((iVar4 < 10000000) && (iVar3 = iVar4, iVar4 < 0)) {
      iVar3 = 0;
    }
    *(int *)(*piVar1 + 0x464) = iVar3;
    iVar3 = FUN_089c59d4();
    if (iVar3 != 0) {
      uVar2 = FUN_089c59f0();
      uVar2 = FUN_089c6350(uVar2,0x2c00036,0,0);
      *(undefined4 *)(param_1 + 0x3cc) = uVar2;
    }
  }
  return;
}

