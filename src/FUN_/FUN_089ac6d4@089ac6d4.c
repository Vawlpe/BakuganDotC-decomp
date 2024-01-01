#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089ac6d4(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x68);
  if (param_2 == '\0') {
    iVar1 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41800000,0,uVar2,param_1 + 0x488,3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    iVar1 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41800000,param_2,uVar2,param_1 + 0x488,3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

