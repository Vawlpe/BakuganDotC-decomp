#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894ed2c(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  
  FUN_089a4f4c(0x40000000,
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0x708) * 4 + 8),
               0,0);
  *(undefined *)(param_1 + 0x7f) = 0;
  FUN_0894e924(param_1,0,*(undefined *)(param_1 + 0x75));
  iVar6 = *(char *)(param_1 + 0x75) + 4;
  piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar6 * 4);
  iVar6 = param_1 + iVar6 * 0x28;
  cVar1 = *(char *)(param_1 + 0x708);
  uVar4 = 0xff20;
  *(short *)(iVar6 + 0x8c) = (short)(int)*(float *)(*piVar2 + 0x60);
  if (cVar1 == '\0') {
    uVar4 = 0x2c0;
  }
  *(undefined2 *)(iVar6 + 0x8e) = uVar4;
  fVar8 = (float)FUN_089a4b3c(*(undefined4 *)(*piVar2 + 0x60),(float)(int)*(short *)(iVar6 + 0x8e));
  iVar5 = *(int *)(param_1 + 0x1c);
  cVar1 = *(char *)(param_1 + 0x708);
  iVar7 = *(char *)(param_1 + 0x74) + 4;
  iVar3 = iVar7 * 4;
  *(short *)(iVar6 + 0x90) = (short)(int)fVar8;
  iVar6 = *(int *)(iVar5 + iVar3);
  iVar5 = param_1 + iVar7 * 0x28;
  if (cVar1 == '\0') {
    *(undefined4 *)(iVar6 + 0x60) = 0xc3600000;
    uVar4 = (undefined2)(int)*(float *)(param_1 + 0x2d4);
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar3);
    iVar6 = *piVar2;
  }
  else {
    *(undefined4 *)(iVar6 + 0x60) = 0x44300000;
    piVar2 = (int *)(*(int *)(param_1 + 0x1c) + iVar3);
    iVar6 = *piVar2;
    uVar4 = (undefined2)(int)*(float *)(param_1 + 0x2d4);
  }
  fVar8 = *(float *)(iVar6 + 0x60);
  *(undefined2 *)(iVar5 + 0x8e) = uVar4;
  *(short *)(iVar5 + 0x8c) = (short)(int)fVar8;
  fVar8 = (float)FUN_089a4b3c(*(undefined4 *)(*piVar2 + 0x60),(float)(int)*(short *)(iVar5 + 0x8e));
  *(short *)(iVar5 + 0x90) = (short)(int)fVar8;
  return;
}

