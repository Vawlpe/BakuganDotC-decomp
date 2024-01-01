#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089b48d0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (DAT_08af80a4 == 0) {
    if (DAT_08aac760 == 0) {
      return 0xffffffff;
    }
    iVar4 = DAT_08aac760 * 0x400;
    if ((iVar4 != 0) &&
       (DAT_08af80ac = zz_sceKernelAllocPartitionMemory(2,"UserSbrk",3,iVar4,0x1000),
       0 < DAT_08af80ac)) {
      DAT_08af80a0 = zz_sceKernelGetBlockHeadAddr(DAT_08af80ac);
      DAT_08af80a8 = DAT_08af80a0 + iVar4;
      DAT_08af80a4 = DAT_08af80a0;
    }
  }
  uVar1 = DAT_08af80a0;
  if (DAT_08af80a4 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = DAT_08af80a0 + param_1;
    uVar2 = 0xffffffff;
    if ((DAT_08af80a4 <= uVar3) && (uVar2 = DAT_08af80a0, uVar1 = uVar3, DAT_08af80a8 < uVar3)) {
      return 0xffffffff;
    }
  }
  DAT_08af80a0 = uVar1;
  return uVar2;
}

