#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088656b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != 0) {
    if (param_2 == 1) {
      iVar1 = FUN_0885fc80(param_1);
      iVar2 = param_1 + 0x250;
      if (iVar1 != 0) {
        FUN_08862b88(param_1,0x2001f5);
      }
      FUN_08824790(DAT_08ac5c70,0x232,iVar2,2);
      FUN_08824790(DAT_08ac5c70,0x233,iVar2,2);
      FUN_08824790(DAT_08ac5c70,0x234,iVar2,2);
    }
    if (param_2 == 2) {
      FUN_08824790(DAT_08ac5c70,0x236,param_1 + 0x250,2);
      FUN_08824790(DAT_08ac5c70,0x237,param_1 + 0x250,2);
    }
    if (param_2 == 3) {
      FUN_08824790(DAT_08ac5c70,0x29b,param_1 + 0x20,2);
    }
    if ((param_2 == 4) || (param_2 == 7)) {
      FUN_08824658(DAT_08ac5c70,0x53,param_1 + 0x20);
      FUN_08824790(DAT_08ac5c70,0x299,param_1 + 0x20,2);
    }
    if ((param_2 == 5) || (param_2 == 7)) {
      FUN_08824658(DAT_08ac5c70,0x55,param_1 + 0x20);
      FUN_08824790(DAT_08ac5c70,0x299,param_1 + 0x20,2);
    }
    if ((param_2 == 6) || (param_2 == 7)) {
      FUN_08824658(DAT_08ac5c70,0x54,param_1 + 0x20);
      FUN_08824790(DAT_08ac5c70,0x299,param_1 + 0x20,2);
    }
    return;
  }
  iVar1 = FUN_0885fc80(param_1);
  iVar2 = param_1 + 0x250;
  if (iVar1 != 0) {
    FUN_08862b88(param_1,0x2001f5);
  }
  param_1 = param_1 + 0x20;
  FUN_08824790(DAT_08ac5c70,0x29b,param_1,2);
  FUN_08824790(DAT_08ac5c70,0x232,iVar2,2);
  FUN_08824790(DAT_08ac5c70,0x233,iVar2,2);
  FUN_08824790(DAT_08ac5c70,0x234,iVar2,2);
  FUN_08824658(DAT_08ac5c70,0x53,param_1);
  FUN_08824790(DAT_08ac5c70,0x299,param_1,2);
  FUN_08824658(DAT_08ac5c70,0x55,param_1);
  FUN_08824790(DAT_08ac5c70,0x299,param_1,2);
  FUN_08824658(DAT_08ac5c70,0x54,param_1);
  FUN_08824790(DAT_08ac5c70,0x299,param_1,2);
  FUN_08824790(DAT_08ac5c70,0x236,iVar2,2);
  FUN_08824790(DAT_08ac5c70,0x237,iVar2,2);
  return;
}

