#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

short * FUN_08a1d09c(short *param_1,int param_2,uint param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  
  if ((param_1 == (short *)0x0) || (param_4 == 0)) {
    return (short *)0x0;
  }
  if ((param_3 & 0xf0401) == 0) {
    if ((param_3 & 2) == 0) {
      if (param_2 < 1) {
        return param_1;
      }
LAB_08a1d164:
      iVar5 = 0;
      psVar1 = param_1;
      do {
        iVar5 = iVar5 + 1;
        *psVar1 = *psVar1 + 1;
        psVar1 = psVar1 + 8;
      } while (param_2 != iVar5);
      return param_1;
    }
    iVar5 = 0;
    if (param_2 < 1) {
      return param_1;
    }
    uVar3 = *(undefined4 *)(param_1 + 2);
    psVar1 = param_1;
    while( true ) {
      iVar5 = iVar5 + 1;
      iVar2 = FUN_08a10908(uVar3);
      if (iVar2 != 0) break;
      if (param_2 == iVar5) goto LAB_08a1d164;
      uVar3 = *(undefined4 *)(psVar1 + 10);
      psVar1 = psVar1 + 8;
    }
  }
  psVar1 = (short *)FUN_08a14544(param_2,param_4);
  if (0 < param_2) {
    iVar5 = 0;
    psVar4 = psVar1;
    do {
      iVar5 = iVar5 + 1;
      FUN_08a1ca78(psVar4,param_1,param_3,param_4);
      psVar4 = psVar4 + 8;
      param_1 = param_1 + 8;
    } while (param_2 != iVar5);
  }
  return psVar1;
}

