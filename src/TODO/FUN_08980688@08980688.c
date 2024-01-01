#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08980688(int param_1,char param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  if (param_2 == '\0') {
    FUN_0897a068(param_1,*(undefined *)(param_1 + 0xee1),*(undefined *)(param_1 + 0x1318));
    iVar4 = param_1 + *(char *)(param_1 + 0x1318) * 8;
    FUN_089a5aec(*(undefined4 *)(iVar4 + 0x12c8),
                 *(float *)(iVar4 + 0x12cc) + *(float *)(param_1 + 0x1398),&local_38);
    iVar4 = param_1 + *(char *)(param_1 + 0x1318) * 0x28;
    *(short *)(iVar4 + 0x114c) = (short)(int)local_38;
    *(short *)(iVar4 + 0x114e) = (short)(int)local_34;
    uVar6 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xe4) + 0x60);
    fVar5 = (float)FUN_0897c824(param_1);
    FUN_089a5aec(uVar6,*(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xe4) + 100) + fVar5,&local_30
                );
    cVar1 = *(char *)(param_1 + 0x1318);
    iVar4 = param_1 + cVar1 * 0x28;
    *(short *)(iVar4 + 0x1150) = (short)(int)local_30;
    *(short *)(iVar4 + 0x1152) = (short)(int)local_2c;
    sVar2 = *(short *)(iVar4 + 0x1152);
    sVar3 = *(short *)(iVar4 + 0x114e);
    *(float *)(param_1 + 0x131c) =
         (float)((int)*(short *)(iVar4 + 0x1150) - (int)*(short *)(iVar4 + 0x114c));
    *(float *)(param_1 + 0x1320) = (float)((int)sVar2 - (int)sVar3);
    fVar5 = (float)FUN_0897c7b4(param_1,cVar1);
    *(float *)(param_1 + 0x1324) = fVar5;
    *(float *)(param_1 + 0x1328) = fVar5 * 1.4;
    *(undefined4 *)(param_1 + *(char *)(param_1 + 0x1318) * 0x28 + 0x1154) = 0;
  }
  else {
    FUN_0897a068(param_1,*(undefined *)(param_1 + 0xee1),*(undefined *)(param_1 + 0x1318));
    iVar4 = param_1 + *(char *)(param_1 + 0x1318) * 8;
    FUN_089a5aec(*(undefined4 *)(iVar4 + 0x12c8),
                 *(float *)(iVar4 + 0x12cc) + *(float *)(param_1 + 0x1398),&local_28);
    iVar4 = param_1 + *(char *)(param_1 + 0x1318) * 0x28;
    *(short *)(iVar4 + 0x1150) = (short)(int)local_28;
    *(short *)(iVar4 + 0x1152) = (short)(int)local_24;
    uVar6 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xe4) + 0x60);
    fVar5 = (float)FUN_0897c824(param_1);
    FUN_089a5aec(uVar6,*(float *)(*(int *)(*(int *)(param_1 + 0x1c) + 0xe4) + 100) + fVar5,&local_20
                );
    cVar1 = *(char *)(param_1 + 0x1318);
    iVar4 = param_1 + cVar1 * 0x28;
    *(short *)(iVar4 + 0x114c) = (short)(int)local_20;
    *(short *)(iVar4 + 0x114e) = (short)(int)local_1c;
    sVar2 = *(short *)(iVar4 + 0x1152);
    sVar3 = *(short *)(iVar4 + 0x114e);
    *(float *)(param_1 + 0x131c) =
         (float)((int)*(short *)(iVar4 + 0x1150) - (int)*(short *)(iVar4 + 0x114c));
    *(float *)(param_1 + 0x1320) = (float)((int)sVar2 - (int)sVar3);
    fVar5 = (float)FUN_0897c7b4(param_1,cVar1);
    *(float *)(param_1 + 0x1328) = fVar5;
    *(float *)(param_1 + 0x1324) = fVar5 * 1.4;
    *(undefined4 *)(param_1 + *(char *)(param_1 + 0x1318) * 0x28 + 0x1154) = 0;
  }
  return;
}

