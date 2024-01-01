#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08921e84(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  memset_jak((undefined *)(param_1 + 0x227c),0,8);
  *(char *)(param_1 + 0x227c) = param_2;
  iVar2 = 0x51;
  iVar1 = 0x144;
  do {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar1);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar1) + 0xbc) = 0x3f800000;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 0x55);
  if (param_2 != '\0') {
    *(undefined *)(param_1 + 0x227e) = *(undefined *)(param_1 + 0x76);
  }
  return;
}

