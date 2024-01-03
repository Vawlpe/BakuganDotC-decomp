#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897e834(int param_1)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((((*(byte *)(param_1 + 0x1134) & 8) != 0) &&
      (iVar2 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1)), iVar2 != 2)) &&
     (((int)*(char *)(*(int *)(param_1 + 0x20) + 5) & 0x80U) != 0)) {
    iVar2 = DONE_NotZero_DAT_08AC5874();
    if (iVar2 == 0) {
      uVar1 = *(undefined *)(param_1 + 0x1318);
    }
    else {
      uVar3 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar3,0xb,0,0);
      uVar1 = *(undefined *)(param_1 + 0x1318);
    }
    *(undefined4 *)(param_1 + 0x1374) = 0;
    FUN_0897ddd4(param_1,uVar1);
    iVar2 = *(int *)(param_1 + *(char *)(param_1 + 0x1318) * 4 + 0x12a4);
    iVar4 = *(int *)(iVar2 + 0x14);
    (**(code **)(iVar4 + 0x34))(0x3f000000,iVar2 + *(short *)(iVar4 + 0x30));
    iVar2 = *(int *)(param_1 + *(char *)(param_1 + 0x1318) * 4 + 0x12a4);
    iVar4 = *(int *)(iVar2 + 0x14);
    (**(code **)(iVar4 + 0x3c))(iVar2 + *(short *)(iVar4 + 0x38));
  }
  return;
}

