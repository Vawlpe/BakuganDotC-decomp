#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f1308(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_08ac5dd0 + 1;
  iVar3 = DAT_08ac5dcc + DAT_08ac5dd0 * 0x24;
  iVar1 = 0;
  DAT_08ac5dd0 = iVar2;
  if (iVar3 != 0) {
    FUN_089d8b38(iVar3,0);
    iVar1 = iVar3;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    *(int *)(param_1 + 0x28) = iVar1;
  }
  else {
    FUN_089d8c60(iVar1,*(int *)(param_1 + 0x28),0);
  }
  iVar2 = DAT_08ac5db4;
  *(int *)(param_1 + 0x30) = DAT_08ac5db4;
  *(int *)(iVar1 + 0xc) = iVar2 + 8;
  *(int *)(param_1 + 0x2c) = iVar1;
  return *(int *)(param_1 + 0x30) + 8;
}

