#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08922470(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(int *)(param_1 + 0x2258) == 0) {
    return 1;
  }
  *(int *)(param_1 + 0x2258) = *(int *)(param_1 + 0x2258) + -10;
  piVar1 = (int *)FUN_0880cc48();
  iVar5 = *(int *)(*piVar1 + 0x464) + 10;
  piVar1 = (int *)FUN_0880cc48();
  iVar4 = 9999999;
  if (iVar5 < 10000000) {
    iVar4 = iVar5;
    if (iVar5 < 0) {
      iVar4 = 0;
    }
    iVar3 = *piVar1;
  }
  else {
    iVar3 = *piVar1;
  }
  *(int *)(iVar3 + 0x464) = iVar4;
  piVar1 = (int *)FUN_0880cc48();
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x90);
  FUN_0891fd70(*(undefined4 *)(iVar4 + 0x60),*(undefined4 *)(iVar4 + 100),param_1,
               *(undefined4 *)(*piVar1 + 0x464),0x24,0);
  piVar1 = (int *)FUN_0880cc48();
  iVar6 = *(int *)(*piVar1 + 0x464);
  uVar2 = FUN_0880cc48();
  iVar4 = FUN_0880d0ac(uVar2,0x2d);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 200);
  FUN_0891fd70(*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 100),param_1,iVar6 - iVar4,0x32
               ,0);
  if (0x98967e < iVar5) {
    return 1;
  }
  return 0;
}

