#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0892e2bc(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  
  if (*(char *)(param_1 + 0x1c94) != '\0') {
    iVar4 = 0;
    fVar5 = *(float *)(param_1 + 0x1ca4) + 0.0625;
    *(float *)(param_1 + 0x1ca4) = fVar5;
    iVar2 = param_1;
    do {
      iVar3 = param_1 + iVar4;
      pfVar1 = (float *)(iVar2 + 0x1ca8);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 4;
      *(char *)(iVar3 + 0x1c99) =
           (char)(int)((float)(uint)*(byte *)(iVar3 + 0x1c95) + fVar5 * fVar5 * *pfVar1);
    } while (iVar4 < 4);
    if (1.0 <= fVar5) {
      iVar4 = 0;
      iVar2 = param_1;
      do {
        iVar4 = iVar4 + 1;
        *(undefined *)(iVar2 + 0x1c99) = *(undefined *)(iVar2 + 0x1c9d);
        iVar2 = param_1 + iVar4;
      } while (iVar4 < 4);
      *(undefined *)(param_1 + 0x1c94) = 0;
    }
    iVar2 = 0;
    iVar4 = 0;
    do {
      local_30 = 0;
      local_2c = 0;
      local_24 = 0x41800000;
      local_28 = (float)(((uint)*(byte *)(param_1 + iVar2 + 0x1c99) * 0x3f) / 100 + 9);
      FUN_089f4060(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x30),&local_30);
      FUN_089f4924((float)(((uint)*(byte *)(param_1 + iVar2 + 0x1c99) * 0x3f) / 100 + 9),0x41800000,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4 + 0x30));
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < 4);
  }
  return;
}

