#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089049c8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  memset_jak(param_1,0,0x60);
  memset_jak(param_1 + 0x60,0,0x40);
  memset_jak(param_1 + 0xa0,0,0x40);
  memset_jak(param_1 + 0xe0,0,0x40);
  memset_jak(param_1 + 0x120,0,0x40);
  memset_jak(param_1 + 0x160,0,0x40);
  uVar1 = FUN_089be054(DAT_08ac520c,(&PTR_s_stage_cam_japan_1_MAF_08abff88)[param_2]);
  iVar2 = FUN_089be1b8(DAT_08ac520c,(&PTR_s_stage_cam_japan_1_MAF_08abff88)[param_2]);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1a0) == 0) {
      FUN_089d8634();
      uVar4 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar3 = FUN_089d7d74(iVar2,0,0);
      FUN_089d816c(uVar4);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x1a0) = uVar3;
      uVar4 = *(undefined4 *)(param_1 + 0x1a0);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x1a0);
    }
    memcpy_jak(uVar4,uVar1,iVar2);
    uVar1 = *(undefined4 *)(param_1 + 0x1a0);
    FUN_08908794(uVar1,uVar1,iVar2);
    memset_jak(param_1,0,0x60);
    memset_jak(param_1 + 0x60,0,0x40);
    memset_jak(param_1 + 0xa0,0,0x40);
    memset_jak(param_1 + 0xe0,0,0x40);
    memset_jak(param_1 + 0x120,0,0x40);
    memset_jak(param_1 + 0x160,0,0x40);
    FUN_089087e0(uVar1,param_1,iVar2,1);
  }
  return;
}

