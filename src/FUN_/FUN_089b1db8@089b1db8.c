#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b1db8(void)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = (int *)FUN_0880cc48();
  iVar4 = *(int *)(*piVar1 + 0x464);
  uVar2 = FUN_0880cc48();
  iVar3 = FUN_0880d0ac(uVar2,0x2d);
  iVar4 = iVar4 + iVar3;
  piVar1 = (int *)FUN_0880cc48();
  iVar3 = 9999999;
  if ((iVar4 < 10000000) && (iVar3 = iVar4, iVar4 < 0)) {
    iVar3 = 0;
  }
  *(int *)(*piVar1 + 0x464) = iVar3;
  return;
}
