#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895e8b4(int param_1)

{
  if (*(char *)(param_1 + 0x75) == '\0') {
    FUN_089a4f4c(0x40000000,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x5162) + (int)*(char *)(param_1 + 0x74)) * 4),0,0);
    FUN_089a4f4c(0x40000000,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x5164) + (int)*(char *)(param_1 + 0x74)) * 4),0,1);
  }
  else {
    FUN_089a4f4c(0x40000000,
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5168) * 4)
                 ,0,0);
  }
  return;
}

