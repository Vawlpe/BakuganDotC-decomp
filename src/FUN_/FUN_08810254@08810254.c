#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08810254(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_089bfa40(0x6e);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_089c9d1c(param_1);
  uVar3 = FUN_089c9d1c(param_1);
  uVar4 = FUN_089c9e94(param_1);
  if (iVar2 < 0xfffe) {
    if (0xfffc < iVar2) {
      *(undefined4 *)(iVar1 + 0xbec) = 0;
      return 0;
    }
  }
  else {
    if (iVar2 < 0xffff) {
      FUN_0882cd8c(iVar1,1,uVar3,uVar4,0xffffffff);
      return 0;
    }
    if (iVar2 < 0x10000) {
      FUN_0882cd8c(iVar1,0,0,0,0xffffffff);
      return 0;
    }
  }
  FUN_0882cd8c(iVar1,1,uVar3,uVar4,iVar2);
  return 0;
}

