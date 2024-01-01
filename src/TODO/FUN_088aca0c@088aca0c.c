#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088aca0c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_20;
  
  if (*(int *)(param_1 + 0x290) == 0) {
    iVar2 = *(int *)(param_1 + 0x130);
    local_40 = *(undefined4 *)(iVar2 + 0xb0);
    uStack_3c = *(undefined4 *)(iVar2 + 0xb4);
    uStack_38 = *(undefined4 *)(iVar2 + 0xb8);
    uStack_34 = *(undefined4 *)(iVar2 + 0xbc);
    FUN_088a8f2c(&local_50,&local_40,0x3fbf2100);
    local_40 = local_50;
    uStack_3c = uStack_4c;
    uStack_38 = uStack_48;
    uStack_34 = uStack_44;
    *(undefined4 *)(param_1 + 0x2a0) = local_50;
    *(undefined4 *)(param_1 + 0x2a4) = uStack_4c;
    *(undefined4 *)(param_1 + 0x2a8) = uStack_48;
    *(undefined4 *)(param_1 + 0x2ac) = uStack_44;
    *(float *)(param_1 + 0x2a4) = *(float *)(param_1 + 0x2a4) + 100.0;
    local_20 = 0;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar2 = FUN_089d7d74(0xa0,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    if (iVar2 != 0) {
      FUN_08889f7c(iVar2,param_1);
      local_20 = iVar2;
    }
    *(int *)(param_1 + 0x290) = local_20;
  }
  return;
}

