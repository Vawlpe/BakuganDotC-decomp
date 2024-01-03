#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08993e1c(int param_1)

{
  undefined uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_08993044(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    iVar4 = FUN_08993200(param_1,1);
    if (iVar4 == 1) {
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    FUN_08993498(param_1);
    uVar1 = FUN_08993570(param_1);
    *(undefined *)(param_1 + 0x114) = uVar1;
    if (*(char *)(param_1 + 0x114) == '\x01') {
      if (*(int *)(param_1 + 0x108) == 1) {
        *(undefined4 *)(param_1 + 0x2c) = 7;
        return;
      }
      piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
      *(ushort *)(*piVar2 + 0x6a6) = *(ushort *)(*piVar2 + 0x6a6) | 4;
      iVar4 = *(int *)(param_1 + 0x2c);
    }
    else {
      iVar4 = *(int *)(param_1 + 0x2c);
    }
    *(int *)(param_1 + 0x2c) = iVar4 + 1;
    break;
  case 3:
    if (*(char *)(param_1 + 0x114) == '\x01') {
      if (*(int *)(param_1 + 0x108) == 0) {
        FUN_08992f10(param_1,10);
        iVar4 = *(int *)(param_1 + 0x2c) + 1;
      }
      else {
        FUN_08992f10(param_1,10);
        iVar4 = *(int *)(param_1 + 0x2c) + 1;
      }
    }
    else if (*(int *)(param_1 + 0x108) == 0) {
      FUN_08992f10(param_1,0xd);
      iVar4 = *(int *)(param_1 + 0x2c) + 1;
    }
    else {
      FUN_08992f10(param_1,0xc);
      iVar4 = *(int *)(param_1 + 0x2c) + 1;
    }
    *(int *)(param_1 + 0x2c) = iVar4;
    break;
  case 4:
    iVar4 = FUN_08992f50(param_1);
    if (iVar4 == 1) {
      if (*(char *)(param_1 + 0x114) == '\x01') {
        if (*(int *)(param_1 + 0x108) == 0) {
          *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0x108) + 1;
          *(undefined4 *)(param_1 + 0x104) = 10;
        }
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
      else {
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
    }
    break;
  case 5:
    FUN_08993860(param_1);
    FUN_08993044(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 6:
    iVar4 = FUN_08993200(param_1,0);
    if (iVar4 == 1) {
      FUN_08992a1c(param_1);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x28) = 3;
    }
    break;
  case 7:
    FUN_08993914(param_1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 8:
    DAT_08ac0e70 = 1;
    uVar3 = DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar3,0x14,*(ushort *)(param_1 + 0x11e) + 1);
    FUN_089bf754(0x177,*(undefined *)(param_1 + 0x120));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 9:
    DAT_08ac0e70 = 1;
    iVar4 = FUN_089bf93c(0x177,1);
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x2c) = 10;
    }
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x28) = 5;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

