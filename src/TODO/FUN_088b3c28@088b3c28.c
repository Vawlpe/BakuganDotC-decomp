#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b3c28(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x80);
  if (iVar2 == 0x44c) {
    if (param_1 != 0) {
      (**(code **)(*(int *)(param_1 + 0x14) + 0xc))
                (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 8),3);
    }
  }
  else {
    if (iVar2 != 1000) {
      if (iVar2 != 999) {
        if (iVar2 != 0x65) {
          if (iVar2 != 100) {
            return;
          }
          *(undefined4 *)(param_1 + 0x84) = 0x50;
          *(undefined *)(param_1 + 0x88) = 1;
          *(undefined4 *)(param_1 + 0x80) = 0x65;
        }
        if (*(int *)(param_1 + 0x84) == 0x37) {
          iVar2 = DONE_NotZero_DAT_08AC5874();
          if (iVar2 == 0) {
            iVar2 = *(int *)(param_1 + 0x84);
          }
          else {
            uVar1 = DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar1,0x200260,0,0);
            iVar2 = *(int *)(param_1 + 0x84);
          }
        }
        else {
          iVar2 = *(int *)(param_1 + 0x84);
        }
        *(int *)(param_1 + 0x84) = iVar2 + -1;
        if (0 < iVar2 + -1) {
          return;
        }
        *(undefined *)(param_1 + 0x88) = 0;
        *(undefined4 *)(param_1 + 0x80) = 0;
        return;
      }
      *(undefined4 *)(param_1 + 0x84) = 0x1e;
      *(undefined4 *)(param_1 + 0x80) = 1000;
    }
    if ((*(int *)(param_1 + 0x84) == 0x19) && (iVar2 = DONE_NotZero_DAT_08AC5874(), iVar2 != 0)) {
      uVar1 = DONE_Get_DAT_08AC5874();
      FUN_089c6350(uVar1,0x200261,0,0);
    }
    FUN_08824790(DAT_08abd5b0,0xffffffff,param_1 + 0x30,2);
    iVar2 = *(int *)(param_1 + 0x84) + -1;
    *(int *)(param_1 + 0x84) = iVar2;
    if (iVar2 < 1) {
      *(undefined4 *)(param_1 + 0x80) = 0x44c;
    }
  }
  return;
}

