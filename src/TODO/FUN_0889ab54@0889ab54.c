#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889ab54(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x57c) = param_2;
  *(undefined4 *)(param_1 + 0x6a4) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    FUN_088625e8(param_1,5);
    iVar3 = *(int *)(param_1 + 8) + 0x57;
    iVar1 = FUN_0889ab08(param_1,iVar3);
    if (iVar1 != 0) {
      iVar1 = FUN_088b9450(0x3f800000,iVar3,3,0);
      *(int *)(param_1 + 0x678) = iVar1;
      *(undefined4 *)(iVar1 + 0x6c) = 0;
      iVar1 = *(int *)(*(int *)(param_1 + 0x678) + 0x14);
      (**(code **)(iVar1 + 0x34))(0,*(int *)(param_1 + 0x678) + (int)*(short *)(iVar1 + 0x30));
      uVar4 = *(undefined4 *)(param_1 + 0x678);
      uVar2 = FUN_088663e4(param_1);
      FUN_088b93b8(uVar4,uVar2);
    }
  }
  return;
}

