#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f77dc(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_08ac6168 != 0) {
    iVar1 = DAT_08ac6168 + 0x18;
    iVar2 = DAT_08ac6168;
    do {
      iVar1 = strcasecmp(param_1,iVar1);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = *(int *)(iVar2 + 4);
      iVar1 = iVar2 + 0x18;
    } while (iVar2 != 0);
  }
  iVar2 = FUN_089f6ca4();
  return iVar2;
}

