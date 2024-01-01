#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08960be8(int param_1)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x5025);
  iVar1 = FUN_0880d354();
  if (iVar1 != 0) {
    cVar2 = *(char *)(param_1 + *(int *)(param_1 + 0x52a0) + 0x5026);
  }
  if (cVar2 == '\0') {
    FUN_089a4f4c(0x40000000,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x51aa) +
                   (uint)*(ushort *)(param_1 + 0x51ac) * (int)*(char *)(param_1 + 0x4cdb) +
                  (int)*(char *)(param_1 + 0x5024)) * 4),0,0);
    FUN_089a4f4c(0x40000000,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x51ce) +
                   (uint)*(ushort *)(param_1 + 0x51d0) * (int)*(char *)(param_1 + 0x4cdb) +
                  (int)*(char *)(param_1 + 0x5024)) * 4),0,1);
  }
  else {
    FUN_089a4f4c(0x40000000,
                 *(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x519e) +
                  (uint)*(ushort *)(param_1 + 0x51a0) * (int)*(char *)(param_1 + 0x4cdb)) * 4),0,0);
  }
  return;
}

