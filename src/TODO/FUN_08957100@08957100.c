#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08957100(int param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  float local_38;
  float local_34;
  int local_28;
  
  local_28 = 0;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x140,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar7 = param_1 + (param_2 & 0xff) * 4;
  iVar5 = local_28;
  if (iVar4 != 0) {
    FUN_089de2e4(iVar4,"menu_daiza.gmo",0);
    iVar5 = iVar4;
  }
  *(int *)(iVar7 + 0x4d18) = iVar5;
  local_50 = 0x3f19999a;
  local_4c = 0x3f19999a;
  local_48 = 0x3f19999a;
  local_44 = 0x3f800000;
  FUN_089e0344(0x41000000,iVar5,&local_50,0);
  if (*(char *)(param_1 + 0x4cda) < '\x03') {
    iVar5 = *(int *)(*(int *)(iVar7 + 0x4d18) + 0x130);
    *(undefined4 *)(iVar5 + 0xa8) = 0x3ee66666;
    *(undefined4 *)(iVar5 + 0x94) = 0x3ee66666;
    *(undefined4 *)(iVar5 + 0x80) = 0x3ee66666;
  }
  else {
    iVar5 = *(int *)(*(int *)(iVar7 + 0x4d18) + 0x130);
    *(undefined4 *)(iVar5 + 0xa8) = 0x3e99999a;
    *(undefined4 *)(iVar5 + 0x94) = 0x3e99999a;
    *(undefined4 *)(iVar5 + 0x80) = 0x3e99999a;
  }
  FUN_08957078(&local_38,param_1,param_2 & 0xff);
  pfVar6 = (float *)(*(int *)(iVar7 + 0x4d18) + 0x20);
  *pfVar6 = *pfVar6 + local_38;
  pfVar6 = (float *)(*(int *)(iVar7 + 0x4d18) + 0x24);
  *pfVar6 = *pfVar6 + local_34;
  iVar5 = *(int *)(iVar7 + 0x4d18);
  iVar4 = *(int *)(iVar5 + 0x130);
  uVar3 = *(undefined4 *)(iVar5 + 0x24);
  uVar1 = *(undefined4 *)(iVar5 + 0x28);
  uVar2 = *(undefined4 *)(iVar5 + 0x2c);
  *(undefined4 *)(iVar4 + 0xb0) = *(undefined4 *)(iVar5 + 0x20);
  *(undefined4 *)(iVar4 + 0xb4) = uVar3;
  *(undefined4 *)(iVar4 + 0xb8) = uVar1;
  *(undefined4 *)(iVar4 + 0xbc) = uVar2;
  *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x4d18) + 0x130) + 0xbc) = 0x3f800000;
  return;
}

