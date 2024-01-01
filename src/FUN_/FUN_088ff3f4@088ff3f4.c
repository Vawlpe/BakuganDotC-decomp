#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ff3f4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  iVar4 = *(int *)(DAT_08ac58c4 + 4);
  if ((-1 < iVar4) && (iVar5 = iVar4 * 0x10, iVar4 < 0x28)) {
    uVar1 = *(undefined4 *)(&DAT_08a99a94 + iVar5);
    uVar2 = *(undefined4 *)(&DAT_08a99a98 + iVar5);
    uVar3 = *(undefined4 *)(&DAT_08a99a9c + iVar5);
    *param_1 = *(undefined4 *)(&DAT_08a99a90 + iVar5);
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
  }
  return;
}

