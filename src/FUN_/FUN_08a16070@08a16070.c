#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a16070(int param_1,ushort param_2,ushort param_3)

{
  ushort uVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(short *)(param_1 + 0xc) != 0)) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 != 0) {
      uVar1 = ~param_2 & *(ushort *)(iVar2 + 0x14) | param_2 & param_3;
      *(ushort *)(iVar2 + 0x14) = uVar1;
      if (uVar1 != 0) {
        *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) | 0xffff;
        return;
      }
      *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) & 0xffff0000;
    }
  }
  return;
}

