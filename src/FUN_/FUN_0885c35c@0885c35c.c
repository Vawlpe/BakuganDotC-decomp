#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885c35c(int param_1)

{
  undefined auVar1 [16];
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_V7C;
  undefined local_50;
  undefined local_4f;
  undefined local_4e;
  undefined local_4d;
  short local_4c;
  undefined2 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int local_1c;
  
  if (*(int *)(param_1 + 8) != 0x15) {
    FUN_088706f0(param_1,0,0);
    return;
  }
  iVar5 = *(int *)(param_1 + 0x3cc);
  if (iVar5 < 2) {
    if (-1 < iVar5) {
      if (iVar5 < 1) {
        FUN_088608d8(0x3e4ccccd,param_1,0x120,1,0);
        *(undefined4 *)(param_1 + 0x3d0) = 0x14;
        *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x3d0) + -1;
        *(int *)(param_1 + 0x3d0) = iVar2;
        if (iVar2 < 1) {
          *(int *)(param_1 + 0x3cc) = iVar5 + 1;
        }
      }
      goto LAB_0885c570;
    }
    iVar5 = *(int *)(param_1 + 0x20c);
  }
  else {
    if (iVar5 < 3) {
      *(int *)(param_1 + 0x3cc) = iVar5 + 1;
      goto LAB_0885c570;
    }
    if (iVar5 < 4) {
      local_50 = 10;
      local_4f = 0;
      local_4e = 0;
      local_4d = 0;
      local_4c = 0x49;
      local_4a = 7;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0x41c80000;
      iVar2 = FUN_08860344(param_1);
      local_4c = 0x49;
      local_1c = 0;
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar4 = FUN_089d7d74(0x160,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      iVar5 = local_1c;
      if (iVar4 != 0) {
        FUN_08876d00(iVar4,param_1,(int)local_4c);
        iVar5 = iVar4;
      }
      if (iVar2 == 0) {
        uVar3 = vmul_s(*(undefined4 *)(param_1 + 0x34),in_V7C);
        auVar1 = vrot_q(uVar3,1,0,2,0);
        local_30 = auVar1._0_4_;
        uStack_2c = auVar1._4_4_;
        uStack_28 = auVar1._8_4_;
        uStack_24 = auVar1._12_4_;
        FUN_08877904(iVar5,0,&local_30,&local_50);
        iVar5 = *(int *)(param_1 + 0x3cc);
      }
      else {
        FUN_08877904(iVar5,0,0,&local_50);
        iVar5 = *(int *)(param_1 + 0x3cc);
      }
      *(int *)(param_1 + 0x3cc) = iVar5 + 1;
      goto LAB_0885c570;
    }
    iVar5 = *(int *)(param_1 + 0x20c);
  }
  *(undefined4 *)(iVar5 + 0x148) = 0;
  *(uint *)(iVar5 + 0x130) = *(uint *)(iVar5 + 0x130) & 0xfffffffe;
  FUN_088706f0(param_1,0,0);
LAB_0885c570:
  FUN_088718a4(param_1);
  return;
}

