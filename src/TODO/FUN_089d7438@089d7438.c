#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d7438(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = 0;
  if (0 < iVar3) {
    iVar1 = *(int *)(param_1 + 0x10);
    while( true ) {
      iVar2 = iVar1 + 1;
      if (*(int *)(*(int *)(param_1 + 8) + iVar1 * 0x10 + 8) == 0) {
        *(int *)(param_1 + 0x10) = iVar2;
        return *(int *)(param_1 + 8) + iVar1 * 0x10;
      }
      *(int *)(param_1 + 0x10) = iVar2;
      if (iVar3 < iVar2) {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
      iVar4 = iVar4 + 1;
      if (iVar3 <= iVar4) break;
      iVar1 = *(int *)(param_1 + 0x10);
    }
  }
  return 0;
}

