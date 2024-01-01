#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a5268(int param_1,undefined4 param_2,int param_3)

{
  float fVar1;
  int iVar2;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  FUN_088a3b10();
  fVar1 = (float)param_3;
  *(undefined **)(param_1 + 0x14) = &DAT_08af25c4;
  if (fVar1 < 0.0) {
    iVar2 = 0;
  }
  else if (5.0 < fVar1) {
    iVar2 = 5;
  }
  else {
    iVar2 = (int)fVar1;
  }
  iVar2 = *(int *)(&DAT_08a83ec8 + iVar2 * 4);
  *(int *)(param_1 + 0x350) = iVar2;
  if (iVar2 != 0) {
    FUN_088598a8(&local_60,*(undefined4 *)(param_1 + 0x350));
    local_50 = local_60;
    uStack_4c = uStack_5c;
    uStack_48 = uStack_58;
    uStack_44 = uStack_54;
    FUN_089e0460(param_1,&local_50,0);
  }
  iVar2 = FUN_0889da6c();
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x60) = 0x3d8f5c29;
    *(undefined4 *)(param_1 + 100) = 0x3ca3d70a;
    *(undefined4 *)(param_1 + 0x68) = 0x3e2e147b;
    *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x70) = 0x3ee66666;
    *(undefined4 *)(param_1 + 0x74) = 0x3ee66666;
    *(undefined4 *)(param_1 + 0x78) = 0x3f0ccccd;
    *(undefined4 *)(param_1 + 0x7c) = 0x3f800000;
  }
  return param_1;
}

