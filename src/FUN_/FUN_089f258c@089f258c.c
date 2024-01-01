#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f258c(void)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  float local_220 [130];
  
  iVar6 = DAT_08b02c60;
  pfVar3 = local_220;
  if (DAT_08ac5dd4 != '\0') {
    FUN_089f2950();
    DAT_08ac5dd4 = '\0';
  }
  iVar2 = 0;
  pfVar4 = local_220;
  if (iVar6 != 0) {
    do {
      *pfVar3 = (float)iVar6;
      local_220[iVar2 * 2 + 1] = -*(float *)(iVar6 + 0x24);
      iVar6 = *(int *)(iVar6 + 4);
      iVar2 = iVar2 + 1;
      pfVar3 = (float *)((int *)pfVar3 + 2);
      pfVar4 = pfVar3;
    } while (iVar6 != 0);
  }
  *pfVar4 = (float)iVar6;
  FUN_089bf03c(local_220,iVar2);
  iVar6 = 1;
  while (local_220[0] != 0.0) {
    iVar2 = *(int *)((int)local_220[0] + 0x28);
    if (iVar2 != 0) {
      uVar5 = *(uint *)(iVar2 + 0xc);
      while( true ) {
        *DAT_08ac5db4 = (uVar5 >> 0x18 & 0xf) << 0x10 | 0x10000000;
        DAT_08ac5db4[1] = uVar5 & 0xffffff | 0xa000000;
        DAT_08ac5db4 = DAT_08ac5db4 + 2;
        iVar2 = *(int *)(iVar2 + 4);
        if (iVar2 == 0) break;
        uVar5 = *(uint *)(iVar2 + 0xc);
      }
    }
    *(undefined4 *)((int)local_220[0] + 0x28) = 0;
    iVar2 = iVar6 * 2;
    iVar6 = iVar6 + 1;
    local_220[0] = local_220[iVar2];
  }
  FUN_08a1ee58(DAT_08ac5db4);
  FUN_089f2564();
  uVar1 = FUN_08a1ee00();
  zz_sceKernelDcacheWritebackRange(DAT_08ac5db8,uVar1);
  FUN_08a1e8b0(0,DAT_08ac5db8,0,0,0);
  return;
}

