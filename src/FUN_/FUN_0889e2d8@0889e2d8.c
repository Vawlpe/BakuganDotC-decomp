#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889e2d8(int param_1,byte param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  (&DAT_08abd4ac)[param_1] = param_2;
  (&DAT_08abd4b0)[param_1] = param_4;
  if (param_2 < 5) {
    if (param_2 == 1) {
      FUN_089e02cc((&DAT_08abd4a0)[param_5],param_3,&LAB_0889d0f8);
      return;
    }
    if (param_2 == 2) {
      FUN_089e02cc((&DAT_08abd4a0)[param_5],param_3,&LAB_0889d124);
      return;
    }
    if (param_2 == 3) {
      FUN_089e02cc((&DAT_08abd4a0)[param_5],param_3,&LAB_0889d150);
      return;
    }
    if (param_2 != 4) {
      return;
    }
    FUN_089e02cc((&DAT_08abd4a0)[param_5],param_3,&LAB_0889d17c);
  }
  return;
}

