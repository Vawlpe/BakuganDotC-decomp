#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f031c(int param_1,undefined2 param_2,undefined param_3,byte param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((uint)param_4 < (uint)*(byte *)(DAT_08abf710 + 0xc9)) {
    if ((*(byte *)(param_1 + 0x273) & 1) != 0) {
      FUN_088f342c(*(int *)(param_1 + 0x284) + (uint)param_4 * 0x4c,param_3,1);
      return;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x3c);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0xc,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar2 != 0) {
      FUN_088f33a0(iVar2,*(int *)(param_1 + 0x284) + (uint)param_4 * 0x4c,param_2,param_3,
                   (uint)param_4);
      iVar3 = iVar2;
    }
    FUN_088eaf54(uVar4,iVar3);
  }
  return;
}

