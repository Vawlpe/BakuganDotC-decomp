#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08877060(int param_1,int param_2,undefined4 *param_3,byte param_4,byte param_5)

{
  undefined4 uVar1;
  
  if (param_2 != -1) {
    if ((DAT_08aba978 != param_2) || (DAT_08aba974 + 1 < DAT_08aba784)) {
      DAT_08aba974 = DAT_08aba784;
      DAT_08aba978 = param_2;
      if ((param_4 | param_5) == 0) {
        if (param_3 == (undefined4 *)0x0) {
          uVar1 = FUN_089bfff0();
          FUN_089c00c4(uVar1,param_2,param_1 + 0x60,0,1);
        }
        else {
          uVar1 = FUN_089bfff0();
          FUN_089c00c4(uVar1,param_2,param_3,0,1);
        }
      }
      else {
        if (param_3 == (undefined4 *)0x0) {
          FUN_089c1f1c(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                       *(undefined4 *)(param_1 + 0x68),DAT_08b00924);
        }
        else {
          FUN_089c1f1c(*param_3,param_3[1],param_3[2],DAT_08b00924);
        }
        FUN_089c1f8c(DAT_08b00924,param_2,param_4,param_5);
      }
    }
  }
  return;
}

