#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08959e38(int param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  param_2 = param_2 & 0xff;
  iVar1 = FUN_08959e20(param_1,param_2);
  uVar3 = 0;
  iVar5 = param_1 + param_2 * 8;
  iVar1 = iVar1 << 2;
  do {
    if (uVar3 < 7) {
      iVar4 = (int)(uVar3 * 4) >> 2;
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar1);
      switch(uVar3) {
      case 0:
        local_40 = 0;
        local_3c = 0;
        local_38 = 0x43700000;
        local_34 = 0x43880000;
        FUN_089f4060(uVar2,&local_40);
        uVar3 = iVar4 + 1;
        break;
      case 1:
        local_3c = *(undefined4 *)(iVar5 + 0x4ce4);
        local_40 = 0;
        local_38 = 0x42000000;
        local_34 = 0x43880000;
        FUN_089f4060(uVar2,&local_40);
        uVar3 = iVar4 + 1;
        break;
      case 2:
        local_3c = *(undefined4 *)(iVar5 + 0x4ce4);
        local_40 = 0x42000000;
        local_38 = 0x42000000;
        local_34 = 0x43880000;
        FUN_089f4060(uVar2,&local_40);
        uVar3 = iVar4 + 1;
        break;
      case 3:
        local_3c = *(undefined4 *)(iVar5 + 0x4ce4);
        local_40 = 0;
        local_38 = 0x42800000;
        local_34 = 0x43880000;
        FUN_089f4060(uVar2,&local_40);
        uVar3 = iVar4 + 1;
        break;
      case 4:
        local_3c = *(undefined4 *)(iVar5 + 0x4ce4);
        local_40 = 0x42800000;
        local_38 = 0x42800000;
        local_34 = 0x43880000;
        FUN_089f4060(uVar2,&local_40);
        uVar3 = iVar4 + 1;
        break;
      default:
        local_3c = *(undefined4 *)(iVar5 + 0x4ce8);
        local_40 = 0;
        local_38 = 0x43700000;
        local_34 = 0x43880000;
        FUN_089f4060(uVar2,&local_40);
        uVar3 = iVar4 + 1;
      }
    }
    else {
      uVar3 = uVar3 + 1;
    }
    iVar1 = iVar1 + 4;
  } while ((int)uVar3 < 7);
  fVar6 = *(float *)(iVar5 + 0x4ce4) + 8.0;
  *(float *)(iVar5 + 0x4ce4) = fVar6;
  if (512.0 <= fVar6) {
    *(undefined4 *)(iVar5 + 0x4ce4) = 0;
  }
  fVar6 = *(float *)(iVar5 + 0x4ce8) + 4.0;
  *(float *)(iVar5 + 0x4ce8) = fVar6;
  if (512.0 <= fVar6) {
    *(undefined4 *)(iVar5 + 0x4ce8) = 0;
  }
  return;
}

