#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f51b8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x124);
    iVar3 = *(int *)(iVar1 + 4);
    while( true ) {
      if ((uVar2 & 1) == 0) {
        if (iVar1 != 0) {
          (**(code **)(*(int *)(iVar1 + 0x14) + 0xc))
                    (iVar1 + *(short *)(*(int *)(iVar1 + 0x14) + 8),3);
        }
      }
      else {
        *(uint *)(iVar1 + 0x124) = uVar2 & 0xfffffffd;
      }
      if (iVar3 == 0) break;
      uVar2 = *(uint *)(iVar3 + 0x124);
      iVar1 = iVar3;
      iVar3 = *(int *)(iVar3 + 4);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

