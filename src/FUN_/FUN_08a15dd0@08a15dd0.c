#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a15dd0(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0;
    if (*(ushort *)(param_1 + 0xc) != 0) {
      iVar1 = *(int *)(param_1 + 8);
      do {
        uVar2 = uVar2 + 1;
        if (*(short *)(iVar1 + 8) == 0x84) {
          if (iVar1 == 0) {
            return 0;
          }
          return *(undefined4 *)(iVar1 + 0x38);
        }
        iVar1 = iVar1 + 0x40;
      } while (*(ushort *)(param_1 + 0xc) != uVar2);
    }
  }
  return 0;
}

