#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088df48c(int param_1)

{
  undefined auVar1 [12];
  int *piVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  
  if (*(int *)(param_1 + 0x350) != 0) {
    piVar2 = *(int **)(param_1 + 0x350);
    auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x20),0x3d4ccccd);
    fVar5 = auVar1._0_4_;
    fVar6 = auVar1._4_4_;
    fVar4 = auVar1._8_4_;
    if (0.0 < fVar5) {
      fVar5 = fVar5 * 4096.0 + 0.5;
    }
    else {
      fVar5 = fVar5 * 4096.0 - 0.5;
    }
    if (0.0 < fVar6) {
      fVar6 = fVar6 * 4096.0 + 0.5;
    }
    else {
      fVar6 = fVar6 * 4096.0 - 0.5;
    }
    if (0.0 < fVar4) {
      fVar4 = fVar4 * 4096.0 + 0.5;
    }
    else {
      fVar4 = fVar4 * 4096.0 - 0.5;
    }
    *piVar2 = (int)fVar5;
    piVar2[1] = (int)fVar6;
    piVar2[2] = (int)fVar4;
    iVar3 = *(int *)(param_1 + 0x350);
    FUN_088dbd2c(&local_34);
    *(undefined2 *)(iVar3 + 0xc) = local_34;
    *(undefined2 *)(iVar3 + 0xe) = local_32;
    *(undefined2 *)(iVar3 + 0x10) = local_30;
  }
  return;
}

