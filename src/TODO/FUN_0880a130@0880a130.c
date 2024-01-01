#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880a130(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      iVar2 = *(int *)(param_1 + 0x24);
      if ((*(byte *)(iVar2 + 9) & 0x20) == 0) {
        if ((*(byte *)(iVar2 + 9) & 0x40) == 0) {
          iVar3 = 0;
          if ((*(byte *)(iVar2 + 8) & 0x10) == 0) {
            if ((*(byte *)(iVar2 + 8) & 0x40) != 0) {
              iVar3 = 1;
            }
          }
          else {
            iVar3 = -1;
          }
          if (iVar3 != 0) {
            iVar3 = iVar3 + *(int *)(param_1 + 0x28);
            if (iVar3 < 0) {
              iVar3 = 6;
            }
            if (6 < iVar3) {
              iVar3 = 0;
            }
            *(int *)(param_1 + 0x28) = iVar3;
            iVar2 = _DONE_NotZero_DAT_08AC5874();
            if (iVar2 != 0) {
              uVar1 = _DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar1,1,0,0);
            }
            *(undefined4 *)(param_1 + 0x2c) = 0;
          }
        }
        else {
          *(undefined4 *)(param_1 + 0x14) = 1;
          uVar1 = _DONE_Get_DAT_08AAC9E0();
          FUN_0880c618(uVar1,(&DAT_08a34038)[*(int *)(param_1 + 0x28)]);
          iVar2 = _DONE_NotZero_DAT_08AC5874();
          if (iVar2 != 0) {
            uVar1 = _DONE_Get_DAT_08AC5874(param_1);
            FUN_089c6350(uVar1,0,0,0);
          }
          FUN_0880968c(param_1,1);
          *(undefined4 *)(param_1 + 0x2c) = 0;
          *(undefined4 *)(param_1 + 0x30) = 0;
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x5c);
        if (iVar2 < 1) {
          if ((-1 < iVar2) && (iVar2 = _DONE_NotZero_DAT_08AC5874(param_1), iVar2 != 0)) {
            uVar1 = _DONE_Get_DAT_08AC5874(param_1);
            FUN_089c6350(uVar1,3,0,0);
          }
        }
        else if (iVar2 < 2) {
          *(undefined4 *)(param_1 + 0x14) = 2;
          iVar2 = _DONE_NotZero_DAT_08AC5874();
          if (iVar2 != 0) {
            uVar1 = _DONE_Get_DAT_08AC5874(param_1);
            FUN_089c6350(uVar1,2,0,0);
          }
          FUN_0880968c(param_1,0xffffffff);
        }
      }
      goto LAB_0880a360;
    }
  }
  else if (iVar2 < 2) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 0xc;
    iVar2 = *(int *)(param_1 + 0x30) + 1;
    *(int *)(param_1 + 0x30) = iVar2;
    if (0x14 < iVar2) {
      *(undefined4 *)(param_1 + 0x14) = 2;
    }
    goto LAB_0880a360;
  }
  *(undefined4 *)(param_1 + 0x10) = 3;
  *(undefined4 *)(param_1 + 0x14) = 1;
LAB_0880a360:
  FUN_08809b44(param_1,0);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  return;
}

