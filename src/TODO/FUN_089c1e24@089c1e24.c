#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c1e24(int param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined **)(param_1 + 0x20) = &DAT_08af525c;
  iVar2 = *(int *)(param_1 + 0x2c);
  if (0 < iVar2) {
    iVar3 = 1;
    do {
      bVar1 = iVar3 < iVar2;
      iVar3 = iVar3 + 1;
    } while (bVar1);
  }
  if (DAT_08ac5270 != 0) {
    iVar2 = FUN_089d790c(DAT_08ac5270,*(undefined4 *)(param_1 + 0x28),iVar2);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      goto LAB_089c1e98;
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x28);
LAB_089c1e98:
  if (iVar2 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(iVar2,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  FUN_089d8bf0(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_089d8634();
    FUN_089d7fd8(param_1,0,0);
    FUN_089d866c();
  }
  return;
}

