#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089ae4e0(int param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  cVar2 = '\0';
  if (param_2 == '\0') {
    iVar5 = 1;
    iVar4 = param_1 + 0x28;
    iVar3 = 4;
    do {
      fVar6 = *(float *)(iVar4 + 0x94) + 0.0625;
      iVar1 = *(int *)(param_1 + 0x1c);
      fVar7 = fVar6 - 1.0;
      *(float *)(iVar4 + 0x94) = fVar6;
      *(float *)(*(int *)(iVar1 + iVar3) + 0xbc) = *(float *)(iVar4 + 0x98) + (1.0 - fVar7 * fVar7);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      if (iVar5 < 0xd) {
        fVar6 = *(float *)(iVar4 + 0x94) - 1.0;
        *(float *)(iVar1 + 0x60) =
             (float)(int)*(short *)(iVar4 + 0x8c) +
             (1.0 - fVar6 * fVar6) * (float)(int)*(short *)(iVar4 + 0x90);
        fVar6 = *(float *)(iVar4 + 0x94);
      }
      else {
        fVar6 = *(float *)(iVar4 + 0x94) - 1.0;
        *(float *)(iVar1 + 0x60) =
             (float)(int)*(short *)(iVar4 + 0x8c) -
             (1.0 - fVar6 * fVar6) * (float)(int)*(short *)(iVar4 + 0x90);
        fVar6 = *(float *)(iVar4 + 0x94);
      }
      if (1.0 <= fVar6) {
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0x3f800000;
        cVar2 = cVar2 + '\x01';
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x60) =
             (float)(int)*(short *)(iVar4 + 0x92);
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 4;
    } while (iVar5 < 0x19);
  }
  else {
    iVar5 = 1;
    iVar4 = param_1 + 0x28;
    iVar3 = 4;
    do {
      fVar6 = *(float *)(iVar4 + 0x94) + 0.0625;
      iVar1 = *(int *)(param_1 + 0x1c);
      *(float *)(iVar4 + 0x94) = fVar6;
      *(float *)(*(int *)(iVar1 + iVar3) + 0xbc) = *(float *)(iVar4 + 0x98) - fVar6 * fVar6;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x60) =
           (float)(int)*(short *)(iVar4 + 0x8c) +
           *(float *)(iVar4 + 0x94) * *(float *)(iVar4 + 0x94) *
           (float)(int)*(short *)(iVar4 + 0x90);
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x90) =
           *(float *)(iVar4 + 0x9c) + *(float *)(iVar4 + 0x94) * *(float *)(iVar4 + 0x94) * 0.5;
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      *(undefined4 *)(iVar1 + 0x94) = *(undefined4 *)(iVar1 + 0x90);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
      FUN_089f4954(*(undefined4 *)(iVar1 + 0x90),*(undefined4 *)(iVar1 + 0x94),
                   *(undefined4 *)(iVar1 + 0x9c),iVar1,0);
      if (1.0 <= *(float *)(iVar4 + 0x94)) {
        cVar2 = cVar2 + '\x01';
        iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
      }
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 0x28;
      iVar3 = iVar3 + 4;
    } while (iVar5 < 0x19);
  }
  return cVar2 != '\0';
}

