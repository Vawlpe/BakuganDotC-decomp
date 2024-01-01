#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e6a58(int param_1,undefined (*param_2) [12])

{
  undefined auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined (*pauVar5) [12];
  
  iVar4 = 0;
  iVar3 = 0;
  do {
    pauVar5 = (undefined (*) [12])(*(int *)(param_1 + 4) + iVar3);
    uVar2 = *(undefined4 *)pauVar5[1];
    auVar1 = vadd_t(*pauVar5,*param_2);
    *(int *)*pauVar5 = auVar1._0_4_;
    *(int *)(*pauVar5 + 4) = auVar1._4_4_;
    *(int *)(*pauVar5 + 8) = auVar1._8_4_;
    *(undefined4 *)pauVar5[1] = uVar2;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x10;
  } while (iVar4 < 8);
  return;
}

