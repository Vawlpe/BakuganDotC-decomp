#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899d074(float param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  char local_40 [16];
  
  memset_jak(local_40,0,6);
  iVar2 = 0;
  iVar1 = (param_3 & 0xff) * 0x14;
  do {
    iVar2 = iVar2 + 1;
    iVar3 = *(int *)(*(int *)(param_2 + 0x1c) + iVar1 + 0x124);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    iVar1 = iVar1 + 4;
  } while (iVar2 < 5);
  FUN_089a4b5c(local_40,param_4,5,0xff);
  fVar7 = *(float *)(param_2 + 0x11cc);
  fVar6 = *(float *)(param_2 + 0x1210);
  fVar9 = *(float *)(param_2 + 0x11d0);
  uVar4 = 0;
  fVar8 = *(float *)(param_2 + 0x1214);
  if (local_40[0] != -1) {
    for (uVar4 = 1; uVar4 = uVar4 & 0xff, local_40[uVar4] != -1; uVar4 = uVar4 + 1) {
    }
  }
  iVar1 = 0;
  if (uVar4 != 0) {
    iVar2 = (param_3 & 0xff) * 0x14;
    pcVar5 = local_40 + uVar4;
    do {
      iVar3 = *(int *)(*(int *)(param_2 + 0x1c) + iVar2 + 0x124);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      *(float *)(*(int *)(*(int *)(param_2 + 0x1c) + iVar2 + 0x124) + 0x60) =
           ((fVar7 - fVar6) + (float)(uVar4 - 1) * 6.0) - (float)iVar1 * 12.0;
      *(float *)(*(int *)(*(int *)(param_2 + 0x1c) + iVar2 + 0x124) + 100) =
           (fVar9 - fVar8) + param_1;
      FUN_089f4a90((float)((byte)pcVar5[-1] / 5),(float)((uint)(byte)pcVar5[-1] % 5),
                   *(undefined4 *)(*(int *)(param_2 + 0x1c) + iVar2 + 0x124));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 4;
      pcVar5 = pcVar5 + -1;
    } while (iVar1 < (int)uVar4);
  }
  return;
}

