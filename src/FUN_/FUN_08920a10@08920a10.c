#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08920a10(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      if (*(char *)(param_1 + 0x77) < 2) {
        FUN_089a4f4c(0x40800000,
                     *(undefined4 *)
                      (*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x77) * 4 + 0x2d0),0,0);
        FUN_089a4f4c(0x40800000,
                     *(undefined4 *)
                      (*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x77) * 4 + 0x2dc),0,1);
      }
      else {
        FUN_089a4f4c(0x40800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x200),0,0);
      }
    }
  }
  else if (cVar1 < '\x02') {
    if (*(char *)(param_1 + 0x75) == '\0') {
      FUN_089a4f4c(0x40800000,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x78) * 4 + 0x19c)
                   ,0,0);
    }
    else {
      FUN_089a4f4c(0x40800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x200),0,0);
    }
  }
  else if (cVar1 < '\x03') {
    FUN_089a4f4c(0x40800000,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x79) * 4 + 0x218),0
                 ,0);
    FUN_089a4f4c(0x40800000,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x79) * 4 + 0x234),0
                 ,1);
  }
  return;
}

