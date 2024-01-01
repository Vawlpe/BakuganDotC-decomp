#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089a7728(int param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(param_1 + 0x184) + 0.125;
  bVar1 = false;
  fVar6 = (float)(int)*(short *)(param_1 + 0x17c);
  iVar2 = *(int *)(param_1 + 0x1c);
  fVar4 = (float)(int)*(short *)(param_1 + 0x180);
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x16f) == '\0') {
      *(float *)(param_1 + 0x184) = fVar5;
      *(float *)(*(int *)(iVar2 + 0x18) + 100) =
           fVar6 + (1.0 - (fVar5 - 1.0) * (fVar5 - 1.0)) * fVar4;
      fVar4 = *(float *)(param_1 + 0x184) - 1.0;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x90) =
           *(float *)(param_1 + 0x18c) + (1.0 - fVar4 * fVar4) * 0.4;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
      *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c);
      iVar3 = *(int *)(iVar2 + 0x18);
      if (1.0 <= *(float *)(param_1 + 0x184)) {
        *(float *)(iVar3 + 100) = (float)(int)*(short *)(param_1 + 0x17e);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x90) = 0x3f99999a;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x94) = 0x3f99999a;
        iVar2 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x90);
        *(short *)(param_1 + 0x17e) = (short)(int)(*(float *)(*(int *)(iVar2 + 0x18) + 100) + 20.0);
        fVar4 = *(float *)(*(int *)(iVar2 + 0x18) + 100);
        *(undefined4 *)(param_1 + 0x184) = 0;
        *(undefined *)(param_1 + 0x16f) = 1;
        *(short *)(param_1 + 0x17c) = (short)(int)fVar4;
        iVar3 = *(int *)(iVar2 + 0x18);
      }
    }
    else {
      *(float *)(param_1 + 0x184) = fVar5;
      *(float *)(*(int *)(iVar2 + 0x18) + 100) = fVar6 + fVar5 * fVar5 * fVar4;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x90) =
           *(float *)(param_1 + 0x18c) -
           *(float *)(param_1 + 0x184) * *(float *)(param_1 + 0x184) * 0.2;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
      *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c);
      iVar3 = *(int *)(iVar2 + 0x18);
      if (1.0 <= *(float *)(param_1 + 0x184)) {
        bVar1 = true;
        *(float *)(iVar3 + 100) = (float)(int)*(short *)(param_1 + 0x17e);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x90) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x94) = 0x3f800000;
        iVar2 = *(int *)(param_1 + 0x1c);
        iVar3 = *(int *)(iVar2 + 0x18);
      }
    }
    iVar2 = *(int *)(iVar2 + 0x18);
    FUN_089f4954(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),
                 *(undefined4 *)(iVar2 + 0x9c),iVar3,0);
  }
  else {
    if (*(char *)(param_1 + 0x16f) == '\0') {
      *(float *)(param_1 + 0x184) = fVar5;
      *(float *)(*(int *)(iVar2 + 0x18) + 100) =
           fVar6 - (1.0 - (fVar5 - 1.0) * (fVar5 - 1.0)) * fVar4;
      fVar4 = *(float *)(param_1 + 0x184) - 1.0;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x90) =
           *(float *)(param_1 + 0x18c) + (1.0 - fVar4 * fVar4) * 0.2;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
      *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c);
      iVar3 = *(int *)(iVar2 + 0x18);
      if (1.0 <= *(float *)(param_1 + 0x184)) {
        *(float *)(iVar3 + 100) = (float)(int)*(short *)(param_1 + 0x17e);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x90) = 0x3f99999a;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x94) = 0x3f99999a;
        iVar2 = *(int *)(param_1 + 0x1c);
        *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(*(int *)(iVar2 + 0x18) + 0x90);
        *(short *)(param_1 + 0x17e) = (short)(int)(*(float *)(*(int *)(iVar2 + 0x18) + 100) - 20.0);
        fVar4 = *(float *)(*(int *)(iVar2 + 0x18) + 100);
        *(undefined4 *)(param_1 + 0x184) = 0;
        *(undefined *)(param_1 + 0x16f) = 1;
        *(short *)(param_1 + 0x17c) = (short)(int)fVar4;
        iVar3 = *(int *)(iVar2 + 0x18);
      }
    }
    else {
      *(float *)(param_1 + 0x184) = fVar5;
      *(float *)(*(int *)(iVar2 + 0x18) + 100) = fVar6 - fVar5 * fVar5 * fVar4;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x90) =
           *(float *)(param_1 + 0x18c) -
           *(float *)(param_1 + 0x184) * *(float *)(param_1 + 0x184) * 0.4;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x18);
      *(undefined4 *)(iVar2 + 0x94) = *(undefined4 *)(iVar2 + 0x90);
      iVar2 = *(int *)(param_1 + 0x1c);
      iVar3 = *(int *)(iVar2 + 0x18);
      if (1.0 <= *(float *)(param_1 + 0x184)) {
        *(float *)(iVar3 + 100) = (float)(int)*(short *)(param_1 + 0x17e);
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x90) = 0x3f4ccccd;
        bVar1 = true;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x94) = 0x3f4ccccd;
        iVar2 = *(int *)(param_1 + 0x1c);
        iVar3 = *(int *)(iVar2 + 0x18);
      }
    }
    iVar2 = *(int *)(iVar2 + 0x18);
    FUN_089f4954(*(undefined4 *)(iVar2 + 0x90),*(undefined4 *)(iVar2 + 0x94),
                 *(undefined4 *)(iVar2 + 0x9c),iVar3,0);
    bVar1 = bVar1 != false;
  }
  return bVar1;
}

