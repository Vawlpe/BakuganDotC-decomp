#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08845d40(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0xc) = &DAT_08af17fc;
    FUN_089cec00(DAT_08ac5934);
    iVar4 = 0;
    iVar3 = param_1;
    do {
      if (*(int *)(iVar3 + 0x14) == 0) {
        iVar2 = *(int *)(iVar3 + 0x20);
      }
      else {
        uVar1 = FUN_089fce94();
        FUN_089fd4a0(uVar1,param_1,*(undefined4 *)(iVar3 + 0x14));
        *(undefined4 *)(iVar3 + 0x14) = 0;
        iVar2 = *(int *)(iVar3 + 0x20);
      }
      if (iVar2 == 0) {
        iVar2 = *(int *)(iVar3 + 0x2c);
      }
      else {
        FUN_089d8634();
        FUN_089d7fd8(iVar2,0,0);
        FUN_089d866c();
        *(undefined4 *)(iVar3 + 0x20) = 0;
        iVar2 = *(int *)(iVar3 + 0x2c);
      }
      if (iVar2 != 0) {
        (**(code **)(*(int *)(iVar2 + 0x14) + 0xc))
                  (iVar2 + *(short *)(*(int *)(iVar2 + 0x14) + 8),3);
        *(undefined4 *)(iVar3 + 0x2c) = 0;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < 3);
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

