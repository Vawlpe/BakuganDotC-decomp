#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08914254(float param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 uint param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char local_40 [8];
  
  memset_jak(local_40,0,8);
  iVar2 = 0;
  iVar1 = param_5 << 2;
  do {
    iVar3 = *(int *)(*(int *)(param_3 + 0x1c) + iVar1);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    iVar2 = iVar2 + 1;
    *(uint *)(*(int *)(*(int *)(param_3 + 0x1c) + iVar1) + 0xd8) = param_6 & 0xff;
    iVar1 = iVar1 + -4;
  } while (iVar2 < 7);
  FUN_089a4b5c(local_40,param_4,7,0xff);
  uVar4 = 0;
  if (local_40[0] != -1) {
    for (uVar4 = 1; uVar4 = uVar4 & 0xff, local_40[uVar4] != -1; uVar4 = uVar4 + 1) {
    }
  }
  iVar1 = 0;
  if (uVar4 != 0) {
    iVar2 = param_5 << 2;
    pcVar5 = local_40 + uVar4;
    do {
      iVar3 = *(int *)(*(int *)(param_3 + 0x1c) + iVar2);
      *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
      *(float *)(*(int *)(*(int *)(param_3 + 0x1c) + iVar2) + 0x60) = param_1 - (float)iVar1 * 11.0;
      *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x1c) + iVar2) + 100) = param_2;
      FUN_089f4a90((float)((byte)pcVar5[-1] / 5),(float)((uint)(byte)pcVar5[-1] % 5),
                   *(undefined4 *)(*(int *)(param_3 + 0x1c) + iVar2));
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -4;
      pcVar5 = pcVar5 + -1;
    } while (iVar1 < (int)uVar4);
  }
  if ((param_6 & 0xff) != 0) {
    iVar3 = (param_5 - iVar1) * 4;
    iVar2 = *(int *)(*(int *)(param_3 + 0x1c) + iVar3);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
    *(float *)(*(int *)(*(int *)(param_3 + 0x1c) + iVar3) + 0x60) = param_1 - (float)iVar1 * 11.0;
    *(undefined4 *)(*(int *)(*(int *)(param_3 + 0x1c) + iVar3) + 100) = param_2;
    FUN_089f4a90(0,0x40a00000,*(undefined4 *)(*(int *)(param_3 + 0x1c) + iVar3));
  }
  return;
}

