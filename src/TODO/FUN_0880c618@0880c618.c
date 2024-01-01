#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880c618(int param_1,undefined4 param_2)

{
  **(undefined4 **)(param_1 + 8) = param_2;
  switch(param_2) {
  case 2:
    PTR_PTR_DAT_08aae714 = (undefined *)&PTR_DAT_08aae42c;
    break;
  case 3:
    PTR_PTR_DAT_08aae714 = (undefined *)&PTR_DAT_08aae4a8;
    break;
  case 4:
    PTR_PTR_DAT_08aae714 = (undefined *)&PTR_DAT_08aae524;
    break;
  case 5:
    PTR_PTR_DAT_08aae714 = (undefined *)&PTR_DAT_08aae5a0;
    break;
  case 6:
    PTR_PTR_DAT_08aae714 = (undefined *)&PTR_DAT_08aae61c;
    break;
  default:
    PTR_PTR_DAT_08aae714 = (undefined *)&PTR_DAT_08aae3b0;
    break;
  case 0xc:
    PTR_PTR_DAT_08aae714 = (undefined *)&PTR_DAT_08aae698;
  }
  FUN_089ce6c8(WeirdBuff,param_2);
  return;
}

