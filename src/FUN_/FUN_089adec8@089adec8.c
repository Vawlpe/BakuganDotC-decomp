#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089adec8(int param_1)

{
  char cVar1;
  undefined uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  cVar1 = *(char *)(param_1 + 0x74);
  if (cVar1 < 3) {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + cVar1 * 4 + 0x90);
    uVar2 = FUN_089acf60(param_1,cVar1);
    FUN_089acee0(param_1,uVar4,uVar2);
  }
  else {
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xf4);
    piVar3 = (int *)FUN_0880cc48();
    FUN_089adb98(param_1,uVar4,*(undefined *)(*piVar3 + 0x6ab));
  }
  return;
}

