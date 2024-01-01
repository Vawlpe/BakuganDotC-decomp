#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ce518(int param_1)

{
  int iVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = FUN_089d5814();
  if ((iVar1 != 0) && (*(int *)(param_1 + 0x2c) != 0)) {
    iVar1 = FUN_089d5830();
    iVar5 = (*(int *)(iVar1 + 0x54) * 0x1e) / 90000;
    iVar3 = *(int *)(param_1 + 0x24);
    iVar4 = *(int *)(param_1 + 0x2c);
    iVar1 = *(int *)(param_1 + 0x28);
    puVar2 = (ushort *)(iVar4 + iVar3 * 6);
    while (iVar1 < (int)(uint)*puVar2) {
      if (iVar5 < (int)(uint)*puVar2) {
        *(int *)(param_1 + 0x28) = iVar5;
        return;
      }
      if (puVar2[1] == 0) {
        FUN_089c2fbc(puVar2[2]);
        iVar4 = *(int *)(param_1 + 0x2c);
        iVar3 = *(int *)(param_1 + 0x24);
        iVar1 = *(int *)(param_1 + 0x28);
      }
      iVar3 = iVar3 + 1;
      *(int *)(param_1 + 0x24) = iVar3;
      puVar2 = (ushort *)(iVar4 + iVar3 * 6);
    }
    *(int *)(param_1 + 0x28) = iVar5;
  }
  return;
}

