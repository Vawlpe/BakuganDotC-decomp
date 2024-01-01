#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a02e28(int param_1,uint param_2,uint param_3,code *param_4,int param_5,undefined4 param_6
                 ,undefined4 param_7,int param_8)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined auStack_d0 [112];
  int local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  int local_4c;
  code *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  uVar3 = 0;
  if (param_1 != 0) {
    local_3c = param_7;
    local_38 = param_6;
    FUN_08a02a08(auStack_d0,&local_60,0);
    local_44 = local_38;
    local_40 = local_3c;
    local_60 = param_1;
    local_58 = param_3;
    local_4c = param_5;
    local_48 = param_4;
    if (param_2 == 0xffffffff) {
      uVar3 = 0;
      if (param_8 != 0) {
        uVar3 = *(uint *)(param_1 - param_8);
        if (uVar3 != param_3 * ~((uint *)(param_1 - param_8))[1]) {
          local_5c = param_2;
          FUN_08a02fd8();
        }
      }
      param_2 = uVar3 / param_3;
    }
    local_5c = param_2;
    if (param_4 != (code *)0x0) {
      iVar1 = 0;
      iVar2 = param_1 + (param_2 - 1) * param_3;
      if (0 < (int)param_2) {
        do {
          local_54 = local_54 + 1;
          (*param_4)(iVar2,2);
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 - param_3;
        } while (iVar1 < (int)param_2);
      }
    }
    DAT_08af120c = (undefined4 *)*DAT_08af120c;
    if (param_5 != 0) {
      FUN_08a02a4c(param_1,uVar3,param_4,local_38,local_3c,param_8);
    }
  }
  return;
}

