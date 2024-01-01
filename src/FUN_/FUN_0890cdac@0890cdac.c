#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890cdac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 in_V7C;
  undefined auStack_50 [36];
  int local_2c;
  
  if ((*(int *)(DAT_08ac0e80 + 0x20) != 0) && (iVar1 = FUN_089fbbe0(), iVar1 != 0)) {
    fVar6 = 0.0;
    iVar1 = **(int **)(DAT_08ac0e80 + 4);
    if (*(char *)(param_1 + 0x1bd) == '\0') {
      *(undefined4 *)(iVar1 + 0xbc) = 0;
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      iVar3 = *(int *)(param_1 + 0x18) * 8;
      iVar4 = *(int *)(&DAT_08a9b090 + iVar3);
      if (iVar4 < 2) {
        if (0 < iVar4) {
          FUN_089b4c84(auStack_50,"tips_t_%03d",*(undefined4 *)(&DAT_08a9b094 + iVar3));
        }
      }
      else if (iVar4 < 3) {
        FUN_089b4c84(auStack_50,"tips_%03d",*(undefined4 *)(&DAT_08a9b094 + iVar3));
      }
      local_2c = 0;
      FUN_089d8634();
      uVar2 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar4 = FUN_089d7d74(0x140,0,0);
      FUN_089d816c(uVar2);
      FUN_089d866c();
      iVar3 = local_2c;
      if (iVar4 != 0) {
        uVar2 = FUN_089fbcb8(*(undefined4 *)(DAT_08ac0e80 + 0x20));
        FUN_089f6cdc(iVar4,auStack_50,uVar2,0);
        iVar3 = iVar4;
      }
      *(int *)(DAT_08ac0e80 + 0x24) = iVar3;
      *(undefined4 *)(iVar1 + 0xd4) = *(undefined4 *)(DAT_08ac0e80 + 0x24);
      FUN_0890bc38(0,0,0x43b00000,0x43300000,param_1,iVar1);
      *(undefined *)(param_1 + 0x1bd) = 1;
      return;
    }
    fVar5 = *(float *)(param_1 + 0x1c4) + 0.1;
    *(float *)(param_1 + 0x1c4) = fVar5;
    if (fVar5 < 0.0) {
      *(undefined4 *)(param_1 + 0x1c4) = 0;
    }
    else {
      if (1.570796 < fVar5) {
        fVar5 = 1.570796;
      }
      *(float *)(param_1 + 0x1c4) = fVar5;
      fVar6 = fVar5;
    }
    uVar2 = vmul_s(fVar6,in_V7C);
    uVar2 = vsin_s(uVar2);
    *(undefined4 *)(param_1 + 0x1c0) = uVar2;
    *(undefined4 *)(iVar1 + 0xbc) = uVar2;
  }
  return;
}

