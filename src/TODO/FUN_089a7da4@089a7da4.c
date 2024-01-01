#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a7da4(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0xf;
  if (param_2 == '\x01') {
    iVar3 = 0xf;
    iVar2 = 0x3c;
    do {
      iVar3 = iVar3 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0x13);
  }
  else {
    iVar3 = 0x3c;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      iVar3 = iVar3 + 4;
    } while (iVar2 < 0x13);
  }
  return;
}

