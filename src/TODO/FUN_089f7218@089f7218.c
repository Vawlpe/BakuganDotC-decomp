#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f7218(int param_1,int param_2,int param_3)

{
  undefined auStack_70 [96];
  
  if (*(char *)(param_1 + 0xad) == '\0') {
    memcpy_jak(auStack_70,*(int *)(param_1 + 0xb0) + param_2 * 0x60,0x60);
    memcpy_jak(*(int *)(param_1 + 0xb0) + param_2 * 0x60,*(int *)(param_1 + 0xb0) + param_3 * 0x60,
               0x60);
    memcpy_jak(*(int *)(param_1 + 0xb0) + param_3 * 0x60,auStack_70,0x60);
  }
  return;
}

