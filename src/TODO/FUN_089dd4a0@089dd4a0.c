#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dd4a0(uint **param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *local_10;
  
  if ((*(uint *)(param_2 + 0x28) & 2) != 0) {
    local_10 = *param_1;
    puVar3 = param_1[0xd];
    puVar2 = &DAT_08aa2f9c;
    if ((~(uint)puVar3 & 0xff0ffff) == 0) {
      *param_1 = local_10 + 2;
      if (local_10 + 2 <= param_1[2]) {
        *local_10 = 0x10080000;
        local_10[1] = 0xaaa2f9c;
        return;
      }
    }
    else {
      *param_1 = local_10 + 0x1f;
      if (local_10 + 0x1f <= param_1[2]) {
        uVar6 = (int)puVar3 >> 4 & 0xffff0000U | (uint)puVar3 & 0xffff;
        uVar1 = 0;
        iVar4 = 0;
        uVar5 = 0x4643fbff;
        do {
          if ((uVar5 & 1) == 0) {
            uVar7 = *puVar2;
          }
          else {
            uVar1 = 0xffffffff;
            if ((uVar6 & 1) == 0) {
              uVar1 = 0;
            }
            uVar6 = (int)uVar6 >> 1;
            uVar7 = *puVar2;
          }
          *local_10 = uVar7 & uVar1;
          iVar4 = iVar4 + 1;
          puVar2 = puVar2 + 1;
          uVar5 = uVar5 >> 1;
          local_10 = local_10 + 1;
        } while (iVar4 < 0x1f);
      }
    }
  }
  return;
}

