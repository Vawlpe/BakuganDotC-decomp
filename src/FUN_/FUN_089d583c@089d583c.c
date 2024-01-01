#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d583c(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[0xd];
    if (iVar1 == 0) {
      piVar2 = (int *)param_1[1];
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[0xd] = 0;
      piVar2 = (int *)param_1[1];
    }
    iVar1 = *piVar2;
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *(undefined4 *)param_1[1] = 0;
    }
    FUN_089d7a58(param_1[0xc]);
    FUN_089d7a58(param_1[0xb]);
    iVar1 = param_1[9];
    if (iVar1 == 0) {
      iVar1 = param_1[4];
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[9] = 0;
      iVar1 = param_1[4];
    }
    if (iVar1 == 0) {
      iVar1 = param_1[3];
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[4] = 0;
      iVar1 = param_1[3];
    }
    if (iVar1 == 0) {
      iVar1 = param_1[2];
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[3] = 0;
      iVar1 = param_1[2];
    }
    if (iVar1 == 0) {
      iVar1 = param_1[1];
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[2] = 0;
      iVar1 = param_1[1];
    }
    if (iVar1 == 0) {
      iVar1 = *param_1;
    }
    else {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      param_1[1] = 0;
      iVar1 = *param_1;
    }
    if (iVar1 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar1,0,0);
      FUN_089d866c();
      *param_1 = 0;
    }
    zz_sceMpegFinish();
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

