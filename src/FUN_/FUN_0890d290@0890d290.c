#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890d290(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      iVar2 = 0;
      iVar1 = 0;
      do {
        iVar2 = iVar2 + 1;
        iVar3 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar1);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar1 = iVar1 + 4;
      } while (iVar2 < 0x17);
      *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
      return;
    }
  }
  else if (iVar1 < 2) {
    *(int *)(param_1 + 0x14) = iVar1 + 1;
    *(undefined4 *)(DAT_08ac5934 + 0x1c) = *(undefined4 *)(DAT_08ac0e80 + 0x38);
    FUN_089bf7a8(param_1,1);
  }
  return;
}

