#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ab74c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1;
  do {
    iVar2 = iVar2 + 1;
    *(undefined *)(iVar3 + 3000) = *(undefined *)(iVar3 + 0xbb0);
    iVar3 = param_1 + iVar2;
  } while (iVar2 < 3);
  piVar1 = (int *)DONE_Get_DAT_08AAC9E0();
  *(undefined *)(param_1 + 0xbbb) = *(undefined *)(*piVar1 + 0x6ab);
  return;
}

