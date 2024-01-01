#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897ea30(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_28;
  float local_24;
  
  if (*(char *)(param_1 + 0xee5) == '\x02') {
    uVar4 = 0;
    iVar2 = param_1;
    iVar3 = param_1;
    do {
      FUN_0897a068(param_1,*(undefined *)(param_1 + 0xee1),uVar4 & 0xff);
      FUN_089a5aec(*(undefined4 *)(iVar3 + 0x12c8),*(undefined4 *)(iVar3 + 0x12cc),&local_28);
      FUN_089e3008(local_28,local_24 + *(float *)(param_1 + 0x1398),*(undefined4 *)(iVar2 + 0x1288))
      ;
      FUN_089e2b14(*(undefined4 *)(iVar2 + 0x1288),0xffffffff);
      iVar1 = *(int *)(*(int *)(iVar2 + 0x1288) + 0x20);
      (**(code **)(iVar1 + 0x14))(*(int *)(iVar2 + 0x1288) + (int)*(short *)(iVar1 + 0x10));
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 8;
      iVar2 = iVar2 + 4;
    } while ((int)uVar4 < 7);
  }
  return;
}

