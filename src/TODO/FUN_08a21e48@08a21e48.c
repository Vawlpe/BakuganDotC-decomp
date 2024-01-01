#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a21e48(uint param_1,undefined param_2,byte param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined local_30;
  undefined local_2f;
  undefined local_2e;
  undefined local_2d;
  undefined4 local_2c;
  
  uVar6 = (uint)param_3;
  param_1 = param_1 & 0xf;
  if (uVar6 == 0) {
    FUN_08a20168(param_1,param_2,*(undefined4 *)(param_1 * 0x10 + param_4 + 0x40));
  }
  else if ((*(uint *)(param_4 + 0x24) >> param_1 & 1) != 0) {
    iVar5 = param_1 * 0x10 + param_4;
    iVar7 = (uint)*(byte *)(param_4 + 4) + (uint)*(byte *)(iVar5 + 0x3b) + -0x40;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    iVar2 = (uint)*(byte *)(param_4 + 6) + (uint)*(byte *)(iVar5 + 0x3b) + -0x40;
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if (0x7f < iVar2) {
      iVar2 = 0x7f;
    }
    local_2d = (undefined)iVar2;
    if (0x7f < iVar7) {
      iVar7 = 0x7f;
    }
    local_2f = (undefined)iVar7;
    local_2c = 0;
    local_30 = (undefined)
               (((((((uint)*(byte *)(param_4 + 3) * (uint)*(byte *)(iVar5 + 0x39)) / 0x7f) *
                  (uint)*(byte *)(iVar5 + 0x3a)) / 0x7f) * uVar6) / 0x7f);
    local_2e = (undefined)
               (((((((uint)*(byte *)(param_4 + 5) * (uint)*(byte *)(iVar5 + 0x39)) / 0x7f) *
                  (uint)*(byte *)(iVar5 + 0x3a)) / 0x7f) * uVar6) / 0x7f);
    uVar6 = FUN_08a1ffbc((int)*(char *)(param_4 + 8),param_1,*(undefined *)(iVar5 + 0x38),param_2,
                         *(undefined *)(iVar5 + 0x3c),&local_30,*(undefined4 *)(iVar5 + 0x40));
    if (uVar6 != 0) {
      uVar4 = 0;
      uVar3 = uVar6;
      do {
        if ((uVar3 & 1) != 0) {
          (&DAT_08afdec4)[uVar4] = param_3;
          if (*(int *)(iVar5 + 0x44) != 0x2000) {
            uVar1 = FUN_08a1fa88(uVar4,*(int *)(iVar5 + 0x44));
            FUN_08a209ec(uVar4,uVar1);
          }
        }
        uVar4 = uVar4 + 1;
        uVar3 = uVar6 >> (uVar4 & 0x1f);
      } while (uVar4 < 0x20);
    }
  }
  return 0;
}

