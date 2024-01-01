#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088afb2c(int param_1)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  uint uVar4;
  
  iVar1 = FUN_088abfa8(*(float *)(param_1 + 500) * 5.0,0x457a0000,param_1,param_1,param_1 + 0x330,
                       param_1 + 0x334,1);
  *(bool *)(param_1 + 0x335) = iVar1 == 0;
  uVar4 = *(uint *)(param_1 + 0x324);
  *(float *)(param_1 + 0x6c) = *(float *)(param_1 + 0x330) * *(float *)(param_1 + 0x338);
  if ((-1 < (int)uVar4) && (uVar4 < 7)) {
    iVar1 = param_1 + *(short *)(&DAT_08a84c6c + uVar4 * 8);
    pcVar2 = (code *)(&PTR_FUN_08a84c70)[uVar4 * 2];
    if (*(short *)(&DAT_08a84c6e + uVar4 * 8) != 0) {
      psVar3 = (short *)(*(int *)(pcVar2 + iVar1) + *(short *)(&DAT_08a84c6e + uVar4 * 8) * 8);
      pcVar2 = *(code **)(psVar3 + 2);
      iVar1 = iVar1 + *psVar3;
    }
    (*pcVar2)(iVar1);
  }
  FUN_088ac608(param_1,0);
  return;
}

