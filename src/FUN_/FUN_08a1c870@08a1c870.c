#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a1c870(int param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  ushort *puVar5;
  undefined *local_e0 [18];
  undefined auStack_98 [120];
  
  FUN_08a12a64(auStack_98);
  if ((((param_1 != 0) && (param_2 != (int *)0x0)) && (0x1e < param_3 - 1U)) &&
     (((*param_2 == 0x2e474d4f && (param_2[1] == 0x312e3030)) &&
      ((param_2[2] == 0x505350 && (piVar3 = param_2 + 4, piVar3 != (int *)0x0)))))) {
    puVar5 = (ushort *)(param_2[5] + (int)piVar3);
    iVar4 = param_4;
    if (-1 < *(short *)(param_2 + 4)) {
      puVar5 = (ushort *)((int)piVar3 + param_2[6]);
    }
    for (; puVar5 < (ushort *)(param_2[5] + (int)piVar3); puVar5 = (ushort *)((int)puVar5 + iVar1))
    {
      if ((*puVar5 & 0x7fff) == 3) {
        iVar4 = iVar4 + -1;
        if (iVar4 == -1) {
          local_e0[0] = auStack_98;
          FUN_08a19ddc(local_e0);
          iVar4 = FUN_08a136f0(auStack_98);
          if (iVar4 != 0) {
            uVar2 = FUN_08a1c748(param_1,param_2,param_3,param_4,auStack_98);
            FUN_08a12fb4(auStack_98);
            return uVar2;
          }
          return 0;
        }
        iVar1 = *(int *)(puVar5 + 2);
      }
      else {
        iVar1 = *(int *)(puVar5 + 2);
      }
    }
  }
  return 0;
}

