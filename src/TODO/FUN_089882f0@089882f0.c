#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089882f0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      DAT_08ac0e70 = 1;
      iVar2 = FUN_089bf754(0x208,4);
      uVar1 = FUN_08987f10(0,*(undefined *)
                              ((int)*(char *)(param_1 + 0x8e0) + *(char *)(param_1 + 0x8e1) * 6 +
                               param_1 + 0x8ec));
      *(undefined4 *)(iVar2 + 0x1c) = uVar1;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
  }
  else if (iVar2 < 2) {
    iVar2 = FUN_089bf93c(0x208,1);
    if (iVar2 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x2c) = 2;
    return;
  }
  FUN_08909df4(param_1,0);
  FUN_08988220(param_1);
  *(undefined4 *)(param_1 + 0x28) = 2;
  *(undefined4 *)(param_1 + 0x2c) = 0xd;
  return;
}

