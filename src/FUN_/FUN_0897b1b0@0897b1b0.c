#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x0897b23c)

void FUN_0897b1b0(int param_1,byte param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined local_110 [64];
  undefined4 auStack_d0 [33];
  undefined auStack_4c [52];
  
  memcpy_jak(auStack_d0,&PTR_s_00_P_Dragonoid_N_P_gmo_08ac3574,0x84);
  memcpy_jak(auStack_4c,&PTR_s_00_M_Dragonoid_N_P_fencer2_gmo_08ac35f8,0x34);
  memset_jak(local_110,0,0x40);
  puVar4 = local_110 + (param_3 & 0xff) * 4;
  if (param_2 < 2) {
    FUN_089b4c84(local_110,auStack_d0[param_3 & 0xff]);
  }
  else {
    iVar1 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1));
    if (iVar1 == 0) {
      FUN_089b4c84(local_110,*(undefined4 *)(puVar4 + 0xc4));
    }
    else {
      FUN_089b4c84(local_110,*(undefined4 *)(puVar4 + 0x40));
    }
  }
  uVar2 = 0;
  do {
    puVar4 = local_110 + uVar2;
    puVar3 = (undefined *)(uVar2 + param_4);
    uVar2 = uVar2 + 1;
    *puVar3 = *puVar4;
  } while (uVar2 < 0x40);
  return;
}

