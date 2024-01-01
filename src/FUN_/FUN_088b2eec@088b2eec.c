#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088b2eec(float param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (DAT_08abd5bc != (int *)0x0) {
    iVar2 = *DAT_08abd5bc;
  }
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar2 + 0x14);
  while( true ) {
    iVar1 = (**(code **)(iVar1 + 0x6c))(iVar2 + *(short *)(iVar1 + 0x68));
    if (iVar1 == 0) {
      iVar2 = *(int *)(iVar2 + 4);
    }
    else if (*(char *)(iVar2 + 0x281) == '\0') {
      if ((float)*(int *)(iVar2 + 0x200) / (float)*(int *)(iVar2 + 0x204) < param_1) {
        return 1;
      }
      iVar2 = *(int *)(iVar2 + 4);
    }
    else {
      iVar2 = *(int *)(iVar2 + 4);
    }
    if (iVar2 == 0) break;
    iVar1 = *(int *)(iVar2 + 0x14);
  }
  return 0;
}

