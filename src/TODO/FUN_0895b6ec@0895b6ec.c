#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895b6ec(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  param_3 = param_3 & 0xff;
  param_2 = param_2 & 0xff;
  param_4 = param_4 & 0xff;
  uVar1 = FUN_08959e20(param_1,param_3,param_2,param_3,param_4);
  iVar4 = 0;
  uVar5 = uVar1 + 7;
  iVar6 = param_1 + param_3 * 8;
  if (('\x02' < *(char *)(param_1 + 0x4cda)) && (iVar4 = 0x88, (int)param_3 < 2)) {
    iVar4 = -0x88;
  }
  if (param_2 == 0) {
    FUN_0892bc54(*(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar1 * 4),param_4);
    if (uVar1 < uVar5) {
      iVar3 = uVar1 << 2;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + iVar3);
        *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0xbc) = 0x3f800000;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x128) = 4;
        uVar1 = uVar1 + 1;
        *(float *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 100) = (float)iVar4;
        iVar3 = iVar3 + 4;
      } while (uVar1 < uVar5);
    }
    *(undefined4 *)(iVar6 + 0x4ce4) = 0;
    *(undefined4 *)(iVar6 + 0x4ce8) = 0;
  }
  else {
    if (uVar1 < uVar5) {
      iVar4 = uVar1 << 2;
      do {
        uVar1 = uVar1 + 1;
        iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar4);
        *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
        iVar4 = iVar4 + 4;
      } while (uVar1 < uVar5);
    }
    *(undefined4 *)(iVar6 + 0x4ce4) = 0xbf800000;
    *(undefined4 *)(iVar6 + 0x4ce8) = 0xbf800000;
  }
  return;
}

