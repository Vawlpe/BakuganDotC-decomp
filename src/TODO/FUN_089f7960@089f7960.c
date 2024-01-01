#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined FUN_089f7960(int param_1,int param_2,uint param_3,undefined param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined local_40;
  
  local_40 = 0;
  if (*(char *)(param_1 + 0xad) != '\0') {
    local_40 = 1;
    FUN_089f7b24(param_1,param_4);
    iVar5 = 0x40;
    iVar1 = FUN_089f70dc(param_1);
    if (iVar1 == 5) {
      iVar5 = 0x400;
    }
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = 0;
    iVar1 = 0;
    do {
      memcpy_jak(*(int *)(param_1 + 0xb0) + iVar3,param_1 + 0xb4,0x60);
      *(uint *)(*(int *)(param_1 + 0xb0) + (iVar1 + *(int *)(param_1 + 0x130) + 2) * 4) =
           ((uint)(*(int *)(param_1 + 0x120) + iVar2) >> 0x18 & 0xf) << 0x10 | 0xb1000000;
      iVar4 = iVar4 + 1;
      *(uint *)(*(int *)(param_1 + 0xb0) + (iVar1 + *(int *)(param_1 + 0x130) + 3) * 4) =
           *(int *)(param_1 + 0x120) + iVar2 & 0xffffffU | 0xb0000000;
      iVar3 = iVar3 + 0x60;
      iVar2 = iVar2 + iVar5;
      iVar1 = iVar1 + 0x18;
    } while (iVar4 < 8);
  }
  *(uint *)(*(int *)(param_1 + 0xb0) + (param_2 * 0x18 + *(int *)(param_1 + 0x130) + 2) * 4) =
       (param_3 >> 0x18 & 0xf) << 0x10 | 0xb1000000;
  *(uint *)(*(int *)(param_1 + 0xb0) + (param_2 * 0x18 + *(int *)(param_1 + 0x130) + 3) * 4) =
       param_3 & 0xffffff | 0xb0000000;
  return local_40;
}

