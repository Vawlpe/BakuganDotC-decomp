#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891a2c4(int param_1,undefined param_2,undefined param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  memset_jak(param_1 + 0x8fc,0,4);
  *(undefined *)(param_1 + 0x8fd) = param_3;
  *(undefined *)(param_1 + 0x8fc) = param_2;
  iVar4 = 0;
  if (*(char *)(param_1 + 0x8fd) == '\0') {
    iVar8 = 0;
    iVar7 = 0;
    iVar6 = param_1 + 0x4d8;
    iVar4 = param_1;
    iVar5 = param_1;
    do {
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70);
      iVar2 = param_1 + *(char *)(param_1 + 0x74) * 4;
      if (iVar8 == 0) {
        FUN_08919854(param_1,uVar1,*(undefined *)(iVar2 + 0x8a0));
        FUN_089f4c84(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70));
        uVar1 = 0x42000000;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70) + 0x60) =
             *(float *)(iVar4 + 0x838) - 32.0;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70);
      }
      else {
        FUN_08919854(param_1,uVar1,*(undefined *)(iVar2 + 0x8a1));
        uVar1 = 0xc2000000;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70) + 0x60) =
             *(float *)(iVar4 + 0x838) + 32.0;
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70);
      }
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70) + 0xbc) = 0;
      FUN_089a54cc(0x3f99999a,0,uVar1,param_3,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x70),iVar6,7);
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x80);
      if (iVar8 == 0) {
        FUN_08919894(param_1,uVar1,*(undefined *)(param_1 + *(char *)(param_1 + 0x74) * 4 + 0x8a0));
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x80);
      }
      else {
        FUN_08919894(param_1,uVar1,0);
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x80);
      }
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(param_1 + 0x1c) + iVar7;
      *(undefined4 *)(*(int *)(iVar2 + 0x80) + 0xbc) =
           *(undefined4 *)(*(int *)(iVar2 + 0x70) + 0xbc);
      iVar2 = *(int *)(param_1 + 0x1c) + iVar7;
      iVar3 = *(int *)(iVar2 + 0x70);
      *(float *)(*(int *)(iVar2 + 0x80) + 0x60) =
           *(float *)(iVar3 + 0x60) + *(float *)(iVar5 + 0x8dc) * *(float *)(iVar3 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c) + iVar7;
      iVar3 = *(int *)(iVar2 + 0x70);
      *(float *)(*(int *)(iVar2 + 0x80) + 100) =
           *(float *)(iVar3 + 100) + *(float *)(iVar5 + 0x8e0) * *(float *)(iVar3 + 0x94);
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x80);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 0x20;
      iVar2 = *(int *)(param_1 + 0x1c) + iVar7;
      iVar3 = *(int *)(iVar2 + 0x70);
      FUN_089a51fc(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),0,
                   *(undefined4 *)(iVar2 + 0x80));
      iVar2 = param_1 + *(char *)(param_1 + 0x74) * 4;
      uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x78);
      if (iVar8 == 0) {
        FUN_089198f4(param_1,uVar1,*(undefined *)(iVar2 + 0x8a0));
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x78);
      }
      else {
        FUN_089198f4(param_1,uVar1,*(undefined *)(iVar2 + 0x8a1));
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x78);
      }
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(param_1 + 0x1c) + iVar7;
      *(undefined4 *)(*(int *)(iVar2 + 0x78) + 0xbc) =
           *(undefined4 *)(*(int *)(iVar2 + 0x70) + 0xbc);
      iVar2 = *(int *)(param_1 + 0x1c) + iVar7;
      iVar3 = *(int *)(iVar2 + 0x70);
      *(float *)(*(int *)(iVar2 + 0x78) + 0x60) =
           *(float *)(iVar3 + 0x60) + *(float *)(iVar5 + 0x8e4) * *(float *)(iVar3 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c) + iVar7;
      iVar3 = *(int *)(iVar2 + 0x70);
      *(float *)(*(int *)(iVar2 + 0x78) + 100) =
           *(float *)(iVar3 + 100) + *(float *)(iVar5 + 0x8e8) * *(float *)(iVar3 + 0x94);
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar7 + 0x78);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 0x20;
      iVar2 = *(int *)(param_1 + 0x1c) + iVar7;
      iVar3 = *(int *)(iVar2 + 0x70);
      FUN_089a51fc(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),0,
                   *(undefined4 *)(iVar2 + 0x78));
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 4;
      iVar4 = iVar4 + 8;
      iVar6 = iVar6 + 0x28;
      iVar5 = iVar5 + 0x10;
    } while (iVar8 < 2);
  }
  else {
    iVar5 = 0;
    iVar6 = param_1 + 0x4d8;
    do {
      iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x70);
      FUN_089a5408(*(undefined4 *)(iVar7 + 0x90),param_3,iVar7,iVar6,1);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      iVar6 = iVar6 + 0x28;
    } while (iVar4 < 2);
  }
  return;
}

