#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a27fe0(undefined *param_1,undefined *param_2,int param_3,int param_4,byte param_5)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar7 = param_3 * 4 + 0xfU & 0xfffffff0;
  puVar2 = param_1 + uVar7 * (param_4 + -1);
  if (param_4 < 0) {
    param_4 = -param_4;
    uVar7 = -uVar7;
    puVar2 = param_1;
  }
  iVar6 = 0;
  if (0 < param_4) {
    do {
      if (0 < param_3) {
        iVar5 = 0;
        puVar3 = param_2;
        puVar4 = puVar2;
        do {
          iVar5 = iVar5 + 1;
          *puVar4 = puVar3[2];
          puVar4[1] = puVar3[1];
          puVar4[2] = *puVar3;
          pbVar1 = puVar3 + 3;
          puVar3 = puVar3 + 4;
          puVar4[3] = param_5 | *pbVar1;
          puVar4 = puVar4 + 4;
        } while (param_3 != iVar5);
      }
      param_2 = param_2 + param_3 * 4;
      puVar2 = puVar2 + -uVar7;
      iVar6 = iVar6 + 1;
    } while (param_4 != iVar6);
  }
  return;
}

