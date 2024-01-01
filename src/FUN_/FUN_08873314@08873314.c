#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08873314(int param_1)

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = *(int *)(param_1 + 0x20c);
  *(undefined4 *)(iVar2 + 0x148) = 5;
  *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) | 1;
  *(undefined4 *)(param_1 + 0x1c4) = 1;
  *(undefined4 *)(param_1 + 0x39c) = 2;
  iVar2 = *(int *)(param_1 + 0x3cc) + 1;
  *(int *)(param_1 + 0x3cc) = iVar2;
  if (iVar2 == 8) {
    if (*(char *)(param_1 + 0x158) != '\0') {
      FUN_089e10cc(0x3f800000);
      iVar2 = FUN_0884b268();
      *(undefined4 *)(iVar2 + 0x4e0) = 0;
    }
  }
  else if ((8 < *(int *)(param_1 + 0x3cc)) &&
          (((FUN_088706f0(param_1,0,0), (*(uint *)(param_1 + 0x16c) & 8) == 0 ||
            (iVar2 = FUN_088886fc(param_1 + 0x434), iVar2 == 0)) ||
           (iVar2 = FUN_088602ec(param_1,1), iVar2 != 0)))) {
    FUN_08865608(param_1);
  }
  uVar3 = FUN_08863b94(0x3f333333,param_1);
  auVar1 = vscl_t(*(undefined (*) [12])(param_1 + 0x80),uVar3);
  *(int *)*(undefined (*) [12])(param_1 + 0x80) = auVar1._0_4_;
  *(int *)(param_1 + 0x88) = auVar1._8_4_;
  return;
}

