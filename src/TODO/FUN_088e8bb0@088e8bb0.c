#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_088e8bb0(int param_1)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_089ded60(param_1,&DAT_08a98e2c);
  *(int *)(param_1 + 0x3e0) = iVar1;
  if (iVar1 != 0) {
    FUN_089def60(param_1,&local_20,*(undefined4 *)(param_1 + 0x3e0));
    *(undefined4 *)(param_1 + 0x3f0) = local_20;
    *(undefined4 *)(param_1 + 0x3f4) = uStack_1c;
    *(undefined4 *)(param_1 + 0x3f8) = uStack_18;
    *(undefined4 *)(param_1 + 0x3fc) = uStack_14;
  }
  return *(int *)(param_1 + 0x3e0) != 0;
}

