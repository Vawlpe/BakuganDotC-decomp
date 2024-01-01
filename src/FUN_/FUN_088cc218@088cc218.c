#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 *
FUN_088cc218(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  puVar4 = (undefined4 *)FUN_089d7d74(0x220,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    FUN_088c93b0(puVar4);
  }
  FUN_088cb95c(puVar4,param_3);
  uVar2 = DAT_08b00f0c;
  uVar1 = DAT_08b00f08;
  uVar3 = DAT_08b00f04;
  if (param_2 == (undefined4 *)0x0) {
    iVar5 = puVar4[4];
    *(undefined4 *)(iVar5 + 0x60) = DAT_08b00f00;
    *(undefined4 *)(iVar5 + 100) = uVar3;
    *(undefined4 *)(iVar5 + 0x68) = uVar1;
    *(undefined4 *)(iVar5 + 0x6c) = uVar2;
    uVar2 = DAT_08b00f0c;
    uVar1 = DAT_08b00f08;
    uVar3 = DAT_08b00f04;
    puVar4[0x60] = DAT_08b00f00;
    puVar4[0x61] = uVar3;
    puVar4[0x62] = uVar1;
    puVar4[99] = uVar2;
  }
  else {
    iVar5 = puVar4[4];
    uVar3 = param_2[1];
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    *(undefined4 *)(iVar5 + 0x60) = *param_2;
    *(undefined4 *)(iVar5 + 100) = uVar3;
    *(undefined4 *)(iVar5 + 0x68) = uVar1;
    *(undefined4 *)(iVar5 + 0x6c) = uVar2;
    uVar3 = param_2[1];
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    puVar4[0x60] = *param_2;
    puVar4[0x61] = uVar3;
    puVar4[0x62] = uVar1;
    puVar4[99] = uVar2;
  }
  FUN_088cb950(puVar4,param_1);
  FUN_088cbe68(puVar4,param_3,param_4);
  *puVar4 = 0x1a4;
  FUN_089bfbf0(puVar4,0);
  return puVar4;
}

