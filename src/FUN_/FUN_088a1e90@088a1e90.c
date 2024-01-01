#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a1e90(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x400,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar4 != 0) {
    local_40 = *param_1;
    uStack_3c = param_1[1];
    uStack_38 = param_1[2];
    uStack_34 = param_1[3];
    FUN_088a1a38(iVar4,&local_40);
    iVar5 = iVar4;
  }
  *(undefined4 *)(iVar5 + 0x204) = 800;
  *(undefined4 *)(iVar5 + 0x200) = 800;
  FUN_088aca0c(iVar5);
  param_1[1] = (float)param_1[1] + 400.0;
  uVar3 = param_1[1];
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  *(undefined4 *)(iVar5 + 0x2a0) = *param_1;
  *(undefined4 *)(iVar5 + 0x2a4) = uVar3;
  *(undefined4 *)(iVar5 + 0x2a8) = uVar1;
  *(undefined4 *)(iVar5 + 0x2ac) = uVar2;
  return iVar5;
}

