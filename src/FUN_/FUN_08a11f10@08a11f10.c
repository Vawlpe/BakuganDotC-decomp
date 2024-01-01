#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_08a11f10(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            ,int param_6,uint param_7,int param_8,int param_9,int param_10,undefined4 uStackX_8,
            undefined4 param_11,undefined4 param_12,undefined4 param_13,int param_14,
            undefined4 param_15)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_08a10200(param_15,0,0x10,param_13);
  FUN_08a10200(param_15,0,4,param_8 * param_9 * 4);
  if (param_14 == 0) {
    uVar1 = FUN_08a11e78(param_2);
    if (param_3 == 1) {
      param_7 = param_7 + 7 & 0xfffffff8;
    }
    iVar5 = 0;
    if (0 < param_9) {
      do {
        iVar4 = 0;
        if (0 < param_8) {
          do {
            iVar3 = 0;
            if (param_10 == 1) {
              iVar3 = iVar4;
            }
            uVar2 = FUN_08a11e90(uVar1,param_4,param_5,param_6 + 0xfU & 0xfffffff0,param_7,iVar3);
            iVar4 = iVar4 + 1;
            FUN_08a10200(param_15,param_11,param_12,uVar2);
          } while (param_8 != iVar4);
        }
        iVar5 = iVar5 + 1;
      } while (param_9 != iVar5);
      return 1;
    }
  }
  return 1;
}

