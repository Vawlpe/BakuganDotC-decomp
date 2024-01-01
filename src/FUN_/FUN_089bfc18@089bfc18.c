#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_089bfc18(undefined4 *param_1,undefined (*param_2) [12],undefined (*param_3) [12],
            undefined4 *param_4)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined *local_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_80 = *param_1;
  local_7c = param_1[1];
  local_78 = param_1[2];
  local_74 = 0;
  local_70 = *(undefined4 *)*param_2;
  local_6c = *(undefined4 *)(*param_2 + 4);
  local_68 = *(undefined4 *)(*param_2 + 8);
  local_64 = 0;
  local_60 = *(undefined4 *)*param_3;
  local_5c = *(undefined4 *)(*param_3 + 4);
  local_58 = *(undefined4 *)(*param_3 + 8);
  local_54 = 0;
  local_4c = &DAT_08af5564;
  local_50 = 2;
  auVar1 = vsub_t(*param_3,*param_2);
  local_30 = auVar1._0_4_;
  uStack_2c = auVar1._4_4_;
  uStack_28 = auVar1._8_4_;
  uStack_24 = 0;
  uStack_34 = 0;
  local_40 = local_70;
  uStack_3c = local_6c;
  uStack_38 = local_68;
  uVar2 = FUN_089e8750(&local_50,&local_80);
  if (param_4 != (undefined4 *)0x0) {
    uVar3 = FUN_089e8edc(&local_50,&local_80);
    *param_4 = uVar3;
  }
  return uVar2;
}

