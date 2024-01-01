#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089cba7c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  if (DAT_08ac58d4 == '\0') {
    if (DAT_08ac58dc == '\0') {
      iVar4 = DAT_08b01130;
      if (DAT_08b01130 != 0) {
        do {
          iVar2 = *(int *)(iVar4 + 4);
          iVar3 = iVar3 + 1;
          iVar1 = FUN_089c9334(iVar4);
          if (iVar1 == -1) {
            if (iVar4 == DAT_08b01130) {
              DAT_08b01130 = iVar2;
            }
            if (iVar4 != 0) {
              (**(code **)(*(int *)(iVar4 + 0x20) + 0xc))
                        (iVar4 + *(short *)(*(int *)(iVar4 + 0x20) + 8),3);
            }
          }
          iVar4 = iVar2;
        } while (iVar2 != 0);
      }
    }
    else {
      iVar3 = 1;
    }
  }
  else {
    if (DAT_08ac58d8 != 0) {
      FUN_089c9634();
    }
    FUN_089cbb84(param_1);
    DAT_08ac58d4 = '\0';
    iVar3 = 1;
  }
  return iVar3;
}

