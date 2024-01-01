#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08998b98(undefined4 param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined auStack_50 [64];
  
  uVar2 = (param_3 & 0xff) - 1;
  if (uVar2 < 5) {
    if (uVar2 == 1) {
      FUN_089b4c84(auStack_50,"hata_UK");
    }
    else if (uVar2 == 2) {
      FUN_089b4c84(auStack_50,"hata_China");
    }
    else if (uVar2 == 3) {
      FUN_089b4c84(auStack_50,"hata_Ezypt");
    }
    else if (uVar2 == 4) {
      FUN_089b4c84(auStack_50,"hata_USA");
    }
    else {
      FUN_089b4c84(auStack_50,"hata_Japan");
    }
    uVar1 = FUN_089f7720(auStack_50);
    *(undefined4 *)(param_2 + 0xd4) = uVar1;
  }
  return;
}

