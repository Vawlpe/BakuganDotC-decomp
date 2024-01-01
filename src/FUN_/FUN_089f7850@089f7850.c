#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f7850(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_08ac6168;
  if (DAT_08ac6168 != 0) {
    do {
      iVar2 = strcasecmp(param_1,iVar3 + 0x18);
      if (iVar2 == 0) {
        return iVar3;
      }
      piVar1 = (int *)(iVar3 + 4);
      iVar3 = *piVar1;
    } while (*piVar1 != 0);
  }
  return 0;
}

