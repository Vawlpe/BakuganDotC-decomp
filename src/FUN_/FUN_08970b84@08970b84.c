#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08970b84(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1 + 0xa0;
  iVar6 = 0x28;
  iVar5 = 0xa0;
  do {
    FUN_08970768(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0xbc) = 0x3f800000;
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar5);
    bVar1 = *(byte *)(param_1 + 0xbb9);
    *(undefined4 *)(iVar4 + 0xa9c) = *(undefined4 *)(*piVar2 + 100);
    if (((uint)bVar1 & 1 << (iVar6 - 0x28U & 0x1f)) == 0) {
      iVar3 = *piVar2;
      *(undefined4 *)(iVar3 + 0xb0) = 0x3f000000;
      *(undefined4 *)(iVar3 + 0xb4) = 0x3f000000;
      *(undefined4 *)(iVar3 + 0xb8) = 0x3f000000;
      *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
    }
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
    iVar4 = iVar4 + 4;
  } while (iVar6 < 0x2c);
  return;
}

