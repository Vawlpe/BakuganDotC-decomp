#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088df69c(int param_1,uint param_2)

{
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  int local_1c;
  undefined *local_18;
  int local_14;
  undefined *local_10;
  char **local_c;
  int local_8;
  
  local_c = &local_30;
  local_30 = "eye_shape_L__A3_BR";
  local_2c = "eye_shape_R__A3_BR";
  local_28 = "mayu_L__A3_BR_DE";
  local_24 = "mayu_R__A3_BR_DE";
  local_20 = "mouth__BR";
  *(uint *)(param_1 + 0x358) = param_2 & 0xff;
  local_8 = 0;
  local_14 = 0;
  local_10 = &LAB_088dbfd4;
  local_18 = &DAT_08a985b0;
  do {
    local_1c = param_1;
    FUN_089e02cc(param_1,*local_c,local_10,local_18 + *(int *)(param_1 + 0x358) * 0x28 + local_14);
    local_8 = local_8 + 1;
    local_c = local_c + 1;
    local_14 = local_14 + 8;
    param_1 = local_1c;
  } while (local_8 < 5);
  return;
}

