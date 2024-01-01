#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a02aa8(int param_1,uint param_2,int param_3,int param_4,code *param_5,int param_6,
                code *param_7,undefined4 param_8,undefined4 param_9,int param_10,
                undefined4 uStackX_8,int param_11)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined auStack_d0 [112];
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  uint local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_34;
  
  local_3c = param_9;
  bVar1 = param_1 == 0;
  local_38 = (uint)(param_6 != 0 || bVar1);
  local_34 = param_8;
  if ((param_1 == 0) || (param_10 != 0)) {
    if (param_1 == 0) {
      iVar2 = param_11 + param_2 * param_3;
      if (param_7 == (code *)0x0) {
        param_1 = FUN_08a03038(iVar2);
      }
      else {
        param_1 = (*param_7)(iVar2);
      }
      if (param_1 != 0) {
        param_1 = param_1 + param_11;
      }
      if (param_1 == 0) {
        return 0;
      }
    }
    if (param_11 != 0) {
      *(int *)(param_1 - param_11) = param_2 * param_3;
      ((int *)(param_1 - param_11))[1] = ~param_2;
    }
  }
  if (local_38 != 0) {
    FUN_08a02a08(auStack_d0,&local_60,1);
    local_44 = local_34;
    local_40 = local_3c;
    local_60 = param_1;
    local_5c = param_2;
    local_58 = param_3;
    local_4c = (uint)bVar1;
    local_48 = param_6;
  }
  if ((param_5 != (code *)0x0) && (iVar3 = 0, iVar2 = param_1, 0 < (int)param_2)) {
    do {
      if (param_4 == 0) {
        (*param_5)(iVar2,0,0,0,0,0,0,0,0);
      }
      else {
        (*param_5)(iVar2,param_4);
      }
      if (param_6 != 0) {
        local_54 = local_54 + 1;
      }
      if (param_4 != 0) {
        param_4 = param_4 + param_3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + param_3;
    } while (iVar3 < (int)param_2);
  }
  if (local_38 != 0) {
    DAT_08af120c = (undefined4 *)*DAT_08af120c;
  }
  return param_1;
}

