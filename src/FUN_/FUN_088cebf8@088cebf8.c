#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088cebf8(int param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_089f4594(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc));
  FUN_089f4594(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x44));
  FUN_089f4594(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 8));
  FUN_089f4594(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x48));
  iVar4 = 0;
  iVar3 = 0;
  do {
    psVar1 = (short *)FUN_0881a300(0xc,iVar4);
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0x3f800000;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x60) = (float)(int)*psVar1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 100) = (float)(int)psVar1[1];
    iVar4 = iVar4 + 1;
    *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x68) = (float)(int)psVar1[2];
    iVar3 = iVar3 + 4;
  } while (iVar4 < 0x43);
  iVar4 = 0x43;
  iVar3 = 0x10c;
  do {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0x3f800000;
    iVar4 = iVar4 + 1;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
    *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) & 0xfffffffe;
    iVar3 = iVar3 + 4;
  } while (iVar4 < 0x48);
  *(undefined *)(*(int *)(param_1 + 0x74) + 0x3b1) = 0;
  *(undefined *)(*(int *)(param_1 + 0x74) + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined *)(param_1 + 0xa4) = 0;
  *(undefined *)(param_1 + 0xa5) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0xc2400000;
  iVar3 = *(int *)(param_1 + 0xd8);
  if (iVar3 != 0) {
    FUN_089f51b8(iVar3);
    *(undefined4 *)(iVar3 + 0x84) = 0;
  }
  return;
}

