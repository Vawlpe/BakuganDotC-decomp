#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0894f5c0(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  float fVar6;
  float fVar7;
  
  cVar5 = '\0';
  if (param_2 == '\0') {
    iVar4 = 2;
    iVar3 = param_1 + 0x50;
    iVar2 = 8;
    do {
      fVar6 = *(float *)(iVar3 + 0x94) + 0.125;
      iVar1 = *(int *)(param_1 + 0x1c);
      fVar7 = fVar6 - 1.0;
      *(float *)(iVar3 + 0x94) = fVar6;
      *(float *)(*(int *)(iVar1 + iVar2) + 0xbc) = *(float *)(iVar3 + 0x98) + (1.0 - fVar7 * fVar7);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar2);
      if (iVar4 == 2) {
        fVar6 = *(float *)(iVar3 + 0x94) - 1.0;
        *(float *)(iVar1 + 0x60) =
             (float)(int)*(short *)(iVar3 + 0x8c) -
             (1.0 - fVar6 * fVar6) * (float)(int)*(short *)(iVar3 + 0x90);
        fVar6 = *(float *)(iVar3 + 0x94);
      }
      else {
        fVar6 = *(float *)(iVar3 + 0x94) - 1.0;
        *(float *)(iVar1 + 0x60) =
             (float)(int)*(short *)(iVar3 + 0x8c) +
             (1.0 - fVar6 * fVar6) * (float)(int)*(short *)(iVar3 + 0x90);
        fVar6 = *(float *)(iVar3 + 0x94);
      }
      if (1.0 <= fVar6) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0xbc) = 0x3f800000;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x60) =
             (float)(int)*(short *)(iVar3 + 0x8e);
        cVar5 = cVar5 + '\x01';
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0x68) = 0xc1a00000;
      }
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x28;
      iVar2 = iVar2 + 4;
    } while (iVar4 < 4);
  }
  else {
    iVar2 = 2;
    iVar3 = param_1 + 0x50;
    iVar4 = 8;
    do {
      fVar6 = *(float *)(iVar3 + 0x94) + 0.125;
      iVar1 = *(int *)(param_1 + 0x1c);
      *(float *)(iVar3 + 0x94) = fVar6;
      *(float *)(*(int *)(iVar1 + iVar4) + 0xbc) = *(float *)(iVar3 + 0x98) - fVar6 * fVar6;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0x90) =
           *(float *)(iVar3 + 0x9c) + *(float *)(iVar3 + 0x94) * *(float *)(iVar3 + 0x94);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(iVar1 + 0x90);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      FUN_089f4954(*(undefined4 *)(iVar1 + 0x90),*(undefined4 *)(iVar1 + 0x94),
                   *(undefined4 *)(iVar1 + 0x9c),iVar1,0);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      if (iVar2 == 2) {
        fVar6 = *(float *)(iVar3 + 0x94) - 1.0;
        *(float *)(iVar1 + 0x60) =
             (float)(int)*(short *)(iVar3 + 0x8c) - (1.0 - fVar6 * fVar6) * 64.0;
        fVar6 = *(float *)(iVar3 + 0x94);
      }
      else {
        fVar6 = *(float *)(iVar3 + 0x94) - 1.0;
        *(float *)(iVar1 + 0x60) =
             (float)(int)*(short *)(iVar3 + 0x8c) + (1.0 - fVar6 * fVar6) * 64.0;
        fVar6 = *(float *)(iVar3 + 0x94);
      }
      if (1.0 <= fVar6) {
        cVar5 = cVar5 + '\x01';
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x28;
      iVar4 = iVar4 + 4;
    } while (iVar2 < 4);
  }
  return cVar5 == '\x02';
}

