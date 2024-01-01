#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b2ac0(undefined4 *param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if ((DAT_08abd620 != (int *)0x0) && (iVar5 = *DAT_08abd620, iVar5 != 0)) {
    sVar1 = *(short *)(iVar5 + 0x32);
    while( true ) {
      if (sVar1 == param_2) {
        uVar2 = *(undefined4 *)(iVar5 + 0x24);
        uVar3 = *(undefined4 *)(iVar5 + 0x28);
        uVar4 = *(undefined4 *)(iVar5 + 0x2c);
        *param_1 = *(undefined4 *)(iVar5 + 0x20);
        param_1[1] = uVar2;
        param_1[2] = uVar3;
        param_1[3] = uVar4;
        return;
      }
      iVar5 = *(int *)(iVar5 + 4);
      if (iVar5 == 0) break;
      sVar1 = *(short *)(iVar5 + 0x32);
    }
  }
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  return;
}

