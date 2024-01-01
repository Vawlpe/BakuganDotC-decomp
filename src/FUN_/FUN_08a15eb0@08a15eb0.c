#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a15eb0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 != 0) {
    uVar5 = (uint)*(ushort *)(param_1 + 0xc);
    uVar4 = 0;
    if (uVar5 != 0) {
      iVar2 = *(int *)(param_1 + 8);
      iVar3 = iVar2;
      do {
        uVar4 = uVar4 + 1;
        if (*(short *)(iVar3 + 8) == 0x83) goto LAB_08a15f14;
        iVar3 = iVar3 + 0x40;
      } while (uVar5 != uVar4);
      uVar4 = 0;
      sVar1 = *(short *)(iVar2 + 8);
      iVar3 = iVar2;
      while( true ) {
        uVar4 = uVar4 + 1;
        if (sVar1 == 0x82) break;
        if (uVar5 == uVar4) {
          return 0;
        }
        sVar1 = *(short *)(iVar3 + 0x48);
        iVar3 = iVar3 + 0x40;
      }
LAB_08a15f14:
      if (iVar3 != 0) {
        return *(undefined4 *)(iVar3 + 0x30);
      }
    }
  }
  return 0;
}

