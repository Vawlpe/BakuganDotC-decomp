#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089e565c(undefined4 param_1,int param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_089e588c();
  if (iVar1 != 0) {
    uVar2 = FUN_089e588c(param_2);
    switch(*(undefined4 *)(param_2 + 0xc0)) {
    case 1:
      iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0xc))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 8),uVar2,param_3);
      return iVar1;
    case 2:
      iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x14))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x10),uVar2,param_3);
      return iVar1;
    case 3:
      iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x1c))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x18),uVar2,param_3);
      return iVar1;
    case 4:
      iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x24))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x20),uVar2,param_3);
      return iVar1;
    case 6:
      iVar1 = (**(code **)(*(int *)(iVar1 + 4) + 0x2c))
                        (iVar1 + *(short *)(*(int *)(iVar1 + 4) + 0x28),uVar2,param_3);
      if (iVar1 != 0) {
        DAT_08b002a0 = 0;
        DAT_08b00280 = *param_3;
        DAT_08b00284 = param_3[1];
        DAT_08b00288 = param_3[2];
        DAT_08b0028c = param_3[3];
        DAT_08b00290 = DAT_08b001a0;
        DAT_08b00294 = DAT_08b001a4;
        DAT_08b00298 = DAT_08b001a8;
        DAT_08b0029c = DAT_08b001ac;
        DAT_08b002a8 = 0;
        DAT_08b002ac = 0;
        DAT_08b002b0 = 0;
        DAT_08b002b4 = 0;
        DAT_08b002b8 = 0;
        DAT_08b002a4 = 0;
      }
      return iVar1;
    case 8:
      iVar1 = FUN_089e5be4(param_2,iVar1,param_3,param_4 >> 0x10);
      return iVar1;
    }
  }
  return 0;
}

