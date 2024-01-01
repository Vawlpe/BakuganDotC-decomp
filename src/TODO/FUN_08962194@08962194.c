#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08962194(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*(ushort *)(param_1 + 0x51ea);
  if (uVar6 < uVar6 + *(ushort *)(param_1 + 0x51ec)) {
    iVar5 = uVar6 << 2;
    iVar4 = param_1 + uVar6 * 0x28 + 0x78;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,3);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51ea);
      if (param_2 == '\0') {
        iVar1 = uVar6 - uVar3;
        if (iVar1 < 1) {
          if (-1 < iVar1) {
            FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),2);
            uVar3 = (uint)*(ushort *)(param_1 + 0x51ea);
            goto LAB_08962280;
          }
          uVar2 = (uint)*(ushort *)(param_1 + 0x51ec);
        }
        else {
          if (iVar1 < 2) {
            FUN_089a56a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),1);
            uVar3 = (uint)*(ushort *)(param_1 + 0x51ea);
            goto LAB_08962280;
          }
          uVar2 = (uint)*(ushort *)(param_1 + 0x51ec);
        }
      }
      else {
LAB_08962280:
        uVar2 = (uint)*(ushort *)(param_1 + 0x51ec);
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while ((int)uVar6 < (int)(uVar3 + uVar2));
  }
  uVar6 = (uint)*(ushort *)(param_1 + 0x51ee);
  if (uVar6 < uVar6 + *(ushort *)(param_1 + 0x51f0)) {
    iVar5 = uVar6 << 2;
    iVar4 = param_1 + uVar6 * 0x28 + 0x78;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_089a5408(0x3f800000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5),iVar4,3);
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while ((int)uVar6 <
             (int)((uint)*(ushort *)(param_1 + 0x51ee) + (uint)*(ushort *)(param_1 + 0x51f0)));
  }
  return;
}

