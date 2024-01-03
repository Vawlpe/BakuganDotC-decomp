#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char FUN_08992278(undefined4 param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  char local_2a [2];
  ushort local_28;
  
  uVar4 = 0;
  uVar3 = 0;
  do {
    FUN_089921e4(local_2a,param_1,uVar3);
    uVar3 = (uint)local_28;
    if (local_2a[0] == '\0') {
      piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
      if ((int)uVar3 < 0) {
        uVar2 = -(-uVar3 & 7) & 0x1f;
      }
      else {
        uVar2 = uVar3 & 7;
      }
      if (((uint)*(byte *)(*piVar1 + ((int)uVar3 >> 3) + 0x5d3) & 1 << uVar2) != 0) {
        piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
        *(byte *)(*piVar1 + 0x604) = *(byte *)(*piVar1 + 0x604) | (byte)(1 << (uVar4 & 0x1f));
      }
    }
    uVar4 = uVar4 + 1;
    uVar3 = uVar4 & 0xff;
  } while ((int)uVar4 < 8);
  uVar3 = 0;
  cVar5 = '\0';
  do {
    piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
    if (((uint)*(byte *)(*piVar1 + 0x604) & 1 << (uVar3 & 0x1f)) != 0) {
      cVar5 = cVar5 + '\x01';
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 8);
  return cVar5;
}

