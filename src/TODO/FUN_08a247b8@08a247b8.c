#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a247b8(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  
  if ((param_3 & 0xfffd) == 0) {
    if (((param_3 & 2) == 0) || (iVar2 = 0, param_2 < 1)) {
      return 0;
    }
    puVar3 = (ushort *)(param_1 + 0x42);
    if ((*(ushort *)(param_1 + 2) & 0x10) == 0) {
      do {
        iVar2 = iVar2 + 1;
        if (param_2 == iVar2) {
          return 0;
        }
        uVar1 = *puVar3;
        puVar3 = puVar3 + 0x20;
      } while (-1 < (int)((uint)uVar1 << 0x1b));
    }
  }
  return 1;
}

