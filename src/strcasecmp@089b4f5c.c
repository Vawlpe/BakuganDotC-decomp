#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int strcasecmp(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *param_1;
  while( true ) {
    iVar4 = (int)(char)bVar1;
    if (iVar4 == 0) break;
    if (((&DAT_08aa00b1)[iVar4] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    iVar5 = (int)(char)*param_2;
    if (((&DAT_08aa00b1)[iVar5] & 1) != 0) {
      iVar5 = iVar5 + 0x20;
    }
    if (iVar4 != iVar5) break;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    bVar1 = *param_1;
  }
  uVar3 = (uint)*param_1;
  uVar2 = (uint)*param_2;
  if (((&DAT_08aa00b1)[uVar3] & 1) != 0) {
    uVar3 = uVar3 + 0x20;
  }
  if (((&DAT_08aa00b1)[uVar2] & 1) == 0) {
    return uVar3 - uVar2;
  }
  return uVar3 - (uVar2 + 0x20);
}

