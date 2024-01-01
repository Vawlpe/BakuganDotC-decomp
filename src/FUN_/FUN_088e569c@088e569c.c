#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e569c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 in_V7C;
  
  if (*(int *)(param_1 + 0x460) == 3) {
    *(undefined *)(*(int *)(param_1 + 0x16c) + 0x20) = 1;
    iVar1 = *(int *)(param_1 + 0x46c);
    if (iVar1 < 1) {
      if (-1 < iVar1) {
        uVar2 = vmul_s((float)*(int *)(param_1 + 0x468) * 0.005555556 * 3.141593,in_V7C);
        fVar3 = (float)vsin_s(uVar2);
        *(float *)(param_1 + 0x6c) = fVar3 * 0.2;
        if (0x5a < *(int *)(param_1 + 0x468)) {
          *(undefined4 *)(param_1 + 0x46c) = 1;
          *(undefined4 *)(param_1 + 0x468) = 0;
        }
        *(int *)(param_1 + 0x468) = *(int *)(param_1 + 0x468) + 0xf;
        return;
      }
    }
    else if (iVar1 < 2) {
      *(undefined4 *)(param_1 + 0x6c) = 0x3e4ccccd;
      iVar1 = *(int *)(param_1 + 0x468) + 1;
      *(int *)(param_1 + 0x468) = iVar1;
      if (0x1e < iVar1) {
        *(undefined4 *)(param_1 + 0x46c) = 2;
        *(undefined4 *)(param_1 + 0x468) = 0;
        return;
      }
    }
    else if (iVar1 < 3) {
      uVar2 = vmul_s((float)*(int *)(param_1 + 0x468) * 0.005555556 * 3.141593,in_V7C);
      fVar3 = (float)vcos_s(uVar2);
      *(float *)(param_1 + 0x6c) = fVar3 * 0.2;
      iVar1 = *(int *)(param_1 + 0x468) + 0xf;
      *(int *)(param_1 + 0x468) = iVar1;
      if (0x5a < iVar1) {
        *(undefined4 *)(param_1 + 0x46c) = 1;
        *(undefined4 *)(param_1 + 0x468) = 0;
        FUN_088e5414(param_1,0);
      }
    }
  }
  return;
}

