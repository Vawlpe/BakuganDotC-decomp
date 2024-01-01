#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08875bb0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  iVar2 = *(int *)(param_1 + 0x3cc);
  if (iVar2 < 100) {
    switch(iVar2) {
    case 0:
      *(undefined4 *)(param_1 + 0x570) = 0;
      FUN_08860438(param_1);
      *(undefined4 *)(param_1 + 0x3d0) = 0x1e;
      *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
      break;
    case 1:
      break;
    case 2:
      goto LAB_08875cd4;
    default:
      return;
    case 10:
      goto LAB_08875d34;
    case 0xb:
      goto LAB_08875d94;
    }
    *(undefined4 *)(param_1 + 0x80) = in_V72;
    *(undefined4 *)(param_1 + 0x84) = in_V76;
    *(undefined4 *)(param_1 + 0x88) = in_V7A;
    *(undefined4 *)(param_1 + 0x8c) = in_V7E;
    *(undefined4 *)(param_1 + 0x2f8) = 0;
    *(undefined4 *)(param_1 + 0x1c4) = 999;
    iVar2 = *(int *)(param_1 + 0x3d0);
    *(int *)(param_1 + 0x3d0) = iVar2 + -1;
    if (0 < iVar2) {
      return;
    }
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
LAB_08875cd4:
    FUN_0886003c(*(undefined4 *)(param_1 + 0x56c),param_1);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x560);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x564);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x568);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x56c);
    iVar2 = FUN_0885fc80(param_1);
    if (((iVar2 != 0) && (iVar2 = FUN_089bf93c(0x14a,1), iVar2 == 0)) && (DAT_08ac5c90 != 0)) {
      FUN_088474a0(DAT_08ac5c90,1);
    }
    FUN_0886020c(param_1);
    *(undefined4 *)(param_1 + 0x3cc) = 10;
    *(undefined4 *)(param_1 + 0x570) = 0x96;
LAB_08875d34:
    if ((*(uint *)(param_1 + 0x16c) & 0x8000) == 0) {
      iVar2 = *(int *)(param_1 + 0x570);
    }
    else {
      *(int *)(param_1 + 0x570) = *(int *)(param_1 + 0x570) + -0x1e;
      iVar2 = *(int *)(param_1 + 0x570);
    }
    *(undefined4 *)(param_1 + 0x1c4) = 999;
    *(int *)(param_1 + 0x570) = iVar2 + -1;
    if (0 < iVar2 + -1) {
      return;
    }
    *(undefined4 *)(param_1 + 0x570) = 0;
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
LAB_08875d94:
    *(undefined4 *)(param_1 + 0x3cc) = 100;
LAB_08875d98:
    iVar2 = _DONE_NotZero_DAT_08AC5258();
    if (iVar2 != 0) {
      uVar1 = _DONE_Get_DAT_08AC5258();
      FUN_089c00c4(uVar1,0x200012,param_1 + 0x20,0,1);
    }
    uVar1 = DAT_08abd5b0;
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0xa4))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0xa0));
    FUN_08823f5c(uVar1,iVar2 + 0xe,param_1 + 0x20);
    *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
    *(undefined4 *)(param_1 + 0x3d0) = 8;
    *(undefined4 *)(param_1 + 0x1c4) = 999;
  }
  else {
    if (0x65 < iVar2) {
      if (0x66 < iVar2) {
        return;
      }
      goto LAB_08875e30;
    }
    if (iVar2 < 0x65) goto LAB_08875d98;
    *(undefined4 *)(param_1 + 0x1c4) = 999;
  }
  iVar2 = *(int *)(param_1 + 0x3d0);
  *(int *)(param_1 + 0x3d0) = iVar2 + -1;
  if (0 < iVar2) {
    return;
  }
  *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
LAB_08875e30:
  FUN_08886fd0(param_1 + 0x434);
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  if (*(int *)(param_1 + 0x20c) != 0) {
    *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
         *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xfffffff8;
  }
  if (*(int *)(param_1 + 0x208) == 0) {
    iVar2 = *(int *)(param_1 + 0x20c);
  }
  else {
    *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
         *(uint *)(*(int *)(param_1 + 0x208) + 0x130) & 0xfffffff8;
    iVar2 = *(int *)(param_1 + 0x20c);
  }
  *(undefined4 *)(iVar2 + 0x148) = 0;
  *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) & 0xfffffffe;
  *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) =
       *(uint *)(*(int *)(param_1 + 0x20c) + 0x130) & 0xfffffffb;
  *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
       *(uint *)(*(int *)(param_1 + 0x208) + 0x130) & 0xffffffbf;
  *(uint *)(*(int *)(param_1 + 0x208) + 0x130) =
       *(uint *)(*(int *)(param_1 + 0x208) + 0x130) & 0xfffffffb;
  FUN_088854b0(*(undefined4 *)(param_1 + 0x200));
  *(undefined4 *)(param_1 + 0x2f8) = *(undefined4 *)(*(int *)(param_1 + 0x4bc) + 0x18);
  FUN_088706f0(param_1,0,0);
  FUN_08863070(param_1,1);
  *(int *)(param_1 + 0x3cc) = *(int *)(param_1 + 0x3cc) + 1;
  *(undefined *)(param_1 + 0x574) = 1;
  *(undefined *)(param_1 + 0x575) = 0;
  iVar2 = *(int *)(param_1 + 0x20c);
  *(undefined *)(param_1 + 0x576) = 0;
  *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) | 1;
  *(undefined4 *)(iVar2 + 0x148) = 0x44;
  return;
}

