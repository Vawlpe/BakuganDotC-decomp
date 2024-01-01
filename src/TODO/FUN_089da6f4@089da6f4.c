#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089da6f4(int param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 != 0) {
    *(int *)(param_1 + 0x2c) = param_2;
    uVar1 = param_2 + 0x54;
    *(int *)(param_1 + 0x30) = param_2 + 0x30;
    *(int *)(param_1 + 0x34) = param_2 + 0x50;
    *(uint *)(param_1 + 0x38) = uVar1;
    piVar2 = (int *)(*(int *)(param_1 + 0x2c) + 4);
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 4) < uVar1) {
      *piVar2 = *piVar2 + uVar1;
      piVar2 = (int *)(*(int *)(param_1 + 0x2c) + 8);
      iVar4 = 0;
      *piVar2 = *piVar2 + *(int *)(param_1 + 0x38);
      iVar3 = *(int *)(param_1 + 0x2c);
      iVar5 = 0;
      if (*(short *)(iVar3 + 0xc) != 0) {
        do {
          piVar2 = (int *)(*(int *)(iVar3 + 4) + iVar5 + 4);
          iVar4 = iVar4 + 1;
          *piVar2 = *piVar2 + *(int *)(param_1 + 0x38);
          iVar3 = *(int *)(param_1 + 0x2c);
          iVar5 = iVar5 + 0x10;
        } while (iVar4 < (int)(uint)*(ushort *)(iVar3 + 0xc));
      }
    }
  }
  return;
}

