#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08875f5c(int param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar6 = param_1 + 0x434;
  iVar2 = FUN_088892e4(iVar6);
  *(int *)(param_1 + 0x5b4) = iVar2;
  puVar5 = *(uint **)(*(int *)(param_1 + 0x5ac) + iVar2 * 4);
  iVar2 = FUN_08889030(iVar6);
  if ((iVar2 == 2) || ((*puVar5 & 0x20000) != 0)) {
    FUN_088706f0(param_1,0xb,0);
  }
  else {
    FUN_088706f0(param_1,8,0);
    uVar4 = DAT_08ac5c70;
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
    iVar2 = FUN_088243d8(uVar4,iVar2 + 0x87,param_1 + 0x250);
    *(int *)(iVar2 + 0x1fc) = param_1;
    if (param_1 != 0) {
      *(undefined4 *)(iVar2 + 0x200) = *(undefined4 *)(param_1 + 0xc);
    }
  }
  iVar2 = FUN_08889030(iVar6);
  if ((2 < iVar2) && (iVar2 < 5)) {
    FUN_088865f0(iVar6,1);
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0x14) {
    if (*(int *)(param_1 + 0x5b4) != 0x3f) {
      uVar3 = *(uint *)(param_1 + 0x144);
      goto LAB_088760f4;
    }
    *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x80000;
  }
  else if (iVar2 == 0x12) {
    if (*(int *)(param_1 + 0x5b4) == 0x3f) {
      FUN_088887f8(iVar6,10,300);
      uVar3 = *(uint *)(param_1 + 0x144);
      goto LAB_088760f4;
    }
  }
  else {
    if (iVar2 != 0xc) {
      uVar3 = *(uint *)(param_1 + 0x144);
      goto LAB_088760f4;
    }
    if (*(int *)(param_1 + 0x5b4) == 0x3f) {
      FUN_088887f8(iVar6,9,600);
      FUN_08860454(param_1);
      uVar3 = *(uint *)(param_1 + 0x144);
      goto LAB_088760f4;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x144);
LAB_088760f4:
  *(uint *)(param_1 + 0x144) = uVar3 | 0x100;
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) & 0xfffffbff;
  iVar2 = FUN_0885fc80(param_1);
  if (iVar2 != 0) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0x3f19999a;
    FUN_0884c25c(0x5a,&local_30);
    if (*(int *)(param_1 + 0x140) != 0xb) {
      uVar4 = 0x2d;
      if (*(int *)(param_1 + 8) == 9) {
        uVar4 = 0x37;
      }
      bVar1 = false;
      uVar7 = 0x3e4ccccd;
      if (puVar5 != (uint *)0x0) {
        uVar3 = *puVar5;
        bVar1 = (uVar3 & 0x200) != 0;
        if ((uVar3 & 0x400) != 0) {
          uVar4 = 0x41;
        }
        uVar7 = 0x3e4ccccd;
        if ((uVar3 & 0x800) != 0) {
          uVar7 = 0x3f333333;
        }
      }
      if ((!bVar1) && (FUN_0884c2c0(0,uVar7,uVar4), puVar5 != (uint *)0x0)) {
        if ((*puVar5 & 0x1000) == 0) {
          if ((*puVar5 & 0x2000) != 0) {
            FUN_0884c324(0x43af0000);
          }
        }
        else {
          FUN_0884c324(0x437a0000);
        }
      }
    }
  }
  FUN_08889148(iVar6);
  FUN_0886ab40(param_1,0);
  (**(code **)(*(int *)(param_1 + 0x14) + 0x34))
            (0x3f800000,param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x30));
  if (*(char *)(param_1 + 0x158) == '\0') {
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  else {
    FUN_089e10cc(0x3f800000);
    iVar2 = FUN_0884b268();
    *(undefined4 *)(iVar2 + 0x4e0) = 0;
    *(undefined4 *)(param_1 + 0x174) = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = in_V72;
  *(undefined4 *)(param_1 + 0x84) = in_V76;
  *(undefined4 *)(param_1 + 0x88) = in_V7A;
  *(undefined4 *)(param_1 + 0x8c) = in_V7E;
  return;
}

