#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b1fa0(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined2 local_40 [32];
  
  bVar1 = (&DAT_08ac3ef0)[param_2 & 0xff];
  iVar4 = 0;
  iVar3 = 0xf;
  do {
    uVar2 = *(undefined2 *)
             ((int)(&DAT_08ac3efa + iVar4 + ((uint)bVar1 + (param_3 & 0xff)) * 0x3c) + 2);
    *(undefined2 *)((int)local_40 + iVar4) =
         *(undefined2 *)(&DAT_08ac3efa + iVar4 + ((uint)bVar1 + (param_3 & 0xff)) * 0x3c);
    *(undefined2 *)((int)local_40 + iVar4 + 2) = uVar2;
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 4;
  } while (iVar3 != 0);
  iVar4 = 0;
  iVar3 = 0xf;
  do {
    uVar2 = *(undefined2 *)((int)local_40 + iVar4 + 2);
    *(undefined2 *)(param_1 + iVar4) = *(undefined2 *)((int)local_40 + iVar4);
    ((undefined2 *)(param_1 + iVar4))[1] = uVar2;
    iVar3 = iVar3 + -1;
    iVar4 = iVar4 + 4;
  } while (iVar3 != 0);
  return;
}

