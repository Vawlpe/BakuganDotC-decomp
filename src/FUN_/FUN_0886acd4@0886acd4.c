#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0886acd4(int param_1,uint param_2)

{
  char cVar1;
  short sVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  
  uVar7 = 0xffffffff;
  puVar3 = (uint *)FUN_0886ac78();
  *(uint *)(param_1 + 0x5bc) = param_2;
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x5d0) = 0;
  if (param_2 < 5) {
    if (param_2 == 1) {
      uVar7 = (uint)*(short *)((int)puVar3 + 6);
    }
    else {
      if (param_2 == 2) {
        sVar2 = *(short *)(puVar3 + 2);
      }
      else {
        if (param_2 == 3) {
          uVar7 = (uint)*(short *)((int)puVar3 + 10);
          goto LAB_0886add4;
        }
        if (param_2 == 4) {
          uVar7 = (*(short *)((int)puVar3 + 10) + 1) * 0x10000 >> 0x10;
          iVar4 = FUN_08862c8c(param_1,uVar7);
          if (iVar4 == 0) {
            uVar7 = (uint)*(short *)((int)puVar3 + 10);
          }
          goto LAB_0886add4;
        }
        uVar7 = (uint)*(short *)(puVar3 + 1);
        if (uVar7 != 0xffffffff) goto LAB_0886add4;
        if ((*puVar3 & 0x100) != 0) {
          param_2 = 1;
          *(undefined4 *)(param_1 + 0x5bc) = 1;
          uVar7 = (uint)*(short *)((int)puVar3 + 6);
          goto LAB_0886add4;
        }
        *(undefined4 *)(param_1 + 0x5bc) = 2;
        sVar2 = *(short *)(puVar3 + 2);
      }
      uVar7 = (uint)sVar2;
      if (uVar7 != 0xffffffff) {
        uVar7 = (int)*(short *)(puVar3 + 2) & 0xfff;
        *(uint *)(param_1 + 0x5d0) = ((int)*(short *)(puVar3 + 2) & 0xf000U) >> 0xc;
      }
    }
  }
LAB_0886add4:
  if (uVar7 == 0xffffffff) {
    return 0;
  }
  uVar5 = 0;
  if ((param_2 == 1) || (0 < *(int *)(param_1 + 0x5d0))) {
    uVar5 = 1;
    cVar1 = *(char *)(param_1 + 0xb0);
  }
  else {
    cVar1 = *(char *)(param_1 + 0xb0);
  }
  if (cVar1 == '\0') {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x3cf5c28f;
  }
  FUN_088608d8(uVar6,param_1,uVar7,uVar5,1);
  return 1;
}

