#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a15bb0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  if (param_1 != 0) {
    if (param_2 == (undefined4 *)0x0) {
      thunk_FUN_08a13244(0,*(undefined4 *)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 0x30) = 0;
      *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) & 0xffef;
    }
    else {
      puVar1 = *(undefined4 **)(param_1 + 0x30);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)FUN_08a135b4(0,0x40,0x40);
        *(undefined4 **)(param_1 + 0x30) = puVar1;
        if (puVar1 == (undefined4 *)0x0) {
          return;
        }
        *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) | 0x10;
      }
      puVar5 = param_2 + 0x10;
      do {
        uVar2 = param_2[1];
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        *puVar1 = *param_2;
        param_2 = param_2 + 4;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = uVar4;
        puVar1 = puVar1 + 4;
      } while (param_2 != puVar5);
    }
  }
  return;
}

