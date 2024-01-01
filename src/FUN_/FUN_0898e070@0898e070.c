#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898e070(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xe7d) == '\0') {
    iVar4 = 0;
    iVar1 = *(char *)(param_1 + 0xe79) * 6;
    if (0 < iVar1) {
      iVar3 = (int)*(char *)(param_1 + 0xe78);
      iVar2 = iVar3 + iVar1;
      do {
        iVar4 = iVar4 + 1;
        if (iVar2 < (int)(uint)*(byte *)(param_1 + 0xe84)) {
          *(char *)(param_1 + 0xe78) = (char)iVar3;
          return;
        }
        iVar3 = iVar3 + -1;
        iVar2 = iVar2 + -1;
      } while (iVar4 < iVar1);
    }
  }
  return;
}

