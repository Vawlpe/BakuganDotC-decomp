#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e0be0(int param_1)

{
  short sVar1;
  short sVar2;
  uint *puVar3;
  int iVar4;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  if ((*(char *)(*(int *)(param_1 + 0x350) + 0x39) == '\x01') &&
     (puVar3 = *(uint **)(param_1 + 0x35c), puVar3 != (uint *)0x0)) {
    if (*(uint *)(param_1 + 0x360) < *puVar3) {
      iVar4 = *(int *)(param_1 + 0x360);
    }
    else {
      if (*(char *)(param_1 + 0x391) != '\0') {
        *(undefined *)(*(int *)(param_1 + 0x350) + 0x39) = 0;
        *(undefined *)(*(int *)(param_1 + 0x350) + 0x42) = 0;
        *(undefined4 *)(param_1 + 0x35c) = 0;
        *(undefined *)(param_1 + 0x391) = 0;
        FUN_088e05dc(param_1,0,0);
        *(undefined4 *)(param_1 + 0x80) = in_V72;
        *(undefined4 *)(param_1 + 0x84) = in_V76;
        *(undefined4 *)(param_1 + 0x88) = in_V7A;
        *(undefined4 *)(param_1 + 0x8c) = in_V7E;
        return;
      }
      *(undefined4 *)(param_1 + 0x360) = 0;
      if (*(int *)(param_1 + 8) == 0x4d) {
        *(undefined4 *)(param_1 + 0x360) = 4;
        iVar4 = *(int *)(param_1 + 0x360);
      }
      else {
        iVar4 = *(int *)(param_1 + 0x360);
      }
    }
    sVar1 = *(short *)(puVar3 + iVar4 * 2 + 1);
    if (sVar1 < 1) {
      if (-1 < sVar1) {
        FUN_088e05dc(param_1,0,0);
        *(int *)(param_1 + 0x324) =
             (int)*(short *)(*(int *)(param_1 + 0x35c) + *(int *)(param_1 + 0x360) * 8 + 6) / 2;
      }
    }
    else if (sVar1 < 2) {
      FUN_088e05dc(param_1,10,0);
      *(undefined4 *)(param_1 + 0x324) = 0;
      iVar4 = *(int *)(param_1 + 0x35c) + 4 + *(int *)(param_1 + 0x360) * 8;
      sVar1 = *(short *)(iVar4 + 2);
      sVar2 = *(short *)(iVar4 + 4);
      *(undefined4 *)(param_1 + 0x374) = 0;
      *(undefined4 *)(param_1 + 0x37c) = 0;
      *(float *)(param_1 + 0x370) = (float)(int)sVar1 * 0.2;
      *(float *)(param_1 + 0x378) = (float)(int)sVar2 * 0.2;
      *(float *)(param_1 + 0x154) = (float)(int)*(short *)(iVar4 + 6) * 0.1 * 0.03333334;
    }
  }
  return;
}

