#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088931b8(int param_1,undefined (*param_2) [12])

{
  undefined auVar1 [12];
  int iVar2;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar2 = *(int *)(param_1 + 0x1a0);
  local_60 = *(undefined4 *)*(undefined (*) [12])(iVar2 + 0x20);
  uStack_5c = *(undefined4 *)(iVar2 + 0x24);
  uStack_58 = *(undefined4 *)(iVar2 + 0x28);
  uStack_54 = *(undefined4 *)(iVar2 + 0x2c);
  uStack_44 = *(undefined4 *)param_2[1];
  auVar1 = vsub_t(*param_2,*(undefined (*) [12])(iVar2 + 0x20));
  local_50 = auVar1._0_4_;
  uStack_4c = auVar1._4_4_;
  uStack_48 = auVar1._8_4_;
  local_40 = local_60;
  uStack_3c = uStack_5c;
  uStack_38 = uStack_58;
  uStack_34 = uStack_54;
  local_30 = local_50;
  uStack_2c = uStack_4c;
  uStack_28 = uStack_48;
  uStack_24 = uStack_44;
  FUN_0888ec9c(param_1,&local_60,&local_50,0);
  return 1;
}

