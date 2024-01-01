#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

float FUN_088874d8(int param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = 20.0;
  iVar1 = FUN_08887028(param_1,param_3);
  if (iVar1 != -1) {
    if (param_4 == 0) {
      iVar1 = FUN_08887220(param_1,param_3,1);
    }
    else {
      iVar1 = FUN_08887220(param_1,param_3,0);
    }
    fVar6 = (float)iVar1;
  }
  if (param_3 == 0xb9) {
    fVar6 = 0.0;
  }
  else if (param_3 == 0xb4) {
    iVar1 = FUN_088872e4(param_1,0x17);
    fVar6 = (float)iVar1;
  }
  else if (param_3 == 0xb3) {
    iVar1 = FUN_088872e4(param_1,0x16);
    fVar6 = (float)iVar1;
  }
  else if (param_3 == 0x93) {
    fVar6 = 40.0;
  }
  else if (param_3 == 0x87) {
    fVar6 = 66.0;
  }
  else if (param_3 == 0x86) {
    fVar6 = 3.0;
  }
  else if (param_3 == 0x53) {
    fVar6 = 25.0;
  }
  else if (param_3 == 0x48) {
    fVar6 = 6.0;
  }
  if ((0xb4 < param_3) && (param_3 < 0xb8)) {
    iVar1 = FUN_088872e4(param_1,0x18);
    fVar6 = (float)iVar1;
  }
  fVar4 = (float)FUN_08887350(param_1 + 0x434);
  iVar1 = 6;
  if (param_1 != 0) {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0x54))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x50));
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 100))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x60));
      if (iVar2 == 0) {
        iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
                          (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
        if (iVar2 != 0) {
          iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
        }
        goto LAB_088876d4;
      }
      pcVar3 = *(char **)(param_1 + 0x4bc);
    }
    else {
      pcVar3 = *(char **)(param_1 + 0x4bc);
    }
    iVar1 = (int)*pcVar3;
  }
LAB_088876d4:
  fVar5 = (float)FUN_0888746c(0,iVar1,param_4,param_5);
  return fVar6 * fVar4 * fVar5;
}

