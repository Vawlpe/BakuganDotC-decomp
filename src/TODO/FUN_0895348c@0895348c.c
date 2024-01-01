#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895348c(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  FUN_089a4f4c(0x40000000,
               *(undefined4 *)
                (*(int *)(param_1 + 0x1c) + (uint)*(byte *)(param_1 + 0xa34) * 4 + 0x24),0,0);
  *(undefined *)(param_1 + 0x39f) = 0;
  FUN_08952fcc(param_1,0,*(undefined *)(param_1 + 0x75));
  iVar4 = *(int *)(param_1 + 0x1c) + *(char *)(param_1 + 0x75) * 4;
  iVar3 = param_1 + *(char *)(param_1 + 0x75) * 0x28;
  cVar1 = *(char *)(param_1 + 0xa34);
  uVar2 = 0xff20;
  *(short *)(iVar3 + 0xb4) = (short)(int)*(float *)(*(int *)(iVar4 + 4) + 0x60);
  if (cVar1 == '\0') {
    uVar2 = 0x2c0;
  }
  *(undefined2 *)(iVar3 + 0xb6) = uVar2;
  fVar6 = (float)FUN_089a4b3c(*(undefined4 *)(*(int *)(iVar4 + 4) + 0x60),
                              (float)(int)*(short *)(iVar3 + 0xb6));
  cVar1 = *(char *)(param_1 + 0x74);
  iVar3 = *(int *)(param_1 + 0x1c);
  *(short *)(param_1 + *(char *)(param_1 + 0x75) * 0x28 + 0xb8) = (short)(int)fVar6;
  iVar3 = *(int *)(iVar3 + cVar1 * 4 + 4);
  if (*(char *)(param_1 + 0xa34) == '\0') {
    *(undefined4 *)(iVar3 + 0x60) = 0xc3600000;
    iVar3 = (int)*(char *)(param_1 + 0x74);
    uVar2 = (undefined2)(int)*(float *)(param_1 + 0x600);
    iVar5 = *(int *)(param_1 + 0x1c) + iVar3 * 4;
    iVar4 = *(int *)(iVar5 + 4);
  }
  else {
    *(undefined4 *)(iVar3 + 0x60) = 0x44300000;
    iVar3 = (int)*(char *)(param_1 + 0x74);
    iVar5 = *(int *)(param_1 + 0x1c) + iVar3 * 4;
    iVar4 = *(int *)(iVar5 + 4);
    uVar2 = (undefined2)(int)*(float *)(param_1 + 0x600);
  }
  iVar3 = param_1 + iVar3 * 0x28;
  fVar6 = *(float *)(iVar4 + 0x60);
  *(undefined2 *)(iVar3 + 0xb6) = uVar2;
  *(short *)(iVar3 + 0xb4) = (short)(int)fVar6;
  fVar6 = (float)FUN_089a4b3c(*(undefined4 *)(*(int *)(iVar5 + 4) + 0x60),
                              (float)(int)*(short *)(iVar3 + 0xb6));
  *(short *)(param_1 + *(char *)(param_1 + 0x74) * 0x28 + 0xb8) = (short)(int)fVar6;
  return;
}

