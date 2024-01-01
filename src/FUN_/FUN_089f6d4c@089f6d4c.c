#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f6d4c(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af5864;
    if (DAT_08ac6168 == param_1) {
      DAT_08ac6168 = *(int *)(param_1 + 4);
      uVar3 = *(undefined4 *)(param_1 + 0x114);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x114);
    }
    FUN_089cecb8(DAT_08ac5934,uVar3);
    FUN_089cecb8(DAT_08ac5934,*(undefined4 *)(param_1 + 0x118));
    if (*(char *)(param_1 + 0x128) == '\0') {
      cVar1 = *(char *)(param_1 + 0xad);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x124);
      if (iVar2 == 0) {
        cVar1 = *(char *)(param_1 + 0xad);
      }
      else {
        FUN_089d8634();
        FUN_089d7fd8(iVar2,0,0);
        FUN_089d866c();
        *(undefined4 *)(param_1 + 0x124) = 0;
        cVar1 = *(char *)(param_1 + 0xad);
      }
    }
    if ((cVar1 == '\0') && (iVar2 = *(int *)(param_1 + 0xb0), iVar2 != 0)) {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0xb0) = 0;
    }
    FUN_089d87bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

