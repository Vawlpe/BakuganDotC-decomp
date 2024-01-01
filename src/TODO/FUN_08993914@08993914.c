#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08993914(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  
  uVar5 = 0;
  uVar3 = 0;
  do {
    piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
    if (((uint)*(byte *)(*piVar1 + 0x604) & 1 << (uVar3 & 0x1f)) == 0) break;
    uVar3 = uVar3 + 1;
    uVar5 = uVar5 + 1 & 0xff;
  } while ((int)uVar3 < 8);
  FUN_089921e4(&local_20,param_1,uVar5);
  *(undefined2 *)(param_1 + 0x11c) = local_20;
  *(undefined2 *)(param_1 + 0x11e) = local_1e;
  *(undefined2 *)(param_1 + 0x120) = local_1c;
  piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
  *(byte *)(*piVar1 + 0x604) = *(byte *)(*piVar1 + 0x604) | (byte)(1 << (uVar5 & 0x1f));
  iVar4 = 0;
  iVar2 = 0;
  do {
    piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
    iVar4 = iVar4 + 1;
    *(short *)(*piVar1 + uVar5 * 0x14 + iVar2 + 0x606) = (short)*(undefined4 *)(param_1 + 0xdc);
    param_1 = param_1 + 4;
    iVar2 = iVar2 + 2;
  } while (iVar4 < 10);
  return;
}

