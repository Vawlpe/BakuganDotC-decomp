#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0886f654(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || (0x14 < param_1)) {
    strcpy(param_2,PTR_s_data_battle_trapbakugan__08aba8b4);
    uVar1 = *(undefined4 *)(&DAT_08ab0518 + param_1 * 4);
  }
  else {
    strcpy(param_2,PTR_s_data_battle_bakugan__08aba8b0);
    uVar1 = *(undefined4 *)(&DAT_08ab0518 + param_1 * 4);
  }
  strcat(param_2,uVar1);
  strcat(param_2,PTR_DAT_08aba918);
  return;
}

