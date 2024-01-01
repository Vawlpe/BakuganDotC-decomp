#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880eadc(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)FUN_089c9ed8(param_1,2);
  uVar5 = *puVar1;
  uVar2 = FUN_089c9d1c(param_1);
  iVar3 = FUN_088dfd08(uVar5);
  if (iVar3 != 0) {
    piVar4 = (int *)_DONE_Get_DAT_08AAC9E0();
    *(char *)(*piVar4 + *(int *)(DAT_08ac58c4 + 4) * 10 + (uVar2 & 0xff) + 0x2d0) =
         (char)*(undefined4 *)(iVar3 + 800);
  }
  return 0;
}

