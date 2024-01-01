#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895ac6c(int param_1)

{
  byte bVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 0x4ce1);
  if ((bVar1 & 1) != 0) {
    pfVar2 = (float *)(*(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4)
                      + 0x9c);
    *pfVar2 = *pfVar2 + 0.008726646;
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + (uint)*(ushort *)(param_1 + 0x5176) * 4);
    FUN_089f4954(*(undefined4 *)(iVar3 + 0x90),*(undefined4 *)(iVar3 + 0x94),
                 *(undefined4 *)(iVar3 + 0x9c),iVar3,0);
    bVar1 = *(byte *)(param_1 + 0x4ce1);
  }
  if ((bVar1 & 2) != 0) {
    uVar4 = 0;
    iVar3 = param_1;
    do {
      if (*(float *)(iVar3 + 0x4ce4) != -1.0) {
        FUN_08959e38(param_1,uVar4 & 0xff);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 8;
    } while ((int)uVar4 < 4);
    bVar1 = *(byte *)(param_1 + 0x4ce1);
  }
  if ((bVar1 & 4) != 0) {
    FUN_0895a03c(param_1);
  }
  return;
}

