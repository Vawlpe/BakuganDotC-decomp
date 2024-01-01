#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885f2d0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af1fa4;
    iVar1 = *(int *)(param_1 + 8);
    if ((((iVar1 == 0xd) || (iVar1 == 10)) || (iVar1 == 8)) || (iVar1 == 0x14)) {
      iVar2 = 0;
      iVar1 = param_1;
      do {
        if (*(int *)(iVar1 + 0x41c) != 0) {
          FUN_089f5124(*(undefined4 *)(*(int *)(iVar1 + 0x41c) + 0x214));
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 4;
      } while (iVar2 < 4);
      iVar1 = *(int *)(param_1 + 0x200);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x200);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x168);
    }
    else {
      FUN_08885424(iVar1,3);
      *(undefined4 *)(param_1 + 0x200) = 0;
      iVar1 = *(int *)(param_1 + 0x168);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x164);
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x60) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x60) + 8),3);
      *(undefined4 *)(param_1 + 0x168) = 0;
      iVar1 = *(int *)(param_1 + 0x164);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x20c);
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x164) = 0;
      iVar1 = *(int *)(param_1 + 0x20c);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x208);
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x20c) = 0;
      iVar1 = *(int *)(param_1 + 0x208);
    }
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x208) = 0;
    }
    FUN_089de910(param_1);
    iVar1 = *(int *)(param_1 + 0x554);
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x204);
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x554) = 0;
      iVar1 = *(int *)(param_1 + 0x204);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x2f0);
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x20) + 8),3);
      *(undefined4 *)(param_1 + 0x204) = 0;
      iVar1 = *(int *)(param_1 + 0x2f0);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x2f4);
    }
    else {
      FUN_0882a2d0(iVar1,3);
      *(undefined4 *)(param_1 + 0x2f0) = 0;
      iVar1 = *(int *)(param_1 + 0x2f4);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x170);
    }
    else {
      (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
      *(undefined4 *)(param_1 + 0x2f4) = 0;
      iVar1 = *(int *)(param_1 + 0x170);
    }
    if (iVar1 != 0) {
      FUN_08854d44();
    }
    FUN_08886738(param_1 + 0x434,2);
    FUN_089de34c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

