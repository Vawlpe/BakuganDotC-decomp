#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892f5c0(int param_1,char param_2)

{
  undefined uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  if (param_2 == '\0') {
    uVar1 = FUN_0892bc18(*(undefined *)(param_1 + *(char *)(param_1 + 0x75) * 0xc + 0x1ba4));
    uVar2 = FUN_0892c394(uVar1);
    uVar9 = uVar2 >> 8 & 0xff;
    iVar6 = 0x7e;
    uVar2 = uVar2 >> 0x10 & 0xff;
    iVar5 = 0x1f8;
    iVar7 = param_1 + 0x3f0;
    iVar8 = param_1 + 0x1428;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      if (iVar6 < 0x83) {
        if (iVar6 < 0x82) {
          uVar4 = *(uint *)(iVar3 + 0xd0);
        }
        else {
          FUN_089f4a90((float)(uVar9 / 3),(float)(uVar9 % 3));
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
LAB_0892f708:
          uVar4 = *(uint *)(iVar3 + 0xd0);
        }
      }
      else {
        if (iVar6 < 0x84) {
          FUN_089f4a90((float)(uVar2 / 3),(float)(uVar2 % 3));
          iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
          goto LAB_0892f708;
        }
        uVar4 = *(uint *)(iVar3 + 0xd0);
      }
      *(uint *)(iVar3 + 0xd0) = uVar4 | 1;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x128) = 2;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x60) =
           *(float *)(iVar7 + 0x1754) - 64.0;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar7 + 0x1754) - *(float *)(iVar3 + 0x60),0,iVar3,iVar8,
                   5);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar7 = iVar7 + 8;
      iVar8 = iVar8 + 0x28;
    } while (iVar6 < 0x84);
  }
  else {
    iVar5 = 0x7e;
    iVar6 = 0x1f8;
    iVar7 = param_1 + 0x3f0;
    iVar8 = param_1 + 0x1428;
    do {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
      FUN_089a54cc(0x3f800000,0,*(float *)(iVar3 + 0x60) - (*(float *)(iVar7 + 0x1754) + 64.0),
                   param_2,iVar3,iVar8,5);
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 8;
      iVar8 = iVar8 + 0x28;
    } while (iVar5 < 0x84);
  }
  return;
}

