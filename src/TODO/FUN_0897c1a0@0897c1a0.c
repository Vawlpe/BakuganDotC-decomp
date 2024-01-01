#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897c1a0(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined uVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 0xee5) < '\0') {
    cVar2 = *(char *)(param_1 + 0xee3);
  }
  else {
    if (*(char *)(param_1 + 0xee5) < '\x02') {
      iVar5 = 0;
      iVar1 = *(char *)(param_1 + 0xee1) * 6;
      if (iVar1 < 1) {
        return;
      }
      iVar3 = 0;
      do {
        iVar3 = *(char *)(param_1 + 0xee0) + iVar3;
        iVar5 = iVar5 + 1;
        if (iVar3 + iVar1 < (int)(uint)*(byte *)(param_1 + 0xeec)) {
          *(char *)(param_1 + 0xee0) = (char)iVar3;
          return;
        }
        iVar3 = -iVar5;
      } while (iVar5 < iVar1);
      return;
    }
    cVar2 = *(char *)(param_1 + 0xee3);
  }
  uVar4 = 0;
  if (cVar2 != '\x01') {
    uVar4 = 2;
    iVar1 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1));
    if (iVar1 != 0) {
      uVar4 = 0;
    }
  }
  *(undefined *)(param_1 + 0xee0) = uVar4;
  return;
}

