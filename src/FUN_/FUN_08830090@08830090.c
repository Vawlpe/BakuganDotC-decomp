#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08830090(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar3 = FUN_0882c548();
  if (iVar3 == 0) {
    return;
  }
  iVar4 = *(int *)(param_1 + 0xac0);
  iVar6 = (int)*(float *)(iVar3 + 0x188);
  *(int *)(param_1 + 0xac0) = iVar6;
  if ((iVar4 != 0) && (iVar6 == 0)) {
    *(undefined4 *)(param_1 + 0xabc) = 0;
    FUN_0882fffc(param_1,2,1);
    uVar8 = 0;
    FUN_0883003c(0,param_1,2);
    FUN_0883003c(uVar8,param_1,3);
    iVar3 = FUN_089c59d4();
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xacc) = 0;
    }
    else {
      uVar8 = FUN_089c59f0();
      FUN_089c6588(uVar8,*(undefined4 *)(param_1 + 0xac4));
      *(undefined4 *)(param_1 + 0xacc) = 0;
    }
    *(undefined *)(param_1 + 0xae2) = 0;
    *(undefined *)(param_1 + 0xae3) = 0;
    return;
  }
  if (iVar6 == 0) {
    return;
  }
  if (iVar6 < 0xf) {
    iVar4 = *(int *)(param_1 + 0xabc);
  }
  else if (*(char *)(param_1 + 0xae2) == '\0') {
    uVar8 = FUN_089c59f0();
    iVar4 = FUN_089c6914(uVar8,0x20012d);
    if (iVar4 == 0) {
      uVar8 = FUN_089c59f0();
      uVar8 = FUN_089c6350(uVar8,0x200130,0,0);
      *(undefined4 *)(param_1 + 0xac4) = uVar8;
    }
    *(undefined *)(param_1 + 0xae2) = 1;
    iVar4 = *(int *)(param_1 + 0xabc);
  }
  else {
    iVar4 = *(int *)(param_1 + 0xabc);
  }
  if (iVar4 < 2) {
    if (iVar4 < 0) {
      return;
    }
    if (iVar4 < 1) {
      FUN_0883003c(0x3f800000,param_1,1);
      FUN_0882fffc(param_1,0,2);
      FUN_0883003c(0,param_1,2);
      FUN_0882fffc(param_1,0,3);
      FUN_0883003c(0,param_1,3);
      *(int *)(param_1 + 0xabc) = *(int *)(param_1 + 0xabc) + 1;
      fVar7 = *(float *)(iVar3 + 0x188);
    }
    else {
      fVar7 = *(float *)(iVar3 + 0x188);
    }
    if (fVar7 < 100.0) {
      FUN_089f88c0(*(undefined4 *)(*(int *)(param_1 + 0xa8c) + 4),
                   (int)((float)iVar6 * *(float *)(param_1 + 0xaa8) +
                        (float)*(int *)(param_1 + 0xaa0)));
      local_50 = 0x3f800000;
      local_4c = 0x3f800000;
      local_48 = 0x3f800000;
      local_44 = 0x3f800000;
      local_40 = 0x3f800000;
      local_3c = 0x3dcccccd;
      local_38 = 0x3e4ccccd;
      local_34 = 0x3f800000;
      puVar5 = &local_50;
      FUN_08a2985c((float)iVar6 * 0.01,puVar5,&local_60,&local_40);
      *puVar5 = local_60;
      puVar5[1] = uStack_5c;
      puVar5[2] = uStack_58;
      puVar5[3] = uStack_54;
      iVar3 = *(int *)(*(int *)(param_1 + 0xa8c) + 4);
      uVar8 = puVar5[1];
      uVar1 = puVar5[2];
      uVar2 = puVar5[3];
      *(undefined4 *)(iVar3 + 0xa0) = *puVar5;
      *(undefined4 *)(iVar3 + 0xa4) = uVar8;
      *(undefined4 *)(iVar3 + 0xa8) = uVar1;
      *(undefined4 *)(iVar3 + 0xac) = uVar2;
      return;
    }
    iVar4 = FUN_089c59d4();
    if (iVar4 != 0) {
      uVar8 = FUN_089c59f0();
      FUN_089c6350(uVar8,0x20012e,0,0);
    }
    FUN_088243d8(DAT_08ac5c70,0x83,iVar3 + 0x20);
    uVar8 = (**(code **)(*(int *)(iVar3 + 0x14) + 0xa4))
                      (iVar3 + *(short *)(*(int *)(iVar3 + 0x14) + 0xa0));
    uVar8 = FUN_08866468(uVar8);
    FUN_08863144(0x3f800000,iVar3,uVar8);
    FUN_089f88c0(*(undefined4 *)(*(int *)(param_1 + 0xa8c) + 4),*(undefined4 *)(param_1 + 0xaa4));
    FUN_089f86e4(*(undefined4 *)(*(int *)(param_1 + 0xa8c) + 4));
    FUN_0883003c(0x3f800000,param_1,2);
    *(int *)(param_1 + 0xabc) = *(int *)(param_1 + 0xabc) + 1;
    return;
  }
  if (2 < iVar4) {
    if (3 < iVar4) {
      return;
    }
    FUN_089f86e4(*(undefined4 *)(*(int *)(param_1 + 0xa8c) + 0xc));
    FUN_089f86e4(*(undefined4 *)(*(int *)(param_1 + 0xa8c) + 0xc));
    return;
  }
  iVar3 = *(int *)(param_1 + 0xacc);
  *(int *)(param_1 + 0xacc) = iVar3 + 1;
  if (iVar3 == 6) {
    iVar3 = FUN_089c59d4();
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0xa8c);
      goto LAB_0883042c;
    }
    uVar8 = FUN_089c59f0();
    FUN_089c6588(uVar8,*(undefined4 *)(param_1 + 0xac4));
  }
  iVar3 = *(int *)(param_1 + 0xa8c);
LAB_0883042c:
  iVar3 = FUN_089f8880(*(undefined4 *)(iVar3 + 8));
  iVar6 = 0;
  iVar4 = *(int *)(param_1 + 0xa8c);
  while( true ) {
    FUN_089f86e4(*(undefined4 *)(iVar4 + 8));
    iVar6 = iVar6 + 1;
    if (*(int *)(param_1 + 0xab8) < iVar3) {
      FUN_0883003c(0,param_1,2);
      FUN_0883003c(0x3f800000,param_1,3);
      *(int *)(param_1 + 0xabc) = *(int *)(param_1 + 0xabc) + 1;
      return;
    }
    if (1 < iVar6) break;
    iVar4 = *(int *)(param_1 + 0xa8c);
  }
  return;
}

