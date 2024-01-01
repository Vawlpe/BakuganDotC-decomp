#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088564ac(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_30;
  float local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  FUN_088b3260(&local_30,param_1);
  local_2c = local_2c + 100.0;
  FUN_0889d57c(&local_30,&local_30);
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x150,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  puVar5 = (undefined4 *)0x20;
  iVar6 = 0;
  if (iVar4 != 0) {
    FUN_088a3594(iVar4,"fz_crystal01_stand_60.gmo");
    puVar5 = (undefined4 *)(iVar4 + 0x20);
    iVar6 = iVar4;
  }
  *puVar5 = local_30;
  puVar5[1] = local_2c;
  puVar5[2] = uStack_28;
  puVar5[3] = uStack_24;
  iVar4 = *(int *)(iVar6 + 0x130);
  uVar3 = puVar5[1];
  uVar1 = puVar5[2];
  uVar2 = puVar5[3];
  *(undefined4 *)(iVar4 + 0xb0) = *puVar5;
  *(undefined4 *)(iVar4 + 0xb4) = uVar3;
  *(undefined4 *)(iVar4 + 0xb8) = uVar1;
  *(undefined4 *)(iVar4 + 0xbc) = uVar2;
  FUN_089d8984(iVar6,DAT_08aba7a8);
  FUN_088a3898(iVar6);
  return iVar6;
}

