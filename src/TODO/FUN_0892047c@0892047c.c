#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892047c(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x74);
  iVar2 = *(int *)(param_1 + 0x1c);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      *(uint *)(*(int *)(iVar2 + 0x2d8) + 0xd0) =
           *(uint *)(*(int *)(iVar2 + 0x2d8) + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20c);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2f0);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      return;
    }
    iVar2 = *(int *)(iVar2 + 0x2f0);
  }
  else {
    if (cVar1 < '\x02') {
      *(uint *)(*(int *)(iVar2 + 0x1ac) + 0xd0) =
           *(uint *)(*(int *)(iVar2 + 0x1ac) + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x20c);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2f0);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      return;
    }
    if (cVar1 < '\x03') {
      *(uint *)(*(int *)(iVar2 + 0x230) + 0xd0) =
           *(uint *)(*(int *)(iVar2 + 0x230) + 0xd0) & 0xfffffffe;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x2f0);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0x2f0);
    }
  }
  *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
  return;
}

