#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a8774(int param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar3 = *(int *)(param_1 + 0x1c);
  if (param_2 == '\0') {
    iVar4 = 3;
    iVar5 = 0xc;
    iVar2 = param_1 + 0x78;
    do {
      *(uint *)(*(int *)(iVar3 + iVar5) + 0xd0) = *(uint *)(*(int *)(iVar3 + iVar5) + 0xd0) | 1;
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 0x20;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x90) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x94) = 0x3f800000;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar5) + 0x9c) = 0;
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      FUN_089f4954(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),
                   *(undefined4 *)(iVar3 + 0x9c),iVar3,0);
      piVar1 = (int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(short *)(iVar2 + 0x8e) = (short)(int)*(float *)(*piVar1 + 0x60);
      *(undefined4 *)(*piVar1 + 0x60) = 0x43700000;
      iVar3 = *(int *)(param_1 + 0x1c);
      piVar1 = (int *)(iVar3 + iVar5);
      *(short *)(iVar2 + 0x8c) = (short)(int)*(float *)(*piVar1 + 0x60);
      fVar6 = (float)FUN_089a4b3c((float)(int)*(short *)(iVar2 + 0x8e),
                                  *(undefined4 *)(*piVar1 + 0x60));
      *(undefined4 *)(iVar2 + 0x94) = 0;
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      *(short *)(iVar2 + 0x90) = (short)(int)fVar6;
      *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(*piVar1 + 0xbc);
      iVar2 = iVar2 + 0x28;
    } while (iVar4 < 5);
  }
  else {
    iVar2 = 3;
    piVar1 = (int *)(iVar3 + 0xc);
    param_1 = param_1 + 0x78;
    do {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*piVar1 + 0xbc);
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(*piVar1 + 0x90);
      iVar3 = *piVar1;
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      *(short *)(param_1 + 0x8c) = (short)(int)*(float *)(iVar3 + 0x60);
      param_1 = param_1 + 0x28;
    } while (iVar2 < 5);
  }
  return;
}

