#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e001c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_30;
  
  local_30 = 0;
  if (0 < *(int *)(param_1 + 0xe8)) {
    do {
      iVar1 = FUN_089ded10(param_1,local_30);
      iVar8 = 0;
      uVar9 = 0;
      uVar3 = (uint)*(ushort *)(iVar1 + 0x18);
      iVar7 = 0;
      if (uVar3 != 0) {
        iVar10 = 0;
        do {
          if ((1 << (uVar9 & 0x1f) & *(uint *)(iVar1 + 0x24)) != 0) {
            uVar4 = *(uint *)(*(int *)(iVar1 + 8) + iVar10);
            if ((uVar4 + 1 & 0xffff0000) == 0) {
              if ((uVar4 & 0xffff) < (uint)*(ushort *)(*(int *)(param_1 + 0x130) + 0x1a)) {
                uVar4 = *(int *)(*(int *)(param_1 + 0x130) + 8) + uVar4 * 0x10;
              }
              else {
                uVar4 = 0;
              }
            }
            iVar6 = 0;
            if ((uVar4 != 0) && (iVar5 = 0, *(short *)(uVar4 + 8) != 0)) {
              do {
                iVar2 = FUN_08a15998(*(undefined4 *)(param_1 + 0x130),
                                     *(undefined4 *)(*(int *)(uVar4 + 4) + iVar5 + 0x20));
                iVar8 = iVar8 + *(char *)(*(int *)(iVar2 + 4) + 2);
                iVar7 = iVar7 + 1;
                iVar6 = iVar6 + 1;
                iVar5 = iVar5 + 0x30;
              } while (iVar6 < (int)(uint)*(ushort *)(uVar4 + 8));
              uVar3 = (uint)*(ushort *)(iVar1 + 0x18);
            }
          }
          uVar9 = uVar9 + 1;
          iVar10 = iVar10 + 4;
        } while ((int)uVar9 < (int)uVar3);
      }
      if (iVar7 < 1) {
        *(undefined2 *)(iVar1 + 0x1e) = 0x18;
        iVar1 = *(int *)(param_1 + 0xe8);
      }
      else {
        *(short *)(iVar1 + 0x1e) = (short)(iVar8 / iVar7);
        iVar1 = *(int *)(param_1 + 0xe8);
      }
      local_30 = local_30 + 1;
    } while (local_30 < iVar1);
  }
  return;
}

