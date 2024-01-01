#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08840420)
// WARNING: Removing unreachable block (ram,0x088402c0)
// WARNING: Removing unreachable block (ram,0x08840384)
// WARNING: Removing unreachable block (ram,0x0884045c)

void FUN_088401e8(int param_1)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  
  iVar5 = 0;
  iVar1 = *(int *)(param_1 + 0x58);
  iVar4 = 0;
  iVar3 = -0x18;
  do {
    iVar1 = FUN_089f5630(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(iVar1 + 0x14c));
    *(int *)(*(int *)(param_1 + 0x58) + iVar4 + 0x174) = iVar1;
    *(float *)(iVar1 + 0x68) = *(float *)(iVar1 + 0x68) + 4.0;
    *(float *)(iVar1 + 100) = (float)iVar3;
    uVar7 = vrndi_s();
    FUN_089f4954((float)(((uVar7 >> 0x10) * 10 >> 0x10) + 8) * 0.1,0x3f800000,0,iVar1,0);
    *(undefined4 *)(iVar1 + 0xbc) = 0;
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 8;
    iVar1 = *(int *)(param_1 + 0x58);
  } while (iVar5 < 0x29);
  iVar3 = 0;
  iVar4 = 0;
  iVar5 = -0x18;
  do {
    iVar1 = FUN_089f5630(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(iVar1 + 0x150));
    *(int *)(*(int *)(param_1 + 0x58) + iVar4 + 0x218) = iVar1;
    *(float *)(iVar1 + 100) = (float)iVar5;
    *(float *)(iVar1 + 0x68) = *(float *)(iVar1 + 0x68) + 4.0;
    uVar7 = vrndi_s();
    fVar6 = (float)(((uVar7 >> 0x10) * 10 >> 0x10) + 8) * 0.1;
    FUN_089f4954(fVar6,0x3f800000,0,iVar1,0);
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 8;
    *(float *)(iVar1 + 0x60) = *(float *)(iVar1 + 0x60) - (fVar6 - 1.0) * 32.0;
    *(undefined4 *)(iVar1 + 0xbc) = 0;
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    iVar1 = *(int *)(param_1 + 0x58);
  } while (iVar3 < 0x29);
  iVar1 = *(int *)(iVar1 + 0x154);
  uVar7 = vrndi_s();
  *(float *)(iVar1 + 100) = (float)((uVar7 >> 0x10) * 0x110 >> 0x10);
  uVar7 = vrndi_s();
  *(float *)(iVar1 + 0x60) = (float)(((uVar7 >> 0x10) * 0x1c >> 0x10) + 0x1a4);
  *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x58) + 0x148);
  pfVar2 = (float *)(iVar1 + 0x68);
  *pfVar2 = *pfVar2 + 6.0;
  *(undefined4 *)(iVar1 + 0xbc) = 0;
  return;
}

