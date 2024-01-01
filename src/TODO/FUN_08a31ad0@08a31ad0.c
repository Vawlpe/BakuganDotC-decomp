#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char FUN_08a31ad0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char local_18;
  
  iVar2 = *param_1;
  local_18 = '\0';
  if (iVar2 != 0) {
    local_18 = '\0';
    do {
      iVar2 = FUN_08a321a0(iVar2);
      if (((iVar2 != 0) && (iVar1 = FUN_08a32180(iVar2), iVar1 == param_2)) &&
         (iVar1 = FUN_08a321b4(iVar2), iVar1 == 0)) {
        FUN_08a321a8(iVar2);
        local_18 = '\x01';
        break;
      }
    } while (iVar2 != 0);
  }
  if ((local_18 == '\0') && (iVar2 = param_1[1], iVar2 != 0)) {
    local_18 = '\0';
    do {
      iVar2 = FUN_08a321a0(iVar2);
      if (((iVar2 != 0) && (iVar1 = FUN_08a32180(iVar2), iVar1 == param_2)) &&
         (iVar1 = FUN_08a321b4(iVar2), iVar1 == 0)) {
        FUN_08a321a8(iVar2);
        return '\x01';
      }
    } while (iVar2 != 0);
  }
  return local_18;
}

