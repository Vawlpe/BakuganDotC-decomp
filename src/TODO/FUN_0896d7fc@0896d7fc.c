#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896d7fc(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  byte abStack_42 [18];
  byte local_30 [4];
  
  pbVar6 = abStack_42 + 2;
  pbVar5 = abStack_42 + 2;
  memset_jak(abStack_42 + 2,0,0x10);
  iVar8 = 0;
  do {
    FUN_089a4b5c(pbVar5,*(undefined *)(param_1 + iVar8 + 0x2a4c),3,0xff);
    local_30[iVar8] = 0;
    uVar1 = (uint)local_30[iVar8];
    if (pbVar6[uVar1] != -1) {
      do {
        uVar2 = uVar1 + 1;
        uVar1 = uVar2 & 0xff;
      } while (pbVar6[uVar1] != -1);
      local_30[iVar8] = (byte)uVar2;
    }
    iVar8 = iVar8 + 1;
    pbVar5 = pbVar5 + 4;
    pbVar6 = pbVar6 + 4;
  } while (iVar8 < 4);
  uVar1 = (uint)*(byte *)(param_1 + 0x2b86);
  iVar8 = uVar1 + (int)*(char *)(param_1 + 0x2b87);
  if ((int)uVar1 < iVar8) {
    iVar7 = uVar1 << 2;
    uVar2 = uVar1;
    do {
      uVar3 = uVar2 - uVar1;
      if ((int)uVar3 < (int)*(char *)(param_1 + 0x29bd) << 2) {
        if ((int)uVar3 < 0) {
          uVar4 = -(-uVar3 & 3);
        }
        else {
          uVar4 = uVar3 & 3;
        }
        if (uVar4 == 3) {
          FUN_0896a294(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
          *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0xbc) = 0x3f800000;
          uVar1 = (uint)*(byte *)(param_1 + 0x2b86);
          iVar8 = uVar1 + (int)*(char *)(param_1 + 0x2b87);
        }
        else {
          if ((int)uVar3 < 0) {
            uVar4 = -(-uVar3 & 3);
          }
          else {
            uVar4 = uVar3 & 3;
          }
          if ((int)uVar4 < 1) {
            if (-1 < (int)uVar4) {
              iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
              if (local_30[(int)(uVar3 + ((uint)((int)uVar3 >> 2) >> 0x1e)) >> 2] < 3) {
                *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) & 0xfffffffe;
                uVar1 = (uint)*(byte *)(param_1 + 0x2b86);
                iVar8 = uVar1 + (int)*(char *)(param_1 + 0x2b87);
              }
              else {
                FUN_0896a294(param_1,iVar8);
                *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0xbc) = 0x3f800000;
                iVar8 = uVar2 - *(byte *)(param_1 + 0x2b86);
                FUN_089f4a90((float)(abStack_42
                                     [((int)(iVar8 + ((uint)(iVar8 >> 2) >> 0x1e)) >> 2) * 4 + 2] /
                                    5),
                             (float)((uint)abStack_42
                                           [((int)(iVar8 + ((uint)(iVar8 >> 2) >> 0x1e)) >> 2) * 4 +
                                            2] % 5),
                             *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
                uVar1 = (uint)*(byte *)(param_1 + 0x2b86);
                iVar8 = uVar1 + (int)*(char *)(param_1 + 0x2b87);
              }
            }
          }
          else if ((int)uVar4 < 2) {
            iVar8 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7);
            if (local_30[(int)(uVar3 + ((uint)((int)uVar3 >> 2) >> 0x1e)) >> 2] < 2) {
              *(uint *)(iVar8 + 0xd0) = *(uint *)(iVar8 + 0xd0) & 0xfffffffe;
              uVar1 = (uint)*(byte *)(param_1 + 0x2b86);
              iVar8 = uVar1 + (int)*(char *)(param_1 + 0x2b87);
            }
            else {
              FUN_0896a294(param_1,iVar8);
              *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0xbc) = 0x3f800000;
              iVar8 = uVar2 - *(byte *)(param_1 + 0x2b86);
              iVar8 = (int)(iVar8 + ((uint)(iVar8 >> 2) >> 0x1e)) >> 2;
              FUN_089f4a90((float)(abStack_42[(uint)local_30[iVar8] + iVar8 * 4] / 5),
                           (float)((uint)abStack_42[(uint)local_30[iVar8] + iVar8 * 4] % 5),
                           *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
              uVar1 = (uint)*(byte *)(param_1 + 0x2b86);
              iVar8 = uVar1 + (int)*(char *)(param_1 + 0x2b87);
            }
          }
          else if ((int)uVar4 < 3) {
            FUN_0896a294(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
            *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7) + 0xbc) = 0x3f800000;
            iVar8 = uVar2 - *(byte *)(param_1 + 0x2b86);
            iVar8 = (int)(iVar8 + ((uint)(iVar8 >> 2) >> 0x1e)) >> 2;
            FUN_089f4a90((float)(abStack_42[(uint)local_30[iVar8] + iVar8 * 4 + 1] / 5),
                         (float)((uint)abStack_42[(uint)local_30[iVar8] + iVar8 * 4 + 1] % 5),
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7));
            uVar1 = (uint)*(byte *)(param_1 + 0x2b86);
            iVar8 = uVar1 + (int)*(char *)(param_1 + 0x2b87);
          }
        }
      }
      uVar2 = uVar2 + 1;
      iVar7 = iVar7 + 4;
    } while ((int)uVar2 < iVar8);
  }
  return;
}

