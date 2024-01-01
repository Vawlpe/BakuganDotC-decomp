#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a1c748(int param_1,int *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  ushort *puVar3;
  ushort *puVar4;
  int local_60 [20];
  
  if (param_1 != 0) {
    if (param_5 == 0) {
      return 0;
    }
    if ((param_2 != (int *)0x0) && (0x1e < param_3 - 1U)) {
      if (*param_2 != 0x2e474d4f) {
        return 0;
      }
      if (param_2[1] != 0x312e3030) {
        return 0;
      }
      if (param_2[2] != 0x505350) {
        return 0;
      }
      piVar2 = param_2 + 4;
      if (piVar2 == (int *)0x0) {
        return 0;
      }
      puVar4 = (ushort *)(param_2[5] + (int)piVar2);
      puVar3 = puVar4;
      if (-1 < *(short *)(param_2 + 4)) {
        puVar3 = (ushort *)((int)piVar2 + param_2[6]);
      }
      if (puVar3 < puVar4) {
        do {
          if ((*puVar3 & 0x7fff) == 3) {
            param_4 = param_4 + -1;
            if (param_4 == -1) {
              FUN_08a15204(param_1);
              local_60[0] = param_5;
              FUN_08a1a774(local_60,puVar3,param_1);
              zz_sceKernelDcacheWritebackAll();
              return 1;
            }
            iVar1 = *(int *)(puVar3 + 2);
          }
          else {
            iVar1 = *(int *)(puVar3 + 2);
          }
          puVar3 = (ushort *)((int)puVar3 + iVar1);
        } while (puVar3 < puVar4);
        return 0;
      }
    }
  }
  return 0;
}

