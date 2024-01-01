#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a19580(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if ((param_1 != 0) && (iVar6 = *(int *)(param_1 + 0x50), iVar6 != 0)) {
    uVar4 = (uint)*(ushort *)(iVar6 + 0xc);
    if (1 < uVar4) {
      if (uVar4 == 0) {
        trap(7);
      }
      sVar2 = (short)((*(short *)(iVar6 + 0x14) + 1) % (int)uVar4);
      iVar5 = (int)sVar2;
      *(short *)(iVar6 + 0x14) = sVar2;
      if (((-1 < iVar5) && (iVar5 < (int)uVar4)) &&
         (iVar3 = *(int *)(iVar6 + 8) + iVar5 * (uint)*(ushort *)(iVar6 + 0x10) * 4, iVar3 != 0)) {
        FUN_08a18d88(iVar3,0,param_1,iVar5);
        if (iVar5 < *(short *)(iVar6 + 0x16)) {
          *(short *)(iVar6 + 0x16) = sVar2;
        }
        sVar2 = *(short *)(iVar6 + 0x14);
        if ((int)*(short *)(iVar6 + 0x18) < iVar5 + 1) {
          *(short *)(iVar6 + 0x18) = (short)(iVar5 + 1);
        }
      }
      uVar1 = FUN_08a19400(param_1,param_2,param_3,(int)sVar2);
      return uVar1;
    }
    uVar1 = FUN_08a19210();
    return uVar1;
  }
  return 0;
}

