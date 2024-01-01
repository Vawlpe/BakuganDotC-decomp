#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089cb548(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  uVar1 = FUN_089c9da8();
  uVar2 = FUN_089c9da8(param_1);
  uVar3 = FUN_089c9da8(param_1);
  iVar4 = FUN_089c9da8(param_1);
  iVar5 = FUN_089bfa40(uVar1);
  if (iVar5 != 0) {
    uVar6 = 0;
    iVar5 = (**(code **)(*(int *)(iVar5 + 0xc) + 0x34))
                      (iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 0x30),uVar2);
    if (uVar3 < 6) {
      if (uVar3 == 1) {
        if (iVar4 < iVar5) {
          uVar6 = 2;
        }
      }
      else if (uVar3 == 2) {
        if (iVar5 <= iVar4) {
          uVar6 = 2;
        }
      }
      else if (uVar3 == 3) {
        if (iVar4 <= iVar5) {
          uVar6 = 2;
        }
      }
      else if (uVar3 == 4) {
        if (iVar4 != iVar5) {
          uVar6 = 2;
        }
      }
      else if (uVar3 == 5) {
        if (iVar4 == iVar5) {
          uVar6 = 2;
        }
      }
      else if (iVar5 < iVar4) {
        uVar6 = 2;
      }
    }
  }
  return uVar6;
}

