#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0890a928(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined auStack_50 [36];
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af47dc;
  if (DAT_08ac0e80 == 0) {
    FUN_0890a5b8();
    *(undefined4 *)(DAT_08ac0e80 + 0x3c) = 0;
  }
  else {
    FUN_089eb250(*(undefined4 *)(DAT_08ac0e80 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  iVar3 = 0;
  iVar5 = *(int *)(DAT_08ac0e80 + 4);
  if (0 < *(int *)(DAT_08ac0e80 + 0x30)) {
    iVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(uint *)(*(int *)(iVar5 + iVar4) + 0xd0) =
           *(uint *)(*(int *)(iVar5 + iVar4) + 0xd0) & 0xfffffffe;
      iVar4 = iVar4 + 4;
      iVar5 = *(int *)(DAT_08ac0e80 + 4);
    } while (iVar3 < *(int *)(DAT_08ac0e80 + 0x30));
  }
  *(undefined4 *)(*(int *)(iVar5 + 0x54) + 0xbc) = 0;
  iVar3 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x54);
  *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
  iVar3 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x58);
  *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x1c4) = 0;
  *(undefined *)(param_1 + 0x1bd) = 0;
  *(undefined4 *)(DAT_08ac0e80 + 0x20) = 0;
  *(undefined4 *)(DAT_08ac0e80 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x234) = 0;
  strcpy(param_1 + 0x3c,&DAT_08a9b3f8);
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0;
  *(undefined4 *)(param_1 + 0x200) = 0xbcf5c28f;
  *(undefined4 *)(param_1 + 0x204) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = in_V72;
  *(undefined4 *)(param_1 + 0x214) = in_V76;
  *(undefined4 *)(param_1 + 0x218) = in_V7A;
  *(undefined4 *)(param_1 + 0x21c) = in_V7E;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x224) = 0;
  *(undefined *)(param_1 + 0x238) = 0;
  *(undefined *)(param_1 + 0x239) = 0;
  *(undefined *)(param_1 + 0x23a) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(DAT_08ac58c4 + 0x34);
  bVar1 = false;
  iVar6 = 0;
  iVar3 = FUN_0880dc00("DRMesLoading");
  iVar5 = *(int *)(param_1 + 0x18) * 8;
  iVar4 = *(int *)(&DAT_08a9b090 + iVar5);
  if (iVar4 < 2) {
    if (0 < iVar4) {
      FUN_089b4c84(auStack_50,"tips_t_%03d.tm2",*(undefined4 *)(&DAT_08a9b094 + iVar5));
      bVar1 = true;
      iVar6 = *(int *)(&DAT_08a9b094 + *(int *)(param_1 + 0x18) * 8);
      *(undefined *)(param_1 + 0x1bd) = 0;
      iVar6 = iVar6 + -1;
      goto LAB_0890ac10;
    }
  }
  else if (iVar4 < 3) {
    iVar5 = *(int *)(&DAT_08a9b094 + iVar5);
    if ((iVar5 == 3) || (iVar5 == 6)) {
      uVar2 = FUN_0880dc94();
      FUN_089b4c84(auStack_50,"tips_%03d_%s.tm2",iVar5,uVar2);
      iVar6 = *(int *)(&DAT_08a9b094 + *(int *)(param_1 + 0x18) * 8);
    }
    else {
      FUN_089b4c84(auStack_50,"tips_%03d.tm2",iVar5);
      iVar6 = *(int *)(&DAT_08a9b094 + *(int *)(param_1 + 0x18) * 8);
    }
    iVar6 = iVar6 + 7;
    bVar1 = true;
    *(undefined *)(param_1 + 0x1bd) = 0;
    goto LAB_0890ac10;
  }
  *(undefined *)(param_1 + 0x1bd) = 1;
LAB_0890ac10:
  if (bVar1) {
    FUN_089b4c84(&DAT_08af8058,"data/nowloading/%s",auStack_50);
    uVar2 = FUN_089fce94();
    uVar2 = FUN_089fd150(uVar2,DAT_08ac0e80 + 0x20,&DAT_08af8058,
                         *(undefined4 *)(DAT_08ac0e80 + 0x40),0,0);
    *(undefined4 *)(DAT_08ac0e80 + 0x20) = uVar2;
    if (((*(int *)(DAT_08ac0e80 + 0x20) != 0) &&
        (FUN_089fbac8(*(int *)(DAT_08ac0e80 + 0x20),2), iVar3 != 0)) &&
       (iVar5 = FUN_088cc354(iVar3), iVar6 < iVar5)) {
      strcpy(param_1 + 0x3c,*(undefined4 *)(iVar3 + iVar6 * 4));
    }
  }
  *(undefined4 *)(DAT_08ac0e80 + 0x38) = *(undefined4 *)(DAT_08ac5934 + 0x1c);
  *(undefined4 *)(DAT_08ac5934 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined *)(param_1 + 0x1bc) = 0;
  FUN_0890a8b4(param_1);
  return param_1;
}

