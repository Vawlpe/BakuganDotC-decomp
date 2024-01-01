#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892c818(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined local_b0 [64];
  undefined4 auStack_70 [22];
  
  puVar3 = local_b0;
  memcpy_jak(local_b0 + 0x40,&PTR_s_00_dor_stay_sel_08ac193c,0x58);
  memset_jak(local_b0,0,0x40);
  FUN_089b4c84(local_b0,*(undefined4 *)(local_b0 + (param_1 & 0xff) * 4 + 0x40));
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    *(undefined *)(uVar1 + param_2) = *puVar3;
    puVar3 = local_b0 + uVar1 + 1;
    uVar1 = uVar2;
  } while (uVar2 < 0x40);
  return;
}

