#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898c230(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined local_a0 [64];
  undefined4 auStack_60 [21];
  
  puVar3 = local_a0;
  memcpy_jak(local_a0 + 0x40,&PTR_s_00_P_Dragonoid_N_U_figure_gmo_08ac3a30,0x54);
  memset_jak(local_a0,0,0x40);
  FUN_089b4c84(local_a0,*(undefined4 *)(local_a0 + (param_3 & 0xff) * 4 + 0x40));
  uVar1 = 0;
  do {
    uVar2 = uVar1 + 1;
    *(undefined *)(uVar1 + param_4) = *puVar3;
    puVar3 = local_a0 + uVar1 + 1;
    uVar1 = uVar2;
  } while (uVar2 < 0x40);
  return;
}

