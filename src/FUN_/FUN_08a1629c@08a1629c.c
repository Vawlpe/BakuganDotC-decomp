#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a1629c(int param_1,uint param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  if (param_1 != 0) {
    if ((param_2 + 1 & 0xffff0000) == 0) {
      if ((uint)*(ushort *)(param_1 + 0xc) <= (param_2 & 0xffff)) {
        return;
      }
      param_2 = *(int *)(param_1 + 8) + param_2 * 0x40;
    }
    if (param_2 != 0) {
      if (param_3 == (undefined4 *)0x0) {
        thunk_FUN_08a13244(0,*(undefined4 *)(param_2 + 0x28));
        *(undefined4 *)(param_2 + 0x28) = 0;
        *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xff7fffff;
      }
      else {
        puVar4 = *(undefined4 **)(param_2 + 0x28);
        if (puVar4 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)FUN_08a135b4(0,0x10,0x10);
          *(undefined4 **)(param_2 + 0x28) = puVar4;
          if (puVar4 == (undefined4 *)0x0) {
            return;
          }
          *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x800000;
        }
        uVar1 = *param_3;
        uVar2 = param_3[1];
        uVar3 = param_3[2];
        puVar4[3] = param_3[3];
        *puVar4 = uVar1;
        puVar4[1] = uVar2;
        puVar4[2] = uVar3;
      }
    }
  }
  return;
}

