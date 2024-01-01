#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08886e84(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = param_1[0x22];
  *param_1 = param_2;
  if (iVar3 == 0) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x110,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    param_1[0x22] = iVar3;
  }
  puVar1 = PTR_DAT_08aba9e4;
  if ((param_3 < 1) || (0x20 < param_3)) {
    iVar4 = 0;
    iVar5 = 0x22;
    do {
      uVar2 = *(undefined4 *)((int)(puVar1 + iVar4) + 4);
      *(undefined4 *)(iVar3 + iVar4) = *(undefined4 *)(puVar1 + iVar4);
      ((undefined4 *)(iVar3 + iVar4))[1] = uVar2;
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + 8;
    } while (iVar5 != 0);
  }
  else {
    iVar4 = *(int *)(&DAT_08aba9e0 + param_3 * 4);
    iVar5 = 0;
    iVar6 = 0x22;
    do {
      uVar2 = ((undefined4 *)(iVar4 + iVar5))[1];
      *(undefined4 *)(iVar3 + iVar5) = *(undefined4 *)(iVar4 + iVar5);
      ((undefined4 *)(iVar3 + iVar5))[1] = uVar2;
      iVar6 = iVar6 + -1;
      iVar5 = iVar5 + 8;
    } while (iVar6 != 0);
  }
  param_1[0x2b] = 4;
  param_1[0x2c] = 4;
  param_1[0x2d] = 4;
  param_1[0x2e] = 4;
  *(undefined *)((int)param_1 + 0x8d) = 0;
  param_1[0x40] = 0;
  param_1[0x27] = 0x447a0000;
  FUN_08886c94(param_1);
  uVar2 = FUN_08886d68(param_1);
  param_1[0x25] = uVar2;
  param_1[0x26] = uVar2;
  return;
}

