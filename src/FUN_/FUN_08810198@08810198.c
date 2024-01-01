#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08810198(undefined4 param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  sVar1 = FUN_089c9d1c();
  piVar2 = (int *)FUN_089c9ed8(param_1,2);
  uVar3 = FUN_088660e0();
  iVar4 = FUN_08860188(uVar3);
  if (sVar1 < 1) {
    if ((-1 < sVar1) && (iVar4 = FUN_0882c13c(), iVar4 != 0)) {
      iVar4 = FUN_0882c15c();
      *piVar2 = (int)(short)*(undefined4 *)(iVar4 + 0x904);
    }
  }
  else if ((sVar1 < 2) && (iVar4 != 0)) {
    *piVar2 = *(int *)(iVar4 + 0x580);
  }
  return 0;
}

