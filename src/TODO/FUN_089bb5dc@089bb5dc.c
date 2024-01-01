#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int * FUN_089bb5dc(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  
  param_1[4] = param_2;
  *param_1 = param_3;
  param_1[1] = -1;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar3 = (int)param_1 + (int)*(short *)(&DAT_08ac4ed8 + param_3 * 8);
  pcVar1 = (code *)(&PTR_LAB_08ac4edc)[param_3 * 2];
  if (*(short *)(&DAT_08ac4eda + param_3 * 8) != 0) {
    psVar2 = (short *)(*(int *)(pcVar1 + iVar3) + *(short *)(&DAT_08ac4eda + param_3 * 8) * 8);
    pcVar1 = *(code **)(psVar2 + 2);
    iVar3 = iVar3 + *psVar2;
  }
  (*pcVar1)(iVar3);
  return param_1;
}

