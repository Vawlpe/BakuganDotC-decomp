#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08984cf8(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  piVar3 = (int *)FUN_0880cc48();
  uVar5 = (uint)*(byte *)((int)*(char *)(param_1 + 0xbcc) + *(char *)(param_1 + 0xbcd) * 4 + param_1
                         + 0xbd8);
  iVar4 = *piVar3 + ((int)uVar5 >> 3);
  if ((int)uVar5 < 0) {
    bVar2 = (byte)(1 << (-(-uVar5 & 7) & 0x1f));
  }
  else {
    bVar2 = (byte)(1 << (uVar5 & 7));
  }
  *(byte *)(iVar4 + 0x5f3) = *(byte *)(iVar4 + 0x5f3) | bVar2;
  cVar1 = *(char *)(param_1 + 0xbcc);
  iVar4 = *(int *)(param_1 + 0x1c);
  *(undefined *)((int)cVar1 + *(char *)(param_1 + 0xbcd) * 4 + param_1 + 0xc28) = 0;
  iVar4 = *(int *)(iVar4 + cVar1 * 4 + 0x24);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
  return;
}

