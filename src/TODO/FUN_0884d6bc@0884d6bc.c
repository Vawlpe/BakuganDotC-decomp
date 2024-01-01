#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0884d6bc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_088660e0();
  if (((iVar1 != 0) &&
      (iVar2 = (**(code **)(*(int *)(iVar1 + 0x14) + 0x74))
                         (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 0x70)), iVar2 == 0)) &&
     (*(char *)(iVar1 + 0x4c1) != '\0')) {
    iVar4 = 1;
    FUN_0884b588(param_1,iVar1,1,0);
  }
  if (((iVar4 == 0) && (*(int *)(DAT_08ac58c4 + 0x20) == 1)) && (*(int *)(param_1 + 0x590) != 0)) {
    iVar1 = FUN_088b2cb4();
    if (iVar1 < *(int *)(param_1 + 0x590)) {
      uVar3 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar3,0x1c,1);
      iVar4 = 1;
      FUN_0884b588(param_1,DAT_08abd5a0,1,1);
    }
  }
  return iVar4;
}

