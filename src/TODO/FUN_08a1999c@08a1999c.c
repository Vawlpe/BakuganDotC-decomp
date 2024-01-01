#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

ushort * FUN_08a1999c(short *param_1,uint param_2,int param_3)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  
  if (param_1 != (short *)0x0) {
    puVar4 = (ushort *)(*(int *)(param_1 + 2) + (int)param_1);
    puVar2 = puVar4;
    if (-1 < *param_1) {
      puVar2 = (ushort *)((int)param_1 + *(int *)(param_1 + 4));
    }
    if (puVar2 < puVar4) {
      if (param_2 == 0) {
        param_3 = param_3 + -1;
        do {
          if (param_3 == -1) {
            return puVar2;
          }
          puVar2 = (ushort *)((int)puVar2 + *(int *)(puVar2 + 2));
          param_3 = param_3 + -1;
        } while (puVar2 < puVar4);
        return (ushort *)0x0;
      }
      uVar1 = *puVar2;
      while( true ) {
        if (param_2 == (uVar1 & 0xffff7fff)) {
          param_3 = param_3 + -1;
          if (param_3 == -1) {
            return puVar2;
          }
          iVar3 = *(int *)(puVar2 + 2);
        }
        else {
          iVar3 = *(int *)(puVar2 + 2);
        }
        puVar2 = (ushort *)((int)puVar2 + iVar3);
        if (puVar4 <= puVar2) break;
        uVar1 = *puVar2;
      }
    }
  }
  return (ushort *)0x0;
}

