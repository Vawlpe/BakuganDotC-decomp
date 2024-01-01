#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cdec4(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    piVar1 = (int *)FUN_0880cc48();
    if (*(char *)(*piVar1 + 0x453) != '\0') {
      piVar1 = (int *)FUN_0880cc48();
      if ((*(char *)(*piVar1 + 0x454) == '\0') &&
         (piVar1 = (int *)FUN_0880cc48(), *(char *)(*piVar1 + 0x462) == '\0')) {
        *(undefined4 *)(param_1 + 0x30) = 0;
      }
    }
  }
  return;
}

