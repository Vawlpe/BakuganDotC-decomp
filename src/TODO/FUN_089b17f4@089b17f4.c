#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b17f4(int param_1)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    FUN_089b012c(param_1,0);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 1:
    cVar1 = FUN_089b0450(param_1,0);
    if (cVar1 == '\x01') {
      FUN_089b0914(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 2:
    cVar1 = FUN_089b0af0(param_1,0);
    if (cVar1 == '\x01') {
      FUN_089b0e14(param_1,1,*(undefined *)(param_1 + 0x74));
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
    break;
  case 3:
    FUN_089b0f24(param_1,*(undefined *)(param_1 + 0x74));
    cVar1 = FUN_089b1040(param_1);
    if (cVar1 == '\0') {
      if ((*(byte *)(*(int *)(param_1 + 0x20) + 3) & 0x20) != 0) {
        iVar4 = DONE_NotZero_DAT_08AC5874();
        if (iVar4 != 0) {
          uVar3 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar3,2,0,0);
        }
        *(undefined *)(param_1 + 0x578) = 1;
        *(undefined4 *)(param_1 + 0x2c) = 5;
        return;
      }
      iVar4 = FUN_089b10bc(param_1);
      if (iVar4 == 1) {
        iVar4 = DONE_NotZero_DAT_08AC5874();
        if (iVar4 != 0) {
          uVar3 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar3,1,0,0);
        }
        FUN_089b128c(param_1);
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
    }
    else {
      if (cVar1 == '\x01') {
        iVar4 = DONE_NotZero_DAT_08AC5874();
        if (iVar4 != 0) {
          uVar3 = DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar3,0,0,0);
        }
        FUN_089b1080(param_1);
        *(undefined *)(param_1 + 0x578) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 7;
        return;
      }
      iVar4 = DONE_NotZero_DAT_08AC5874();
      if (iVar4 != 0) {
        uVar3 = DONE_Get_DAT_08AC5874();
        FUN_089c6350(uVar3,3,0,0);
      }
    }
    break;
  case 4:
    iVar4 = FUN_089b1468(param_1);
    if (iVar4 == 1) {
      FUN_089b0e14(param_1,1,*(undefined *)(param_1 + 0x74));
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  case 5:
    FUN_089b012c(param_1,1);
    FUN_089b0914(param_1,1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    break;
  case 6:
    cVar1 = FUN_089b0450(param_1,1);
    cVar2 = FUN_089b0af0(param_1,1);
    if ((char)(cVar1 + cVar2) == '\x02') {
      *(undefined4 *)(param_1 + 0x2c) = 9;
    }
    break;
  case 7:
    iVar4 = FUN_089b1738(param_1);
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
    break;
  case 8:
    iVar4 = FUN_089a59fc();
    if (iVar4 == 1) {
      *(undefined4 *)(param_1 + 0x2c) = 3;
    }
    break;
  default:
    FUN_089b1770(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

