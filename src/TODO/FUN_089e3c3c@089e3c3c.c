#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e3c3c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float local_40 [2];
  undefined4 *local_38;
  undefined4 local_34;
  
  iVar1 = FUN_089e9d88(param_2,param_3);
  if (iVar1 != 0) {
    local_40[0] = INFINITY;
    if (*(int *)(param_2 + 0x20) == 0) {
      FUN_089e3c3c(param_1,*(undefined4 *)(param_2 + 0x28),param_3);
      FUN_089e3c3c(param_1,*(undefined4 *)(param_2 + 0x2c),param_3);
    }
    else {
      iVar1 = 0;
      if (0 < *(int *)(param_2 + 0x20)) {
        local_38 = &DAT_08af8390;
        iVar5 = 0;
        local_34 = param_3;
        do {
          iVar4 = *(int *)(param_1 + 0x14) +
                  (uint)*(ushort *)(*(int *)(param_2 + 0x24) + iVar5) * 10;
          uVar3 = (uint)*(char *)(DAT_08af83b0 + ((int)*(char *)(iVar4 + 8) & 0xfU));
          if ((uVar3 == 0xffffffff) || ((1 << (uVar3 & 0x1f) & DAT_08af8380) != 0)) {
            iVar2 = FUN_089e3a50(param_1,iVar4,local_34,local_40);
            if (iVar2 == 0) {
              iVar2 = *(int *)(param_2 + 0x20);
            }
            else if (local_40[0] < DAT_08b002a4) {
              DAT_08b002a4 = local_40[0];
              DAT_08b00280 = *local_38;
              DAT_08b00284 = local_38[1];
              DAT_08b00288 = local_38[2];
              DAT_08b0028c = local_38[3];
              DAT_08b002a8 = DAT_08af8384;
              DAT_08ac5c98 = 1;
              iVar2 = *(int *)(param_2 + 0x20);
              DAT_08b002ac = param_1;
              DAT_08b002b0 = iVar4;
              DAT_08b002b4 = uVar3;
            }
            else {
              iVar2 = *(int *)(param_2 + 0x20);
            }
          }
          else {
            iVar2 = *(int *)(param_2 + 0x20);
          }
          iVar1 = iVar1 + 1;
          iVar5 = iVar5 + 2;
        } while (iVar1 < iVar2);
      }
    }
  }
  return;
}

