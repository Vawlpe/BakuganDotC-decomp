#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0899b9ec(int param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x10) != 0) {
    iVar2 = 0;
    uVar1 = (uint)*(char *)(param_1 + 0x109c);
    do {
      cVar3 = '\a';
      if (uVar1 != 0) {
        cVar3 = (char)((uVar1 - 1) * 0x1000000 >> 0x18);
      }
      uVar1 = (uint)cVar3;
      iVar2 = iVar2 + 1;
    } while ((((uint)*(byte *)(param_1 + 0x10b8) & 1 << (uVar1 & 0x1f)) == 0) && (iVar2 < 8));
    *(char *)(param_1 + 0x109c) = cVar3;
    return 1;
  }
  if ((*(byte *)(*(int *)(param_1 + 0x20) + 8) & 0x40) != 0) {
    iVar2 = 0;
    uVar1 = (uint)*(char *)(param_1 + 0x109c);
    do {
      cVar3 = '\0';
      if (uVar1 != 7) {
        cVar3 = (char)((uVar1 + 1) * 0x1000000 >> 0x18);
      }
      uVar1 = (uint)cVar3;
      iVar2 = iVar2 + 1;
    } while ((((uint)*(byte *)(param_1 + 0x10b8) & 1 << (uVar1 & 0x1f)) == 0) && (iVar2 < 8));
    *(char *)(param_1 + 0x109c) = cVar3;
    return 1;
  }
  return 0;
}

