#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08920f6c(int param_1,undefined param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  memset_jak((undefined *)(param_1 + 0x21b8),0,0x24);
  iVar3 = 0;
  iVar1 = 0;
  iVar2 = param_1;
  do {
    if (*(char *)(param_1 + iVar3 + 0x2134) != -1) {
      iVar4 = *(int *)(param_1 + 0x1c);
      *(undefined *)(iVar2 + 0x21b8) = param_2;
      iVar4 = *(int *)(iVar4 + iVar1 + 0x27c);
      *(undefined4 *)(iVar4 + 0xc0) = 0;
      *(undefined4 *)(iVar4 + 0xc4) = 0;
      *(undefined4 *)(iVar4 + 200) = 0;
      *(undefined4 *)(iVar4 + 0xcc) = 0x3f800000;
    }
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0xc;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 3);
  return;
}

