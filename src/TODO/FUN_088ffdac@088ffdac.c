#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_088ffdac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined uVar3;
  
  uVar3 = *(char *)(param_1 + 0x759) != '\0';
  iVar1 = FUN_0880d354();
  if ((iVar1 == 0) && (iVar1 = FUN_088ff440(), iVar1 == 0)) {
    if ((*(byte *)(*(int *)(param_1 + 0xdc) + 4) & 8) == 0) {
      if ((*(byte *)(*(int *)(param_1 + 0xdc) + 5) & 0x40) != 0) {
        uVar3 = 2;
      }
    }
    else {
      uVar3 = 2;
    }
  }
  iVar1 = FUN_0880d354();
  if ((iVar1 != 0) && (iVar1 = _DONE_NotZero_DAT_08AAC9E0(), iVar1 != 0)) {
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    iVar1 = FUN_0880d7e0(uVar2,0x80);
    if (iVar1 != 0) {
      uVar3 = 2;
    }
  }
  return uVar3;
}

