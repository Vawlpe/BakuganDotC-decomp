#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08990d88(int param_1,char param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xdc);
  if (param_2 == '\0') {
    FUN_089a5aec(*(undefined4 *)(iVar3 + 0x60),*(float *)(iVar3 + 100) + 64.0,&local_38);
    iVar3 = param_1 + *(char *)(param_1 + 0x1270) * 0x28;
    *(short *)(iVar3 + 0x10e4) = (short)(int)local_38;
    *(short *)(iVar3 + 0x10e6) = (short)(int)local_34;
    FUN_089a5aec(0x43700000,0x43480000,&local_30);
    iVar3 = param_1 + *(char *)(param_1 + 0x1270) * 0x28;
    *(short *)(iVar3 + 0x10e8) = (short)(int)local_30;
    *(short *)(iVar3 + 0x10ea) = (short)(int)local_2c;
    sVar1 = *(short *)(iVar3 + 0x10ea);
    sVar2 = *(short *)(iVar3 + 0x10e6);
    *(float *)(param_1 + 0x1274) =
         (float)((int)*(short *)(iVar3 + 0x10e8) - (int)*(short *)(iVar3 + 0x10e4));
    *(float *)(param_1 + 0x1278) = (float)((int)sVar1 - (int)sVar2);
    fVar4 = (float)FUN_0898efa4(param_1,0,
                                *(undefined *)
                                 ((int)*(char *)(param_1 + 0xe78) + *(char *)(param_1 + 0xe79) * 6 +
                                  param_1 + 0x11c0));
    *(float *)(param_1 + 0x127c) = *(float *)(param_1 + 0x12ac) * fVar4;
    fVar4 = (float)FUN_0898efa4(param_1,1,
                                *(undefined *)
                                 ((int)*(char *)(param_1 + 0xe78) + *(char *)(param_1 + 0xe79) * 6 +
                                  param_1 + 0x11c0));
    fVar6 = *(float *)(param_1 + 0x12ac);
    fVar5 = *(float *)(param_1 + 0x1290);
    *(undefined4 *)(param_1 + *(char *)(param_1 + 0x1270) * 0x28 + 0x10ec) = 0;
    *(float *)(param_1 + 0x1280) = fVar6 * fVar4 * fVar5;
  }
  else {
    FUN_089a5aec(*(undefined4 *)(iVar3 + 0x60),*(float *)(iVar3 + 100) + 64.0,&local_28);
    iVar3 = param_1 + *(char *)(param_1 + 0x1270) * 0x28;
    *(short *)(iVar3 + 0x10e8) = (short)(int)local_28;
    *(short *)(iVar3 + 0x10ea) = (short)(int)local_24;
    FUN_089a5aec(0x43700000,0x43480000,&local_20);
    iVar3 = param_1 + *(char *)(param_1 + 0x1270) * 0x28;
    *(short *)(iVar3 + 0x10e4) = (short)(int)local_20;
    *(short *)(iVar3 + 0x10e6) = (short)(int)local_1c;
    sVar1 = *(short *)(iVar3 + 0x10ea);
    sVar2 = *(short *)(iVar3 + 0x10e6);
    *(float *)(param_1 + 0x1274) =
         (float)((int)*(short *)(iVar3 + 0x10e8) - (int)*(short *)(iVar3 + 0x10e4));
    *(float *)(param_1 + 0x1278) = (float)((int)sVar1 - (int)sVar2);
    fVar4 = (float)FUN_0898efa4(param_1,0,
                                *(undefined *)
                                 ((int)*(char *)(param_1 + 0xe78) + *(char *)(param_1 + 0xe79) * 6 +
                                  param_1 + 0x11c0));
    *(float *)(param_1 + 0x1280) = *(float *)(param_1 + 0x12ac) * fVar4;
    fVar4 = (float)FUN_0898efa4(param_1,1,
                                *(undefined *)
                                 ((int)*(char *)(param_1 + 0xe78) + *(char *)(param_1 + 0xe79) * 6 +
                                  param_1 + 0x11c0));
    fVar6 = *(float *)(param_1 + 0x12ac);
    fVar5 = *(float *)(param_1 + 0x1290);
    *(undefined4 *)(param_1 + *(char *)(param_1 + 0x1270) * 0x28 + 0x10ec) = 0;
    *(float *)(param_1 + 0x127c) = fVar6 * fVar4 * fVar5;
  }
  return;
}

