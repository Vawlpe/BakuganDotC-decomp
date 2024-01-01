#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a198fc(short *param_1,uint param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  int iVar5;
  
  if (param_1 != (short *)0x0) {
    puVar4 = (ushort *)(*(int *)(param_1 + 2) + (int)param_1);
    puVar2 = puVar4;
    if (-1 < *param_1) {
      puVar2 = (ushort *)((int)param_1 + *(int *)(param_1 + 4));
    }
    iVar5 = 0;
    if (puVar2 < puVar4) {
      if (param_2 == 0) {
        iVar3 = *(int *)(puVar2 + 2);
        while( true ) {
          puVar2 = (ushort *)((int)puVar2 + iVar3);
          iVar5 = iVar5 + 1;
          if (puVar4 <= puVar2) break;
          iVar3 = *(int *)(puVar2 + 2);
        }
        return iVar5;
      }
      uVar1 = *puVar2;
      while( true ) {
        if (param_2 == (uVar1 & 0xffff7fff)) {
          iVar5 = iVar5 + 1;
        }
        if (puVar4 <= (ushort *)((int)puVar2 + *(int *)(puVar2 + 2))) break;
        puVar2 = (ushort *)((int)puVar2 + *(int *)(puVar2 + 2));
        uVar1 = *puVar2;
      }
      return iVar5;
    }
  }
  return 0;
}

