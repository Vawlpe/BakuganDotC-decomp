#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bb668(int *param_1,uint param_2)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1 * 8;
    iVar4 = (int)param_1 + (int)*(short *)(&DAT_08ac4f00 + iVar1);
    pcVar2 = (code *)(&PTR_LAB_08ac4f04)[*param_1 * 2];
    if (*(short *)(&DAT_08ac4f02 + iVar1) != 0) {
      psVar3 = (short *)(*(int *)(pcVar2 + iVar4) + *(short *)(&DAT_08ac4f02 + iVar1) * 8);
      pcVar2 = *(code **)(psVar3 + 2);
      iVar4 = iVar4 + *psVar3;
    }
    (*pcVar2)(iVar4);
    param_1[4] = 0;
    param_1[1] = -1;
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

