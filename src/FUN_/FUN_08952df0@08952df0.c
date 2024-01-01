#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08952df0(int param_1,char param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (param_2 == '\0') {
    iVar4 = 9;
    iVar5 = 0x24;
    iVar3 = param_1 + 0x168;
    do {
      *(uint *)(*(int *)(iVar1 + iVar5) + 0xd0) = *(uint *)(*(int *)(iVar1 + iVar5) + 0xd0) | 1;
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 0x20;
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5));
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(short *)(iVar3 + 0x8e) = (short)(int)*(float *)(*piVar2 + 0x60);
      *(undefined4 *)(*piVar2 + 0x60) = 0x43700000;
      piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar5);
      *(short *)(iVar3 + 0x8c) = (short)(int)*(float *)(*piVar2 + 0x60);
      fVar6 = (float)FUN_089a4b3c((float)(int)*(short *)(iVar3 + 0x8e),
                                  *(undefined4 *)(*piVar2 + 0x60));
      iVar1 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar3 + 0x94) = 0;
      piVar2 = (int *)(iVar1 + iVar5);
      iVar4 = iVar4 + 1;
      *(short *)(iVar3 + 0x90) = (short)(int)fVar6;
      iVar5 = iVar5 + 4;
      *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(*piVar2 + 0xbc);
      iVar3 = iVar3 + 0x28;
    } while (iVar4 < 0xb);
  }
  else {
    iVar3 = 9;
    piVar2 = (int *)(iVar1 + 0x24);
    param_1 = param_1 + 0x168;
    do {
      *(undefined4 *)(param_1 + 0x94) = 0;
      *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(*piVar2 + 0xbc);
      *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(*piVar2 + 0x90);
      iVar1 = *piVar2;
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 1;
      *(short *)(param_1 + 0x8c) = (short)(int)*(float *)(iVar1 + 0x60);
      param_1 = param_1 + 0x28;
    } while (iVar3 < 0xb);
  }
  return;
}

