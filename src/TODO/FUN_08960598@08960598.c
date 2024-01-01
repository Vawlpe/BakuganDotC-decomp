#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08960598(int param_1,uint param_2)

{
  int iVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_1 + 0x5025);
  iVar1 = FUN_0880d354();
  if (iVar1 != 0) {
    cVar2 = *(char *)(param_1 + *(int *)(param_1 + 0x52a0) + 0x5026);
  }
  if (cVar2 == '\x01') {
    FUN_089a52a0(*(undefined4 *)
                  (*(int *)(param_1 + 0x1c) +
                  ((uint)*(ushort *)(param_1 + 0x519e) + (param_2 & 0xff)) * 4));
  }
  return;
}

