#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c3f70(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_089bb728(param_1[1]);
  iVar2 = param_1[10];
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      if (*(char *)(param_1 + 0x31) == '\0') {
        iVar2 = FUN_089c4814(*param_1);
        if (iVar2 == 0) {
          param_1[10] = param_1[10] + 1;
        }
        else {
          uVar1 = FUN_089c487c(*param_1);
          iVar2 = FUN_089c4ef8(uVar1,1);
          if (iVar2 == 0) {
            uVar1 = FUN_089c487c(*param_1);
            iVar2 = FUN_089c4ef8(uVar1,0);
            if (iVar2 != 0) {
              if (*param_1 == 0) {
                uVar1 = FUN_089c487c();
                FUN_089c4dd8(0,0x3f000000,uVar1);
              }
              else {
                uVar1 = FUN_089c487c();
                FUN_089c4f6c(uVar1,0);
                uVar1 = FUN_089c487c(*param_1);
                FUN_089c4c9c(uVar1);
                param_1[10] = param_1[10] + 1;
              }
            }
          }
          else {
            uVar1 = FUN_089c487c(*param_1);
            FUN_089c4f6c(uVar1,0);
            uVar1 = FUN_089c487c(*param_1);
            FUN_089c4c9c(uVar1);
            param_1[10] = param_1[10] + 1;
          }
        }
      }
      else if (*(char *)((int)param_1 + 0xc6) != '\0') {
        param_1[10] = iVar2 + 1;
      }
      goto LAB_089c4198;
    }
    iVar2 = param_1[8];
  }
  else {
    if (iVar2 < 2) {
      if (-1 < param_1[0x2b]) {
        zz_sceAtracReleaseAtracID();
      }
      param_1[0x2b] = -1;
      if (param_1[2] != 0) {
        uVar1 = FUN_089fce94();
        FUN_089fd4a0(uVar1,param_1 + 2,param_1[2]);
        param_1[2] = 0;
        if (*(char *)((int)param_1 + 0x15) == '\0') {
          if (*(char *)(param_1 + 5) == '\0') {
            param_1[3] = 0;
          }
          else {
            param_1[3] = 1;
          }
        }
      }
      param_1[10] = param_1[10] + 1;
      goto LAB_089c4198;
    }
    iVar2 = param_1[8];
  }
  if ((iVar2 < 1) || (2 < iVar2)) {
    param_1[9] = 0;
    param_1[0x2c] = -1;
    if (*(char *)((int)param_1 + 0x1b) != '\0') {
      *(undefined *)((int)param_1 + 0x1b) = 0;
      if (param_1[0x2d] != -1) {
        param_1[8] = 2;
        param_1[9] = 2;
        param_1[0x2c] = param_1[0x2d];
        uVar1 = FUN_089c2b60();
        strncpy(param_1 + 0xb,uVar1,0x80);
      }
    }
  }
  else {
    param_1[9] = 2;
  }
  param_1[10] = 0;
LAB_089c4198:
  FUN_089bb790(param_1[1]);
  return;
}

