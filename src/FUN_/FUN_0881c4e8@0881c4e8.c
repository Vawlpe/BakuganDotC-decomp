#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881c4e8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = *(uint *)(param_1 + 8);
  if (uVar4 < 6) {
    if (uVar4 == 1) {
      uVar3 = FUN_089d3adc();
      iVar6 = FUN_089d3f60(uVar3);
      if (iVar6 != 0) {
        *(undefined4 *)(param_1 + 8) = 2;
      }
    }
    else if (uVar4 == 2) {
      uVar3 = FUN_089d3adc();
      iVar6 = FUN_089d3fac(uVar3);
      if (iVar6 != 0) {
        *(undefined4 *)(param_1 + 8) = 3;
        uVar3 = FUN_089d3adc();
        iVar6 = FUN_089d3d84(uVar3);
        if (iVar6 != 0) {
          uVar3 = FUN_089d3adc();
          FUN_089d3da0(uVar3,iVar6);
        }
        FUN_089cfb24();
      }
    }
    else if (uVar4 == 3) {
      uVar3 = FUN_089d3adc();
      iVar6 = FUN_089d3e58(uVar3,2,1);
      if (iVar6 != 0) {
        *(undefined4 *)(param_1 + 8) = 4;
      }
    }
    else if (uVar4 == 4) {
      uVar3 = FUN_089d3adc();
      iVar6 = FUN_089d3f04(uVar3);
      if (iVar6 != 0) {
        *(undefined4 *)(param_1 + 8) = 5;
      }
    }
    else if (uVar4 == 5) {
      bVar1 = true;
      iVar6 = 1;
      if (1 < *(int *)(param_1 + 0x14)) {
        iVar5 = param_1 + 0x50;
        do {
          iVar2 = FUN_089cf9a4(iVar5);
          if (iVar2 == 0) {
            bVar1 = false;
            break;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x1f;
        } while (iVar6 < *(int *)(param_1 + 0x14));
      }
      if (bVar1) {
        iVar6 = FUN_089d3ab4();
        if (iVar6 != 0) {
          uVar3 = FUN_089d3adc();
          FUN_089d3dfc(uVar3,param_1 + 0x50);
        }
        *(undefined4 *)(param_1 + 4) = 7;
        *(undefined4 *)(param_1 + 8) = 0;
        FUN_08943ad4(0,0);
      }
      else {
        uVar3 = FUN_089d3adc();
        iVar6 = FUN_089d3fac(uVar3);
        if (iVar6 != 0) {
          *(undefined4 *)(param_1 + 4) = 8;
          *(undefined4 *)(param_1 + 8) = 0;
          iVar6 = FUN_0880d2e0();
          if (iVar6 != 0) {
            uVar3 = FUN_0880cc48();
            FUN_0880d0e8(uVar3,0x80);
          }
        }
      }
    }
    else {
      bVar1 = true;
      iVar6 = 1;
      if (1 < *(int *)(param_1 + 0x14)) {
        iVar5 = param_1 + 0x50;
        do {
          iVar2 = FUN_089cf9a4(iVar5);
          if (iVar2 != 0) {
            bVar1 = false;
            break;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar5 + 0x1f;
        } while (iVar6 < *(int *)(param_1 + 0x14));
      }
      if (bVar1) {
        *(undefined4 *)(param_1 + 8) = 1;
        FUN_08943ad4(1,0);
      }
    }
  }
  return;
}

