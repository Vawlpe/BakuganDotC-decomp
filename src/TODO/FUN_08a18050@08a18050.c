#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a18050(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    puVar4 = &DAT_08aa5240;
    puVar5 = &DAT_08afced0;
    do {
      uVar1 = puVar4[1];
      uVar2 = puVar4[2];
      uVar3 = puVar4[3];
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 4;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5 = puVar5 + 4;
    } while (puVar4 != &DAT_08aa5280);
    if (param_2 == (undefined4 *)0x0) goto LAB_08a1811c;
    DAT_08afcecc = param_2[3];
  }
  else {
    puVar4 = param_1 + 0x10;
    puVar5 = &DAT_08afced0;
    do {
      uVar1 = param_1[1];
      uVar2 = param_1[2];
      uVar3 = param_1[3];
      *puVar5 = *param_1;
      param_1 = param_1 + 4;
      puVar5[1] = uVar1;
      puVar5[2] = uVar2;
      puVar5[3] = uVar3;
      puVar5 = puVar5 + 4;
    } while (param_1 != puVar4);
    if (param_2 == (undefined4 *)0x0) {
LAB_08a1811c:
      DAT_08afcecc = 0x3f800000;
      DAT_08afcec4 = 0x3f800000;
      DAT_08afcec8 = 0x3f800000;
      DAT_08afcec0 = 0x3f800000;
      FUN_089db124(&LAB_08a18154);
      return;
    }
    DAT_08afcecc = param_2[3];
  }
  DAT_08afcec4 = param_2[1];
  DAT_08afcec8 = param_2[2];
  DAT_08afcec0 = *param_2;
  FUN_089db124(&LAB_08a18154);
  return;
}

