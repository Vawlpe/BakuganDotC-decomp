#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089adf4c(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  bVar2 = true;
  do {
    iVar3 = param_1 + iVar4;
    if (bVar2) {
      if (*(char *)(iVar3 + 0xbb0) != *(char *)(iVar3 + 3000)) {
        return 1;
      }
    }
    else {
      piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
      if (*(char *)(*piVar1 + 0x6ab) != *(char *)(iVar3 + 3000)) {
        return 1;
      }
    }
    iVar4 = iVar4 + 1;
    bVar2 = iVar4 < 3;
  } while (iVar4 < 4);
  return 0;
}

