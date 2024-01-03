#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08988220(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  
  piVar3 = (int *)DONE_Get_DAT_08AAC9E0();
  uVar5 = (uint)*(byte *)((int)*(char *)(param_1 + 0x8e0) + *(char *)(param_1 + 0x8e1) * 6 + param_1
                         + 0x8ec);
  iVar4 = *piVar3 + ((int)uVar5 >> 3);
  if ((int)uVar5 < 0) {
    bVar2 = (byte)(1 << (-(-uVar5 & 7) & 0x1f));
  }
  else {
    bVar2 = (byte)(1 << (uVar5 & 7));
  }
  *(byte *)(iVar4 + 0x601) = *(byte *)(iVar4 + 0x601) | bVar2;
  cVar1 = *(char *)(param_1 + 0x8e0);
  iVar4 = *(int *)(param_1 + 0x1c);
  *(undefined *)((int)cVar1 + *(char *)(param_1 + 0x8e1) * 6 + param_1 + 0x901) = 0;
  iVar4 = *(int *)(iVar4 + cVar1 * 4 + 0x4c);
  *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
  return;
}

