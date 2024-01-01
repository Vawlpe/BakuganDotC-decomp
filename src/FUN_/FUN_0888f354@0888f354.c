#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0888f354(int param_1,short param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_2;
  iVar2 = 0;
  if ((*(uint *)(param_1 + 0x9d4) & 0x20000) != 0) {
    iVar2 = 0x800;
  }
  if ((*(uint *)(param_1 + 0x918) & 4) == 0) {
    param_3 = 0;
  }
  if (((*(uint *)(param_1 + 0x918) & 2) != 0 | param_3) == 0) {
    return;
  }
  if ((iVar3 < iVar2 + -0x3000) || (0x3000 - iVar2 < iVar3)) {
    if ((iVar2 + 0x5000 <= iVar3) || (iVar3 <= -(iVar2 + 0x5000))) {
      FUN_08899478(param_1 + 0x1b0);
    }
  }
  else {
    FUN_08899458(param_1 + 0x1b0);
  }
  if ((iVar3 < 0x1000 - iVar2) || (iVar2 + 0x7000 < iVar3)) {
    if (iVar3 < -(iVar2 + 0x7000)) {
      uVar1 = *(uint *)(param_1 + 0x9d4);
    }
    else {
      if (iVar3 <= iVar2 + -0x1000) {
        FUN_08899498(param_1 + 0x1b0);
        *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) | 0x20000;
        goto LAB_0888f4a4;
      }
      uVar1 = *(uint *)(param_1 + 0x9d4);
    }
    *(uint *)(param_1 + 0x9d4) = uVar1 & 0xfffdffff;
  }
  else {
    FUN_088994b8(param_1 + 0x1b0);
    *(uint *)(param_1 + 0x9d4) = *(uint *)(param_1 + 0x9d4) | 0x20000;
  }
LAB_0888f4a4:
  if (param_3 != 0) {
    FUN_08899534(param_1 + 0x1b0);
  }
  return;
}

