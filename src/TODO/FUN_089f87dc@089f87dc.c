#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined2 FUN_089f87dc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x70);
  iVar2 = 0;
  if (*(short *)(param_1 + 0x74) != 0) {
    do {
      iVar1 = strcmp(iVar3 + 0xc,param_2);
      if (iVar1 == 0) {
        return *(undefined2 *)(iVar3 + 8);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + *(int *)(iVar3 + 4);
    } while (iVar2 < (int)(uint)*(ushort *)(param_1 + 0x74));
  }
  return 0;
}

