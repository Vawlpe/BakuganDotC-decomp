#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_08a24ae8(int param_1,int param_2,uint param_3,int param_4,uint param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 0;
  if ((param_2 != 0) && (param_4 != 0)) {
    if ((param_2 != param_1) && (((param_5 | 1) & param_3) != 0)) {
      uVar1 = FUN_08a25e20(param_2);
      uVar2 = 1;
      if ((int)param_3 < 0) {
        uVar2 = 2;
      }
      FUN_08a11f10(param_1,*(undefined2 *)(param_2 + 0x10),*(undefined *)(param_2 + 0x16),
                   *(undefined2 *)(param_2 + 0x12),*(undefined2 *)(param_2 + 0x14),uVar1,
                   *(undefined *)(param_2 + 0x19),*(undefined2 *)(param_2 + 0x24),
                   *(undefined2 *)(param_2 + 0x26),*(undefined *)(param_2 + 0x28),
                   *(undefined *)(param_2 + 0x29),uVar2,param_6,*(undefined2 *)(param_2 + 0x2a),0,
                   param_4);
      return 1;
    }
    uVar1 = 1;
  }
  return uVar1;
}

