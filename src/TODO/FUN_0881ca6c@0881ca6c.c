#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881ca6c(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 < 5) {
    if (uVar2 == 1) {
      uVar1 = FUN_089d3adc();
      iVar3 = FUN_089d3fac(uVar1);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 8) = 2;
        iVar3 = FUN_0881b35c(param_1);
        if (iVar3 != 0) {
          uVar1 = FUN_089d3adc();
          FUN_089d3da0(uVar1,iVar3 + 0x19);
        }
        uVar1 = FUN_089d3adc();
        iVar3 = FUN_089d3d84(uVar1);
        if (iVar3 != 0) {
          uVar1 = FUN_089d3adc();
          FUN_089d3dfc(uVar1,iVar3);
        }
        FUN_089cfb24();
        iVar3 = *(int *)(param_1 + 8);
        goto LAB_0881cbd8;
      }
    }
    else if (uVar2 == 2) {
      uVar1 = FUN_089d3adc();
      iVar3 = FUN_089d3e58(uVar1,2,2);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 8) = 3;
      }
    }
    else if (uVar2 == 3) {
      uVar1 = FUN_089d3adc();
      iVar3 = FUN_089d3f04(uVar1);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 8) = 4;
      }
    }
    else if (uVar2 == 4) {
      iVar3 = FUN_089cf9a4(param_1 + 0x31);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 4) = 7;
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_08943ad4(0,0);
      }
    }
    else {
      uVar1 = FUN_089d3adc();
      iVar3 = FUN_089d3f60(uVar1);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 8) = 1;
        FUN_08943ad4(1,0);
        iVar3 = *(int *)(param_1 + 8);
        goto LAB_0881cbd8;
      }
    }
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
  }
LAB_0881cbd8:
  if ((2 < iVar3) && (iVar3 < 5)) {
    uVar1 = FUN_089d3adc();
    iVar3 = FUN_089d3fac(uVar1);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 4) = 8;
      *(undefined4 *)(param_1 + 8) = 0;
      iVar3 = _DONE_NotZero_DAT_08AAC9E0();
      if (iVar3 != 0) {
        uVar1 = _DONE_Get_DAT_08AAC9E0();
        FUN_0880d0e8(uVar1,0x80);
      }
    }
  }
  iVar3 = _DONE_NotZero_DAT_08AAC9E0();
  if (iVar3 != 0) {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar3 = FUN_0880d7e0(uVar1,0x80);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 4) = 8;
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return;
}

