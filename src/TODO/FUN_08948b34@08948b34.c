#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08948b34(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  
  if (param_2 == 0) {
    iVar1 = FUN_089a97ec(0);
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 < 6) {
      pfVar3 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x34) + 0xbc);
      fVar7 = *pfVar3 + 0.1666667;
      *pfVar3 = fVar7;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 0xbc) = fVar7;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x2c) + 0xbc) = fVar7;
      *(float *)(**(int **)(param_1 + 0x1c) + 0xbc) = fVar7;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0xbc) = fVar7;
      *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x40) + 0xbc) = fVar7;
    }
    else {
      if (iVar2 < 0xc) {
        fVar7 = (float)(0xc - iVar2);
        uVar8 = 0x40c00000;
        uVar6 = FUN_089483f8(0x3f99999a,0x40c00000,fVar7);
        uVar8 = FUN_089483f8(0x3f8ccccd,uVar8,fVar7);
        iVar1 = 1;
        iVar2 = 4;
        do {
          pfVar3 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0xbc);
          *pfVar3 = *pfVar3 + 0.1666667;
          FUN_089f4954(uVar6,uVar8,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),0);
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar1 < 0xb);
        iVar1 = *(int *)(param_1 + 0x70);
        goto LAB_08948c08;
      }
      uVar6 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 4) + 100);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 100) = uVar6;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 100) = uVar6;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 100) = uVar6;
      FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),0);
      FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48),0);
      FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4),0);
      FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14),0);
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      if (iVar1 != 0) {
        return 1;
      }
    }
    iVar1 = *(int *)(param_1 + 0x70);
  }
  else if (param_2 == 1) {
    fVar7 = (float)*(int *)(param_1 + 0x70);
    uVar8 = 0x40c00000;
    FUN_089483f8(0x3fcccccd,0x40c00000,fVar7);
    uVar6 = FUN_089483f8(0x3f99999a,uVar8,fVar7);
    uVar8 = FUN_089483f8(0x3f8ccccd,uVar8,fVar7);
    iVar1 = FUN_089a97ec(1);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x48);
    iVar4 = 0;
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    iVar2 = *(int *)(param_1 + 0x1c);
    iVar5 = 0;
    do {
      iVar2 = *(int *)(iVar2 + iVar5);
      if (iVar4 == 0) {
LAB_08948f2c:
        iVar2 = iVar2 + 0xb0;
      }
      else if (iVar4 == 0xb) {
        iVar2 = iVar2 + 0xb0;
      }
      else if (iVar4 == 0xc) {
        iVar2 = iVar2 + 0xb0;
      }
      else {
        if (iVar4 != 0xd) {
          FUN_089f4954(uVar6,uVar8,0,iVar2,0);
          iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar5);
          goto LAB_08948f2c;
        }
        iVar2 = iVar2 + 0xb0;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 4;
      *(float *)(iVar2 + 0xc) = *(float *)(iVar2 + 0xc) - 0.1666667;
      iVar2 = *(int *)(param_1 + 0x1c);
    } while (iVar4 < 0xe);
    pfVar3 = (float *)(*(int *)(iVar2 + 0x40) + 0xbc);
    *pfVar3 = *pfVar3 - 0.1666667;
    pfVar3 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x44) + 0xbc);
    *pfVar3 = *pfVar3 - 0.1666667;
    if (*(int *)(param_1 + 0x70) < 7) {
      iVar1 = *(int *)(param_1 + 0x70);
    }
    else {
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = *(int *)(param_1 + 0x70);
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x70);
  }
LAB_08948c08:
  *(int *)(param_1 + 0x70) = iVar1 + 1;
  return 0;
}

