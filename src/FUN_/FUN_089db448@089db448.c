#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089db448(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (*(int *)(iVar2 + 0x24) != 0) {
    param_3 = param_3 | *(uint *)(param_1 + 0x38) | *(uint *)(iVar2 + 0x20) |
              *(uint *)(param_1 + 0x44);
    *(uint *)(param_1 + 0x38) = *(uint *)(iVar2 + 0x20);
    if ((param_3 & 0x100000) != 0) {
      FUN_089dc788(param_1);
      iVar2 = *(int *)(param_1 + 0x14);
    }
    *(undefined4 *)(param_1 + 0x48) = 0;
    puVar4 = *(uint **)(iVar2 + 8);
    uVar3 = (uint)*(ushort *)(iVar2 + 0x18);
    if (uVar3 != 0) {
      do {
        uVar1 = *puVar4;
        if ((uVar1 + 1 & 0xffff0000) == 0) {
          if ((uVar1 & 0xffff) < (uint)*(ushort *)(param_2 + 0x1a)) {
            iVar2 = *(int *)(param_2 + 8) + uVar1 * 0x10;
          }
          else {
            iVar2 = 0;
          }
          *(int *)(param_1 + 0x18) = iVar2;
        }
        else {
          *(uint *)(param_1 + 0x18) = uVar1;
        }
        param_3 = FUN_089db554(param_1,param_2,param_3);
        uVar3 = uVar3 - 1;
        puVar4 = puVar4 + 1;
      } while (0 < (int)uVar3);
    }
  }
  return param_3;
}

