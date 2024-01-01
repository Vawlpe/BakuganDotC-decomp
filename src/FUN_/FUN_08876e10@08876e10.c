#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08876e10(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x110) == 0) {
    iVar3 = *(int *)(param_1 + 0xb8) * 8;
    iVar4 = param_1 + *(short *)(&DAT_08a68620 + iVar3);
    pcVar1 = (code *)(&PTR_FUN_08a68624)[*(int *)(param_1 + 0xb8) * 2];
    if (*(short *)(&DAT_08a68622 + iVar3) != 0) {
      psVar2 = (short *)(*(int *)(pcVar1 + iVar4) + *(short *)(&DAT_08a68622 + iVar3) * 8);
      pcVar1 = *(code **)(psVar2 + 2);
      iVar4 = iVar4 + *psVar2;
    }
    (*pcVar1)(iVar4);
    iVar3 = *(int *)(param_1 + 0xf4);
  }
  else {
    if (*(int *)(param_1 + 0x110) + 0x50 <= *(int *)(param_1 + 0xf4)) {
      if (param_1 == 0) {
        return;
      }
      (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 8),3);
      return;
    }
    iVar3 = *(int *)(param_1 + 0xf4);
  }
  *(int *)(param_1 + 0xf4) = iVar3 + 1;
  return;
}

