#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b53f4(uint param_1,int param_2,uint param_3)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = (int)param_1 < 0;
  if ((bVar1) && (param_3 == 10)) {
    param_1 = -param_1;
  }
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    uVar5 = param_1 % param_3;
    iVar4 = iVar3 + 1;
    param_1 = param_1 / param_3;
    *(char *)(param_2 + iVar3) = s_0123456789abcdefghijklmnopqrstuv_08ac46e0[uVar5];
  } while (param_1 != 0);
  if (bVar1) {
    puVar2 = (undefined *)(param_2 + iVar4);
    iVar4 = iVar3 + 2;
    *puVar2 = 0x2d;
  }
  *(undefined *)(iVar4 + param_2) = 0;
  FUN_089b5388(param_2);
  return;
}

