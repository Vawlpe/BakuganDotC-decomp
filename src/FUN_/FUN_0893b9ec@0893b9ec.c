#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0893b9ec(int param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 0x7f8) == '\0') {
    return 1;
  }
  iVar2 = *(int *)(param_1 + 0x7f4);
  if (iVar2 < 2) {
    if (iVar2 < 0) {
      return 1;
    }
    iVar4 = *(int *)(param_1 + 0x7f0);
    iVar5 = *(int *)(param_1 + 0x1c);
    if (iVar2 < 1) {
      bVar1 = iVar4 < 9;
      if (4.0 < (float)iVar4) {
        *(uint *)(*(int *)(iVar5 + 0x8c) + 0xd0) = *(uint *)(*(int *)(iVar5 + 0x8c) + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + 0xbc) = 0x3f800000;
        iVar4 = *(int *)(param_1 + 0x7f0);
        *(int *)(param_1 + 0x7f4) = *(int *)(param_1 + 0x7f4) + 1;
        iVar5 = *(int *)(param_1 + 0x1c);
        bVar1 = iVar4 < 9;
      }
    }
    else {
      bVar1 = iVar4 < 9;
    }
    iVar2 = *(int *)(iVar5 + 0x90);
    if (!bVar1) {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x7f0) = 0;
      *(int *)(param_1 + 0x7f4) = *(int *)(param_1 + 0x7f4) + 1;
      iVar4 = 0;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x90);
    }
    FUN_089f4954((float)iVar4 * 0.25,(float)iVar4 * 0.25,0,iVar2,0);
    iVar5 = *(int *)(param_1 + 0x7f0);
  }
  else if (iVar2 < 3) {
    iVar5 = *(int *)(param_1 + 0x7f0);
    if (0x1e < iVar5) {
      *(undefined4 *)(param_1 + 0x7f0) = 0;
      *(int *)(param_1 + 0x7f4) = iVar2 + 1;
      iVar5 = 0;
    }
  }
  else {
    if (3 < iVar2) {
      return 1;
    }
    fVar6 = (float)*(int *)(param_1 + 0x7f0) * 0.125 + 1.0;
    FUN_089f4954(fVar6,fVar6,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c),0);
    pfVar3 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x8c) + 0xbc);
    *pfVar3 = *pfVar3 - (float)*(int *)(param_1 + 0x7f0) * 0.125;
    iVar5 = *(int *)(param_1 + 0x7f0);
    if (8 < iVar5) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x8c);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      *(undefined4 *)(param_1 + 0x7f0) = 0;
      *(int *)(param_1 + 0x7f4) = *(int *)(param_1 + 0x7f4) + 1;
      iVar5 = 0;
    }
  }
  *(int *)(param_1 + 0x7f0) = iVar5 + 1;
  return 0;
}

