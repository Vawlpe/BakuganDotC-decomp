#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b306c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_30 [6];
  
  iVar3 = 0;
  if (DAT_08abd5bc != (int *)0x0) {
    iVar3 = *DAT_08abd5bc;
  }
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x14);
    while( true ) {
      iVar1 = (**(code **)(iVar1 + 100))(iVar3 + *(short *)(iVar1 + 0x60));
      if (iVar1 == 0) {
        iVar3 = *(int *)(iVar3 + 4);
      }
      else {
        if ((*(char *)(iVar3 + 0x281) == '\0') && (iVar4 < 6)) {
          piVar2 = local_30 + iVar4;
          iVar4 = iVar4 + 1;
          *piVar2 = iVar3;
        }
        iVar3 = *(int *)(iVar3 + 4);
      }
      if (iVar3 == 0) break;
      iVar1 = *(int *)(iVar3 + 0x14);
    }
  }
  if (param_1 < iVar4) {
    return local_30[param_1];
  }
  return 0;
}

