#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

short * FUN_08a1cf3c(short *param_1,int param_2,uint param_3,int param_4)

{
  short *psVar1;
  int iVar2;
  short *psVar3;
  
  if ((param_1 != (short *)0x0) && (param_4 != 0)) {
    if ((param_3 & 0x81) != 0) {
      psVar1 = (short *)FUN_08a145a4(param_2,param_4);
      if (0 < param_2) {
        iVar2 = 0;
        psVar3 = psVar1;
        do {
          iVar2 = iVar2 + 1;
          FUN_08a1cc74(psVar3,param_1,param_3,param_4);
          psVar3 = psVar3 + 0x10;
          param_1 = param_1 + 0x10;
        } while (param_2 != iVar2);
      }
      return psVar1;
    }
    iVar2 = 0;
    psVar1 = param_1;
    if (0 < param_2) {
      do {
        *psVar1 = *psVar1 + 1;
        if (param_2 == iVar2 + 1) {
          return param_1;
        }
        iVar2 = iVar2 + 2;
        psVar1[0x10] = psVar1[0x10] + 1;
        psVar1 = psVar1 + 0x20;
      } while (param_2 != iVar2);
    }
    return param_1;
  }
  return (short *)0x0;
}

