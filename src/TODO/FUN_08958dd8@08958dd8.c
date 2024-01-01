#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08958dd8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x4cda) < '\x03') {
    iVar2 = 0x6f;
    iVar3 = 0;
    do {
      iVar6 = param_1 + iVar3;
      *(char *)(iVar6 + 0x4f68) = (char)iVar2;
      *(char *)(iVar6 + 0x4f6c) = (char)iVar3 + -0x7e;
      iVar2 = *(int *)(param_1 + 0x1c);
      *(char *)(iVar6 + 0x4f70) = (char)iVar3 + -0x80;
      FUN_089f43d4(0x3f000000,*(undefined4 *)(iVar2 + (uint)*(byte *)(iVar6 + 0x4f68) * 4));
      FUN_089f43d4(0x3f000000,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar6 + 0x4f6c) * 4));
      FUN_089f43d4(0x3f000000,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar6 + 0x4f70) * 4));
      iVar6 = iVar3 + 1;
      iVar2 = iVar3 + 0x70;
      iVar3 = iVar6;
    } while (iVar6 < 2);
    cVar1 = *(char *)(param_1 + 0x4cda);
  }
  else {
    iVar2 = 0x80;
    iVar3 = 0;
    do {
      iVar6 = param_1 + iVar3;
      *(char *)(iVar6 + 0x4f68) = (char)iVar2;
      *(char *)(iVar6 + 0x4f6c) = (char)iVar3 + -0x5b;
      iVar2 = *(int *)(param_1 + 0x1c);
      *(char *)(iVar6 + 0x4f70) = (char)iVar3 + -0x5f;
      FUN_089f43d4(0x3f000000,*(undefined4 *)(iVar2 + (uint)*(byte *)(iVar6 + 0x4f68) * 4));
      FUN_089f43d4(0x3f000000,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar6 + 0x4f6c) * 4));
      FUN_089f43d4(0x3f000000,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar6 + 0x4f70) * 4));
      iVar6 = iVar3 + 1;
      iVar2 = iVar3 + 0x81;
      iVar3 = iVar6;
    } while (iVar6 < 4);
    cVar1 = *(char *)(param_1 + 0x4cda);
  }
  iVar3 = (int)cVar1;
  iVar2 = 0;
  if (0 < iVar3) {
    iVar7 = *(int *)(param_1 + 0x1c);
    iVar6 = param_1;
    do {
      iVar3 = param_1 + iVar2;
      FUN_089f46dc(*(undefined4 *)(iVar7 + (uint)*(byte *)(iVar3 + 0x4f68) * 4));
      FUN_089a51fc(0x3f800000,0x3f800000,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar3 + 0x4f68) * 4));
      iVar7 = *(int *)(param_1 + 0x1c);
      piVar4 = (int *)(iVar7 + (uint)*(byte *)(iVar3 + 0x4f68) * 4);
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar6 + 0x4ed4) = *(undefined4 *)(*piVar4 + 0x60);
      iVar3 = (int)*(char *)(param_1 + 0x4cda);
      *(undefined4 *)(iVar6 + 0x4ed8) = *(undefined4 *)(*piVar4 + 100);
      iVar6 = iVar6 + 8;
    } while (iVar2 < iVar3);
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar7 = *(int *)(param_1 + 0x1c);
    iVar6 = param_1;
    do {
      iVar3 = param_1 + iVar2;
      FUN_089f46dc(*(undefined4 *)(iVar7 + (uint)*(byte *)(iVar3 + 0x4f6c) * 4));
      FUN_089a51fc(0x3f800000,0x3f800000,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar3 + 0x4f6c) * 4));
      iVar7 = *(int *)(param_1 + 0x1c);
      piVar5 = (int *)(iVar7 + (uint)*(byte *)(iVar3 + 0x4f6c) * 4);
      piVar4 = (int *)(iVar7 + (uint)*(byte *)(iVar3 + 0x4f68) * 4);
      iVar3 = (int)*(char *)(param_1 + 0x4cda);
      iVar2 = iVar2 + 1;
      *(float *)(iVar6 + 0x4ef4) = *(float *)(*piVar5 + 0x60) - *(float *)(*piVar4 + 0x60);
      *(float *)(iVar6 + 0x4ef8) = *(float *)(*piVar5 + 100) - *(float *)(*piVar4 + 100);
      iVar6 = iVar6 + 8;
    } while (iVar2 < iVar3);
  }
  iVar2 = 0;
  if (0 < iVar3) {
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar3 = param_1;
    do {
      iVar7 = param_1 + iVar2;
      FUN_089f46dc(*(undefined4 *)(iVar6 + (uint)*(byte *)(iVar7 + 0x4f70) * 4));
      FUN_089a51fc(0x3f800000,0x3f800000,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(iVar7 + 0x4f70) * 4));
      iVar6 = *(int *)(param_1 + 0x1c);
      piVar4 = (int *)(iVar6 + (uint)*(byte *)(iVar7 + 0x4f70) * 4);
      piVar5 = (int *)(iVar6 + (uint)*(byte *)(iVar7 + 0x4f68) * 4);
      cVar1 = *(char *)(param_1 + 0x4cda);
      iVar2 = iVar2 + 1;
      *(float *)(iVar3 + 0x4f14) = *(float *)(*piVar4 + 0x60) - *(float *)(*piVar5 + 0x60);
      *(float *)(iVar3 + 0x4f18) = *(float *)(*piVar4 + 100) - *(float *)(*piVar5 + 100);
      iVar3 = iVar3 + 8;
    } while (iVar2 < cVar1);
  }
  return;
}

