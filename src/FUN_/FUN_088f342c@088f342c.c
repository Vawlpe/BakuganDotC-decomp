#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f342c(undefined4 *param_1,int param_2,char param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_2 < 1) {
    if (-1 < param_2) {
      param_1[6] = param_1[3];
      param_1[7] = param_1[4];
      param_1[8] = param_1[5];
      *param_1 = param_1[3];
      param_1[1] = param_1[4];
      param_1[2] = param_1[5];
    }
  }
  else if (param_2 < 2) {
    *(undefined2 *)(param_1 + 0xf) = *(undefined2 *)((int)param_1 + 0x36);
    *(undefined2 *)((int)param_1 + 0x3e) = *(undefined2 *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)((int)param_1 + 0x3a);
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)((int)param_1 + 0x36);
    *(undefined2 *)((int)param_1 + 0x32) = *(undefined2 *)(param_1 + 0xe);
    *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)((int)param_1 + 0x3a);
  }
  if (param_3 != '\0') {
    if (param_2 < 1) {
      if (-1 < param_2) {
        puVar4 = (undefined4 *)param_1[0x12];
        uVar6 = param_1[1];
        uVar3 = param_1[2];
        *puVar4 = *param_1;
        puVar4[1] = uVar6;
        puVar4[2] = uVar3;
        return;
      }
    }
    else if (param_2 < 2) {
      iVar5 = param_1[0x12];
      uVar1 = *(undefined2 *)((int)param_1 + 0x32);
      uVar2 = *(undefined2 *)(param_1 + 0xd);
      *(undefined2 *)(iVar5 + 0xc) = *(undefined2 *)(param_1 + 0xc);
      *(undefined2 *)(iVar5 + 0xe) = uVar1;
      *(undefined2 *)(iVar5 + 0x10) = uVar2;
      *(undefined2 *)(param_1[0x12] + 0x2c) = *(undefined2 *)((int)param_1 + 0x32);
    }
  }
  return;
}

