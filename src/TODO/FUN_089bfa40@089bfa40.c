#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089bfa40(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  if ((DAT_08af8270 != 0) && (piVar1 = (int *)FUN_08a2dc90(), piVar1 != (int *)0x0)) {
    while (piVar2 = (int *)piVar1[3], piVar2 != (int *)0x0) {
      if (*piVar2 == param_1) {
        if (*(char *)(piVar1 + 2) == '\0') {
          return piVar2;
        }
        return (int *)0x0;
      }
      piVar1 = (int *)*piVar1;
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
    }
  }
  return piVar2;
}

