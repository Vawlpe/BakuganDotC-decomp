#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f84bc(int param_1,uint param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 != 0) {
    *(undefined **)(param_1 + 0x14) = &DAT_08af5874;
    if (*(int *)(param_1 + 0x18) != 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x80);
      FUN_089d8634();
      FUN_089d7fd8(uVar4,0,0);
      FUN_089d866c();
      iVar3 = *(int *)(param_1 + 0x78);
      if (iVar3 != 0) {
        iVar6 = 0;
        iVar5 = 0;
        if (*(short *)(param_1 + 0x76) != 0) {
          do {
            if (*(char *)(*(int *)(param_1 + 0x7c) + iVar6) == '\0') {
LAB_089f8574:
              uVar1 = *(ushort *)(param_1 + 0x76);
            }
            else {
              iVar2 = *(int *)(iVar3 + iVar5);
              if (iVar2 != 0) {
                (**(code **)(*(int *)(iVar2 + 0x14) + 0xc))
                          (iVar2 + *(short *)(*(int *)(iVar2 + 0x14) + 8),3);
                iVar3 = *(int *)(param_1 + 0x78);
                goto LAB_089f8574;
              }
              uVar1 = *(ushort *)(param_1 + 0x76);
            }
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar6 < (int)(uint)uVar1);
        }
        FUN_089d8634();
        FUN_089d7fd8(iVar3,0,0);
        FUN_089d866c();
        uVar4 = *(undefined4 *)(param_1 + 0x7c);
        FUN_089d8634();
        FUN_089d7fd8(uVar4,0,0);
        FUN_089d866c();
      }
      FUN_089d8928(param_1 + 0x88);
    }
    FUN_089d87bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

