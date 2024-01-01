#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08914bc8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 1;
  iVar6 = 4;
  iVar7 = 5;
  do {
    if ((&DAT_08a9bb4c)[*(int *)(&DAT_08a9baf8 + *(int *)(param_1 + 0x16a8) * 4) * 6 + iVar5] ==
        '\0') {
      iVar2 = *(int *)(param_1 + 0x1c);
LAB_08914d38:
      iVar2 = *(int *)(iVar2 + iVar6 + 0xb0);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 0xd8);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 0xf0);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 0x108);
      iVar2 = 0;
      *(undefined4 *)(iVar3 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0xb4) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0xb8) = 0x3f800000;
      *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
      iVar3 = iVar7 << 2;
      do {
        iVar2 = iVar2 + 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 0x120);
        *(undefined4 *)(iVar4 + 0xb0) = 0x3f800000;
        *(undefined4 *)(iVar4 + 0xb4) = 0x3f800000;
        *(undefined4 *)(iVar4 + 0xb8) = 0x3f800000;
        *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
        iVar3 = iVar3 + 4;
      } while (iVar2 < 5);
    }
    else {
      piVar1 = (int *)FUN_0880cc48();
      if (*(char *)(*piVar1 + *(int *)(param_1 + 0x16a8) * 6 + iVar5 + 0x53f) != '\0') {
        iVar2 = *(int *)(param_1 + 0x1c);
        goto LAB_08914d38;
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 0xb0);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 0xd8);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 0xf0);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xb4) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xb8) = 0x3e99999a;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6 + 0x108);
      iVar2 = 0;
      *(undefined4 *)(iVar3 + 0xb0) = 0x3e99999a;
      *(undefined4 *)(iVar3 + 0xb4) = 0x3e99999a;
      *(undefined4 *)(iVar3 + 0xb8) = 0x3e99999a;
      *(undefined4 *)(iVar3 + 0xbc) = 0x3f800000;
      iVar3 = iVar7 << 2;
      do {
        iVar2 = iVar2 + 1;
        iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 + 0x120);
        *(undefined4 *)(iVar4 + 0xb0) = 0x3e99999a;
        *(undefined4 *)(iVar4 + 0xb4) = 0x3e99999a;
        *(undefined4 *)(iVar4 + 0xb8) = 0x3e99999a;
        *(undefined4 *)(iVar4 + 0xbc) = 0x3f800000;
        iVar3 = iVar3 + 4;
      } while (iVar2 < 5);
    }
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 4;
    iVar7 = iVar7 + 5;
    if (5 < iVar5) {
      return;
    }
  } while( true );
}

