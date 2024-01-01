#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08993860(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined *)(param_1 + 0x88) = 0;
  *(undefined *)(param_1 + 0x89) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  iVar1 = *(int *)(param_1 + 0x104);
  iVar3 = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  iVar2 = param_1;
  if (0 < iVar1) {
    do {
      *(undefined4 *)(iVar2 + 0xb4) = 0xffffffff;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < iVar1);
  }
  memset_jak((undefined *)(param_1 + 0xdc),0,0x28);
  if (*(int *)(param_1 + 0x108) == 1) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x4c);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
  }
  return;
}

