#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088634cc(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined uVar3;
  undefined4 local_20;
  float local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_089c9b48(3,DAT_08ac58c8);
  if (iVar1 == 0) {
    local_20 = *(undefined4 *)(param_1 + 0x20);
    uStack_18 = *(undefined4 *)(param_1 + 0x28);
    uStack_14 = *(undefined4 *)(param_1 + 0x2c);
    local_1c = *(float *)(param_1 + 0x24) + 100.0;
    FUN_0889d57c(&local_20,&local_20);
    iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 100))
                      (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x60));
    if (iVar1 == 0) {
      uVar3 = 3;
      iVar1 = (**(code **)(*(int *)(param_1 + 0x14) + 0x5c))
                        (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x58));
      if (iVar1 == 0) {
        uVar3 = *(int *)(DAT_08ac58c4 + 0x20) != 2;
      }
    }
    else {
      uVar3 = 2;
    }
    puVar2 = (undefined4 *)FUN_088b7784(uVar3);
    iVar1 = FUN_088a97e8(puVar2[1],*puVar2,puVar2[2],0);
    if (iVar1 != 6) {
      FUN_088b65c4(iVar1,&local_20,600,1,0);
    }
  }
  return;
}

