#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a00320(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0;
  uVar1 = FUN_089c9da8();
  uVar2 = FUN_089c9da8(param_1);
  uVar3 = FUN_089c9da8(param_1);
  iVar4 = FUN_089c9da8(param_1);
  iVar5 = FUN_089c2b10(uVar1);
  if (iVar5 == 0) {
    uVar6 = 2;
  }
  else {
    switch(uVar2) {
    case 0:
      uVar1 = FUN_089c2b48(uVar1);
      iVar4 = FUN_089c37e8(0x3f000000,uVar1,0);
      if (iVar4 == 0) {
        uVar6 = 2;
      }
      break;
    case 1:
      uVar1 = FUN_089c2b48(uVar1);
      iVar4 = FUN_089c3818(uVar1);
      if (iVar4 == 0) {
        uVar6 = 2;
      }
      break;
    case 2:
      FUN_089c2bb4(uVar3);
      break;
    case 3:
      uVar6 = 2;
      iVar4 = FUN_089c2c54(0xffffffff);
      if (iVar4 != 0) {
        uVar6 = 0;
      }
      break;
    case 4:
      uVar1 = FUN_089c2b48(uVar1);
      iVar4 = FUN_089c34dc(uVar1,iVar4 != 0);
      if (iVar4 == 0) {
        uVar6 = 2;
      }
      break;
    case 5:
      uVar1 = FUN_089c2b48(uVar1);
      FUN_089c357c(uVar1,uVar3,iVar4 != 0,0);
      break;
    case 6:
      iVar4 = FUN_089c2d54(uVar3);
      if (iVar4 == 0) {
        uVar6 = 2;
      }
      break;
    case 7:
      uVar1 = FUN_089c2b48(uVar1);
      iVar4 = FUN_089c33c0(uVar1,uVar3);
      if (iVar4 == 0) {
        uVar6 = 2;
      }
      break;
    case 8:
      uVar1 = FUN_089c2b48(0);
      iVar4 = FUN_089c357c(uVar1,uVar3,0,iVar4 != 0);
      if (iVar4 == 0) {
        uVar6 = 2;
      }
      break;
    case 9:
      uVar1 = FUN_089c2b48(0);
      iVar4 = FUN_089c3818(uVar1);
      if (iVar4 == 0) {
        uVar1 = FUN_089c2b48(0);
        iVar4 = FUN_089c3850(uVar1);
        if (iVar4 != 0) {
          uVar6 = 2;
        }
      }
    }
  }
  return uVar6;
}

