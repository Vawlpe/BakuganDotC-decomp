#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881cde0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 < 5) {
    if (uVar3 == 1) {
      uVar1 = FUN_089d3adc();
      iVar2 = FUN_089d3fac(uVar1);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 8) = 2;
      }
    }
    else if (uVar3 == 2) {
      uVar1 = FUN_089d3adc();
      iVar2 = FUN_089d4084(uVar1);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 8) = 3;
      }
    }
    else if (uVar3 == 3) {
      uVar1 = FUN_089d3adc();
      iVar2 = FUN_089d4144(uVar1);
      if (iVar2 != 0) {
        FUN_089d3adc();
        FUN_089d3aec();
        *(undefined4 *)(param_1 + 8) = 4;
      }
    }
    else if (uVar3 == 4) {
      iVar2 = FUN_089d3ab4();
      if (iVar2 == 0) {
        *(undefined *)(param_1 + 0xd) = 1;
      }
    }
    else {
      uVar1 = FUN_089d3adc();
      iVar2 = FUN_089d3f60(uVar1);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 8) = 1;
      }
    }
  }
  return;
}

