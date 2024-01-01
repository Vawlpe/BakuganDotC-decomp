#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896ca08(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(param_1 + 0x77);
  if (iVar1 < 1) {
    if (-1 < iVar1) {
      FUN_089a4f4c(0x40000000,
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x1c) +
                    ((uint)*(byte *)(param_1 + 0x2b74) + (int)*(char *)(param_1 + iVar1 + 0x74)) * 4
                    ),0,0);
      return;
    }
  }
  else {
    if (iVar1 < 2) {
      FUN_089a4f4c(0x40000000,
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x1c) +
                    ((uint)*(byte *)(param_1 + 0x2b7c) + *(char *)(param_1 + 0x29be) * 4 +
                    (int)*(char *)(param_1 + iVar1 + 0x74)) * 4),0,0);
      return;
    }
    if (iVar1 < 3) {
      FUN_089a4ff4(0x40000000,
                   *(undefined4 *)
                    (*(int *)(param_1 + 0x1c) +
                     ((uint)*(byte *)(param_1 + 0x2b88) + *(char *)(param_1 + 0x29be) * 6) * 4 +
                     (uint)*(byte *)(param_1 + 0x2a50) * 0xc + 8),1,0,0,1,1);
    }
  }
  return;
}

