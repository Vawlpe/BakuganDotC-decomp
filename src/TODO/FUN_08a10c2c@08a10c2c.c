#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a10c2c(float param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = (int)*(char *)(param_2 + 0x19);
  if (iVar1 < 0) {
    uVar2 = (uint)*(byte *)(param_2 + 0x18);
    iVar3 = (int)FLOOR(param_1);
  }
  else {
    uVar2 = (uint)*(byte *)(param_2 + 0x18);
    iVar3 = (int)FLOOR(param_1);
    if (iVar1 <= (int)uVar2) {
      iVar1 = *(int *)(param_2 + 0x14) + iVar1 * 0x30;
      goto joined_r0x08a10cb4;
    }
  }
  iVar1 = *(int *)(param_2 + 0x14) + uVar2 * 0x30;
joined_r0x08a10cb4:
  if (param_3 < 0x28) {
                    // WARNING: Could not recover jumptable at 0x08a10c88. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(&DAT_08aa5120 + param_3 * 4))
              (*(code **)(&DAT_08aa5120 + param_3 * 4),iVar3,param_2,iVar1,
               *(undefined4 *)(param_2 + 0xc));
    return;
  }
  return;
}

