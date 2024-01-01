#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d8f60(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if ((DAT_08abf0a8 != (int *)0x0) && (iVar4 = *DAT_08abf0a8, iVar4 != 0)) {
    iVar5 = *(int *)(iVar4 + 0x34);
    while( true ) {
      if (iVar5 == param_2) {
        uVar1 = *(undefined4 *)(iVar4 + 0x24);
        uVar2 = *(undefined4 *)(iVar4 + 0x28);
        uVar3 = *(undefined4 *)(iVar4 + 0x2c);
        *param_1 = *(undefined4 *)(iVar4 + 0x20);
        param_1[1] = uVar1;
        param_1[2] = uVar2;
        param_1[3] = uVar3;
        return;
      }
      iVar4 = *(int *)(iVar4 + 4);
      if (iVar4 == 0) break;
      iVar5 = *(int *)(iVar4 + 0x34);
    }
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  return;
}

