#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089db62c(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = *(int *)(param_1 + 0x1c);
  uVar4 = *(uint *)(param_1 + 0x40);
  uVar1 = *(uint *)(iVar2 + 0x28);
  *(uint *)(param_1 + 0x40) = uVar1;
  uVar3 = *(uint *)(param_2 + 0x34) & *(uint *)(iVar2 + 0x2c);
  if (((uVar3 & 0xffff) != 0) && ((uVar3 & 0xffff0000) != 0)) {
    uVar3 = *(uint *)(iVar2 + 0x20);
    if ((uVar3 + 1 & 0xffff0000) == 0) {
      if ((uVar3 & 0xffff) < (uint)*(ushort *)(param_2 + 0x1c)) {
        uVar3 = *(int *)(param_2 + 0xc) + uVar3 * 0x10;
      }
      else {
        uVar3 = 0;
      }
    }
    *(uint *)(param_1 + 0x20) = uVar3;
    if (uVar3 != 0) {
      FUN_089dbed8(param_1,param_2,param_3 | uVar4 | uVar1);
      return;
    }
  }
  return;
}

