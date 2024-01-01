#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891b16c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  
  cVar8 = '\0';
  if (*(char *)(param_1 + 0x8fc) != '\0') {
    if (*(char *)(param_1 + 0x8fd) == '\0') {
      iVar7 = 0;
      iVar6 = 0;
      iVar5 = param_1 + 0x4d8;
      iVar4 = param_1;
      do {
        cVar1 = FUN_089a91a0(0x3f99999a,0x3f800000,0x41800000,*(undefined *)(param_1 + 0x8fd),
                             *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6 + 0x70),iVar5,7);
        iVar2 = *(int *)(param_1 + 0x1c) + iVar6;
        *(undefined4 *)(*(int *)(iVar2 + 0x80) + 0xbc) =
             *(undefined4 *)(*(int *)(iVar2 + 0x70) + 0xbc);
        iVar2 = *(int *)(param_1 + 0x1c) + iVar6;
        iVar3 = *(int *)(iVar2 + 0x70);
        cVar8 = cVar8 + cVar1;
        *(float *)(*(int *)(iVar2 + 0x80) + 0x60) =
             *(float *)(iVar3 + 0x60) + *(float *)(iVar4 + 0x8dc) * *(float *)(iVar3 + 0x90);
        iVar2 = *(int *)(param_1 + 0x1c) + iVar6;
        iVar3 = *(int *)(iVar2 + 0x70);
        *(float *)(*(int *)(iVar2 + 0x80) + 100) =
             *(float *)(iVar3 + 100) + *(float *)(iVar4 + 0x8e0) * *(float *)(iVar3 + 0x94);
        iVar2 = *(int *)(param_1 + 0x1c) + iVar6;
        iVar3 = *(int *)(iVar2 + 0x70);
        FUN_089a51fc(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),0,
                     *(undefined4 *)(iVar2 + 0x80));
        iVar2 = *(int *)(param_1 + 0x1c) + iVar6;
        *(undefined4 *)(*(int *)(iVar2 + 0x78) + 0xbc) =
             *(undefined4 *)(*(int *)(iVar2 + 0x70) + 0xbc);
        iVar2 = *(int *)(param_1 + 0x1c) + iVar6;
        iVar3 = *(int *)(iVar2 + 0x70);
        *(float *)(*(int *)(iVar2 + 0x78) + 0x60) =
             *(float *)(iVar3 + 0x60) + *(float *)(iVar4 + 0x8e4) * *(float *)(iVar3 + 0x90);
        iVar2 = *(int *)(param_1 + 0x1c) + iVar6;
        iVar3 = *(int *)(iVar2 + 0x70);
        *(float *)(*(int *)(iVar2 + 0x78) + 100) =
             *(float *)(iVar3 + 100) + *(float *)(iVar4 + 0x8e8) * *(float *)(iVar3 + 0x94);
        iVar2 = *(int *)(param_1 + 0x1c) + iVar6;
        iVar3 = *(int *)(iVar2 + 0x70);
        FUN_089a51fc(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),0,
                     *(undefined4 *)(iVar2 + 0x78));
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 4;
        iVar5 = iVar5 + 0x28;
        iVar4 = iVar4 + 0x10;
      } while (iVar7 < 2);
    }
    else {
      iVar6 = 0;
      iVar5 = 0;
      iVar4 = param_1 + 0x4d8;
      do {
        cVar1 = FUN_089a91a0(0x3f99999a,0x3f800000,0x41800000,*(undefined *)(param_1 + 0x8fd),
                             *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5 + 0x70),iVar4,1);
        iVar7 = *(int *)(param_1 + 0x1c) + iVar5;
        *(undefined4 *)(*(int *)(iVar7 + 0x80) + 0xbc) =
             *(undefined4 *)(*(int *)(iVar7 + 0x70) + 0xbc);
        cVar8 = cVar8 + cVar1;
        iVar7 = *(int *)(param_1 + 0x1c) + iVar5;
        iVar6 = iVar6 + 1;
        *(undefined4 *)(*(int *)(iVar7 + 0x78) + 0xbc) =
             *(undefined4 *)(*(int *)(iVar7 + 0x70) + 0xbc);
        iVar5 = iVar5 + 4;
        iVar4 = iVar4 + 0x28;
      } while (iVar6 < 2);
    }
    if (cVar8 != '\0') {
      *(undefined *)(param_1 + 0x8fc) = 0;
    }
  }
  return;
}

