#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

ushort * FUN_08a26418(int param_1,uint param_2,int param_3)

{
  int iVar1;
  ushort *puVar2;
  
  if (param_1 != 0) {
    for (puVar2 = (ushort *)(param_1 + *(int *)(param_1 + 8));
        puVar2 < (ushort *)(*(int *)(param_1 + 4) + param_1);
        puVar2 = (ushort *)((int)puVar2 + iVar1)) {
      if ((param_2 == 0) || (param_2 == *puVar2)) {
        param_3 = param_3 + -1;
        if (param_3 == -1) {
          return puVar2;
        }
        iVar1 = *(int *)(puVar2 + 2);
      }
      else {
        iVar1 = *(int *)(puVar2 + 2);
      }
    }
  }
  return (ushort *)0x0;
}

