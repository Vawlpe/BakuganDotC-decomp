#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a15e88)

float FUN_08a15e18(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0.0;
  }
  if (*(ushort *)(param_1 + 0xc) != 0) {
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = 0;
    do {
      uVar2 = uVar2 + 1;
      if (*(short *)(iVar1 + 8) == 0x86) {
        if (iVar1 != 0) {
          uVar2 = (uint)*(byte *)(iVar1 + 0x3b);
          goto LAB_08a15e54;
        }
        break;
      }
      iVar1 = iVar1 + 0x40;
    } while (*(ushort *)(param_1 + 0xc) != uVar2);
  }
  uVar2 = 0;
LAB_08a15e54:
  return (float)uVar2 * 0.003921569;
}

