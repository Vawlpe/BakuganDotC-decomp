#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d462c(float *param_1,int param_2)

{
  float local_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  
  if (param_2 == 0) {
    FUN_088d8f60(&local_50,DAT_08abefb8);
    if (((local_50 != 0.0) || (fStack_4c != 0.0)) || (fStack_48 != 0.0)) {
      *param_1 = local_50;
      param_1[1] = fStack_4c;
      param_1[2] = fStack_48;
      param_1[3] = fStack_44;
      return;
    }
    param_1[2] = 0.0;
  }
  else {
    FUN_088b2ac0(&local_40,DAT_08abefb8 + 0xce);
    if (((local_40 != 0.0) || (fStack_3c != 0.0)) || (fStack_38 != 0.0)) {
      *param_1 = local_40;
      param_1[1] = fStack_3c;
      param_1[2] = fStack_38;
      param_1[3] = fStack_34;
      return;
    }
    param_1[2] = 0.0;
  }
  param_1[1] = 0.0;
  *param_1 = 0.0;
  param_1[3] = 0.0;
  return;
}

