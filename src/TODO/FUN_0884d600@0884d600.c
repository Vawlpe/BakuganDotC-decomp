#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884d600(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (DAT_08aba778 < 1) {
    if (DAT_08aba778 < 0) {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x55f);
  }
  else {
    if (DAT_08aba778 != 3) {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x55f);
  }
  if (cVar1 == '\0') {
    *(undefined *)(param_1 + 0x55f) = 1;
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    iVar3 = FUN_0880d0ac(uVar2,0x1e);
    if (iVar3 < 0) {
      iVar3 = 0;
    }
    else if (4 < iVar3) {
      iVar3 = 4;
    }
    *(undefined4 *)(param_1 + iVar3 * 4 + 0x594) = param_2;
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880d70c(uVar2,0x1e,1);
  }
  return;
}

