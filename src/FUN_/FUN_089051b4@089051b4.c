#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089051b4(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  *(int *)(param_1 + 0x1c0) = param_2;
  memset_jak(param_1,0,0x60);
  memset_jak(param_1 + 0x60,0,0x40);
  memset_jak(param_1 + 0xa0,0,0x40);
  memset_jak(param_1 + 0xe0,0,0x40);
  memset_jak(param_1 + 0x120,0,0x40);
  memset_jak(param_1 + 0x160,0,0x40);
  uVar1 = FUN_089be054(DAT_08ac520c,(&PTR_DAT_08ac0040)[param_2]);
  iVar2 = FUN_089be1b8(DAT_08ac520c,(&PTR_DAT_08ac0040)[param_2]);
  if (iVar2 != 0) {
    if (*(int *)(param_1 + 0x1bc) == 0) {
      FUN_089d8634();
      uVar4 = FUN_089d81a4();
      FUN_089d816c(1);
      uVar3 = FUN_089d7d74(iVar2,0,0);
      FUN_089d816c(uVar4);
      FUN_089d866c();
      *(undefined4 *)(param_1 + 0x1bc) = uVar3;
      uVar4 = *(undefined4 *)(param_1 + 0x1bc);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x1bc);
    }
    memcpy_jak(uVar4,uVar1,iVar2);
    iVar6 = *(int *)(param_1 + 0x1bc);
    FUN_08908794(iVar6,iVar6,iVar2);
    *(int *)(param_1 + 0x1b8) = iVar6;
    FUN_08904d20(param_1 + 0x1a0,iVar6 + *(int *)(iVar6 + 4));
    FUN_089085ec(param_1 + 0x1ac,iVar6 + *(int *)(*(int *)(param_1 + 0x1b8) + 0xc));
    iVar5 = *(int *)(*(int *)(param_1 + 0x1b8) + 0x10);
    memset_jak(param_1,0,0x60);
    memset_jak(param_1 + 0x60,0,0x40);
    memset_jak(param_1 + 0xa0,0,0x40);
    memset_jak(param_1 + 0xe0,0,0x40);
    memset_jak(param_1 + 0x120,0,0x40);
    memset_jak(param_1 + 0x160,0,0x40);
    FUN_089087e0(iVar6 + iVar5,param_1,iVar2 - iVar5,0);
  }
  return;
}

