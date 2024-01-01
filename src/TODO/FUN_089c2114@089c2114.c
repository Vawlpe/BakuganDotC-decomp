#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c2114(int param_1,int param_2,uint param_3,undefined param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  uVar1 = _DONE_Get_DAT_08AC5874();
  uVar2 = FUN_089c61b8(uVar1,param_2,1);
  if (-1 < (int)uVar2) {
    iVar3 = 0;
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x2c)) {
      do {
        puVar5 = *(uint **)(*(int *)(param_1 + 0x28) + iVar4);
        if (puVar5 == (uint *)0x0) {
          iVar6 = *(int *)(param_1 + 0x2c);
        }
        else if (*puVar5 >> 0x1b == uVar2) {
          puVar5[0xd] = 0;
          *(undefined *)(*(int *)(*(int *)(param_1 + 0x28) + iVar4) + 0x32) = 1;
          *(undefined *)(*(int *)(*(int *)(param_1 + 0x28) + iVar4) + 0x31) = 1;
          *(undefined4 *)(*(int *)(param_1 + 0x28) + iVar4) = 0;
          iVar6 = *(int *)(param_1 + 0x2c);
        }
        else {
          iVar6 = *(int *)(param_1 + 0x2c);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < iVar6);
    }
    uVar7 = FUN_089c1f8c(param_1,uVar2 << 0x1b | param_3 | param_2 << 0x14,param_4,0);
  }
  return uVar7;
}

