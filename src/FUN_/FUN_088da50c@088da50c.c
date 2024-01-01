#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x088da550)

void FUN_088da50c(int param_1)

{
  char cVar1;
  
  if ((-1 < *(int *)(param_1 + 0x16c)) && (*(int *)(param_1 + 0x16c) == 0)) {
    (*(code *)&LAB_088da604)(param_1);
  }
  if (*(char *)(param_1 + 0x261) == '\0') {
    cVar1 = *(char *)(param_1 + 0x164);
  }
  else {
    FUN_088d935c(param_1);
    cVar1 = *(char *)(param_1 + 0x164);
  }
  if (cVar1 == '\0') {
    FUN_088da2c8(param_1);
  }
  return;
}

