#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0893a038(int param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_1 + 0x7a0) + 0.125;
  if (param_2 == '\0') {
    *(float *)(param_1 + 0x7a0) = fVar4;
    *(float *)(*(int *)(param_1 + 0x794) + 0x6c) =
         *(float *)(param_1 + 0x7a4) + (1.0 - (fVar4 - 1.0) * (fVar4 - 1.0));
    iVar2 = *(int *)(param_1 + 0x794);
    fVar4 = (float)FUN_08939fcc(param_1,*(uint *)(param_1 + 0x7ec) & 0xff);
    fVar5 = *(float *)(param_1 + 0x7a0);
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    fVar4 = (fVar4 + 0.6) - fVar5 * 0.6;
    *(float *)(iVar2 + 0x40) = fVar4;
    *(float *)(iVar2 + 0x44) = fVar4;
    *(float *)(iVar2 + 0x48) = fVar4;
    bVar1 = true;
    if (*(float *)(param_1 + 0x7a0) < 1.0) goto LAB_0893a1a0;
    *(undefined4 *)(*(int *)(param_1 + 0x794) + 0x6c) = 0x3f800000;
    iVar2 = *(int *)(param_1 + 0x794);
    uVar3 = FUN_08939fcc(param_1,*(uint *)(param_1 + 0x7ec) & 0xff);
    *(undefined4 *)(iVar2 + 0x40) = uVar3;
    *(undefined4 *)(iVar2 + 0x44) = uVar3;
    *(undefined4 *)(iVar2 + 0x48) = uVar3;
    *(undefined4 *)(iVar2 + 0x4c) = 0;
  }
  else {
    *(float *)(param_1 + 0x7a0) = fVar4;
    *(float *)(*(int *)(param_1 + 0x794) + 0x6c) = *(float *)(param_1 + 0x7a4) - fVar4 * fVar4;
    iVar2 = *(int *)(param_1 + 0x794);
    fVar4 = (float)FUN_08939fcc(param_1,*(uint *)(param_1 + 0x7ec) & 0xff);
    fVar5 = *(float *)(param_1 + 0x7a0);
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    fVar4 = fVar4 + fVar5 * 0.6;
    *(float *)(iVar2 + 0x40) = fVar4;
    *(float *)(iVar2 + 0x44) = fVar4;
    *(float *)(iVar2 + 0x48) = fVar4;
    bVar1 = true;
    if (*(float *)(param_1 + 0x7a0) < 1.0) goto LAB_0893a1a0;
    *(undefined4 *)(*(int *)(param_1 + 0x794) + 0x6c) = 0;
  }
  bVar1 = false;
LAB_0893a1a0:
  return !bVar1;
}

