#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d1ec8(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined4 local_40;
  float local_3c;
  undefined4 local_38;
  float local_34;
  
  fVar7 = 0.0;
  fVar8 = 0.0;
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = 0;
  uVar1 = 0;
  if (param_2 == 0) {
    fVar7 = *(float *)(*(int *)(param_1 + 0x74) + 0x3c0);
    iVar3 = 0x44;
    iVar4 = 0x12;
    iVar5 = 4;
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0x74) + 0x3a1);
  }
  else {
    if (param_2 != 1) {
      iVar2 = *(int *)(param_1 + 0x1c);
      goto LAB_088d1f8c;
    }
    fVar7 = *(float *)(*(int *)(param_1 + 0x74) + 0x3bc);
    iVar3 = 0x15;
    iVar4 = 0x11;
    iVar5 = 5;
    uVar1 = FUN_088e1400();
  }
  fVar8 = fVar7 * 38.0;
  iVar2 = *(int *)(param_1 + 0x1c);
LAB_088d1f8c:
  iVar5 = iVar5 * 4;
  iVar4 = iVar4 * 4;
  if (fVar8 == 0.0) {
    iVar3 = *(int *)(iVar2 + iVar3 * 4);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
    *(undefined4 *)(iVar5 + 0xb0) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xb4) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xb8) = 0x3f800000;
    *(undefined4 *)(iVar5 + 0xbc) = 0x3f800000;
  }
  else {
    *(undefined4 *)(*(int *)(iVar2 + iVar4) + 0xb4) = 0x3f800000;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xc0) = 0;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    if (fVar7 <= 0.3333333) {
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(undefined4 *)(iVar2 + 0xb0) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xb4) = 0;
      *(undefined4 *)(iVar2 + 0xb8) = 0;
      *(undefined4 *)(iVar2 + 0xbc) = 0x3f800000;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
      *(undefined4 *)(iVar2 + 0xc0) = 0x3f800000;
      *(undefined4 *)(iVar2 + 0xc4) = 0;
      *(undefined4 *)(iVar2 + 200) = 0;
      *(undefined4 *)(iVar2 + 0xcc) = 0x3f800000;
      if ((uVar1 != 0) && (iVar2 = (*param_3 + 1) % 0xc, *param_3 = iVar2, 6.0 < (float)iVar2)) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
        *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
      }
    }
    uVar6 = FUN_089f4944(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 100) = 0x437f0000;
    FUN_089f4924(uVar6,fVar8,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4));
    local_3c = 39.0 - fVar8;
    local_40 = 0;
    local_38 = uVar6;
    local_34 = fVar8;
    FUN_089f4060(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),&local_40);
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) | 1;
    iVar5 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3 * 4);
    *(uint *)(iVar5 + 0xd0) = *(uint *)(iVar5 + 0xd0) & 0xfffffffe;
  }
  return;
}

