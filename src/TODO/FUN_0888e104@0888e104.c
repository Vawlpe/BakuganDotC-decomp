#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0888e104(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  bVar6 = false;
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    iVar1 = (**(code **)(*(int *)(param_2 + 0x14) + 0x54))
                      (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x50));
    if (iVar1 == 0) {
      uVar2 = (**(code **)(*(int *)(param_2 + 0x14) + 0x6c))
                        (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x68));
      uVar3 = (**(code **)(*(int *)(param_2 + 0x14) + 0x9c))
                        (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x98));
      uVar4 = (**(code **)(*(int *)(param_2 + 0x14) + 0x5c))
                        (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x58));
      uVar5 = (**(code **)(*(int *)(param_2 + 0x14) + 100))
                        (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x60));
      if ((uVar2 | uVar3 | uVar4 | uVar5) == 0) {
        uVar2 = (**(code **)(*(int *)(param_2 + 0x14) + 0x7c))
                          (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x78));
        uVar3 = (**(code **)(*(int *)(param_2 + 0x14) + 0x84))
                          (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 0x80));
        if ((uVar2 | uVar3) != 0) {
          bVar6 = false;
        }
      }
      else {
        bVar6 = true;
      }
    }
    else {
      bVar6 = *(char *)(param_2 + 0x158) == '\0';
    }
  }
  return bVar6;
}

