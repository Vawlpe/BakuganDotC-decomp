#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e1e2c(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x3a1) == '\0') {
      cVar3 = *(char *)(param_1 + 0x3d8);
    }
    else {
      iVar1 = FUN_089c59d4();
      if (iVar1 == 0) {
        cVar3 = *(char *)(param_1 + 0x3d8);
      }
      else {
        uVar2 = FUN_089c59f0();
        uVar2 = FUN_089c6350(uVar2,0x2c0002b,0,0);
        *(undefined4 *)(param_1 + 0x3dc) = uVar2;
        cVar3 = *(char *)(param_1 + 0x3d8);
      }
    }
    if ((cVar3 != '\0') && (iVar1 = FUN_089c59d4(), iVar1 != 0)) {
      uVar2 = FUN_089c59f0();
      uVar2 = FUN_089c6350(uVar2,0x2c00038,0,0);
      *(undefined4 *)(param_1 + 0x3d4) = uVar2;
    }
  }
  else {
    if (*(char *)(param_1 + 0x3a1) == '\0') {
      cVar3 = *(char *)(param_1 + 0x3d8);
    }
    else {
      iVar1 = FUN_089c59d4();
      if (iVar1 == 0) {
        cVar3 = *(char *)(param_1 + 0x3d8);
      }
      else {
        uVar2 = FUN_089c59f0();
        FUN_089c6588(uVar2,*(undefined4 *)(param_1 + 0x3dc));
        cVar3 = *(char *)(param_1 + 0x3d8);
      }
    }
    if ((cVar3 != '\0') && (iVar1 = FUN_089c59d4(), iVar1 != 0)) {
      uVar2 = FUN_089c59f0();
      FUN_089c6588(uVar2,*(undefined4 *)(param_1 + 0x3d4));
    }
  }
  return;
}

