#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

byte * FUN_08a235e0(uint *param_1,byte **param_2,int *param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  byte **ppbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  
  uVar6 = *param_1;
  uVar1 = 0;
  pbVar5 = (byte *)0x0;
  if (uVar6 != 0) {
    pbVar5 = *param_2;
    ppbVar3 = param_2;
    while ((ppbVar3 = ppbVar3 + 1, *pbVar5 != param_5 &&
           (uVar1 = uVar1 + 1, pbVar5 = (byte *)0x0, uVar1 < uVar6))) {
      pbVar5 = *ppbVar3;
    }
  }
  uVar4 = uVar6 - 1;
  if ((uVar1 != uVar4) && (uVar1 < uVar4)) {
    param_2 = param_2 + uVar1;
    do {
      uVar1 = uVar1 + 1;
      *param_2 = param_2[1];
      param_2 = param_2 + 1;
    } while (uVar1 < uVar4);
  }
  *param_1 = uVar6 - 1;
  iVar2 = *param_3;
  *param_3 = iVar2 + 1;
  *(byte **)(iVar2 * 4 + param_4) = pbVar5;
  return pbVar5;
}

