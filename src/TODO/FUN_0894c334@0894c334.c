#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0894c334(int param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;
  
  iVar2 = *(int *)(param_1 + 0x70);
  if (param_2 == 0) {
    if (5 < iVar2) {
      uVar4 = *(undefined4 *)
               (*(int *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x74) * 4 + 4) + 100);
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x48) + 100) = uVar4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x14) + 100) = uVar4;
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 100) = uVar4;
      FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x18),0);
      FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48),0);
      FUN_089f4954(0x3f933333,0x3f933333,0,
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x74) * 4 + 4),0);
      FUN_089f4954(0x3f933333,0x3f933333,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14),0);
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      return 1;
    }
    fVar5 = (float)(6 - iVar2);
    uVar6 = 0x40c00000;
    uVar4 = FUN_089483f8(0x3f99999a,0x40c00000,fVar5);
    uVar6 = FUN_089483f8(0x3f8ccccd,uVar6,fVar5);
    iVar3 = 1;
    iVar2 = 4;
    do {
      pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0xbc);
      *pfVar1 = *pfVar1 + 0.1666667;
      FUN_089f4954(uVar4,uVar6,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),0);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0xb);
    iVar3 = *(int *)(param_1 + 0x70) + 1;
  }
  else {
    iVar3 = iVar2 + 1;
    if (param_2 == 1) {
      fVar5 = (float)iVar2;
      uVar6 = 0x40c00000;
      FUN_089483f8(0x3fcccccd,0x40c00000,fVar5);
      uVar4 = FUN_089483f8(0x3f99999a,uVar6,fVar5);
      uVar6 = FUN_089483f8(0x3f8ccccd,uVar6,fVar5);
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + 0x48);
      iVar3 = 0;
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
      iVar2 = 0;
      do {
        if ((((iVar3 != 0) && (iVar3 != 0xb)) && (iVar3 != 0xc)) && (iVar3 != 0xd)) {
          pfVar1 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar2) + 0xbc);
          *pfVar1 = *pfVar1 - 0.1666667;
          FUN_089f4954(uVar4,uVar6,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2),0);
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 4;
      } while (iVar3 < 0xe);
      iVar3 = *(int *)(param_1 + 0x70) + 1;
      if (6 < *(int *)(param_1 + 0x70)) {
        return 1;
      }
    }
  }
  *(int *)(param_1 + 0x70) = iVar3;
  return 0;
}

