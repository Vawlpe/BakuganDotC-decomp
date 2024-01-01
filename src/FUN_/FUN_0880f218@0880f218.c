#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880f218(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  uVar1 = FUN_089c9d1c();
  piVar2 = (int *)FUN_088660c8();
  iVar5 = 0;
  iVar3 = FUN_088660e0();
  if (piVar2 != (int *)0x0) {
    iVar5 = *piVar2;
  }
  iVar7 = 0;
  while (iVar5 != 0) {
    if (iVar5 == iVar3) {
      iVar5 = *(int *)(iVar5 + 4);
    }
    else {
      iVar4 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x74))
                        (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x70));
      if (iVar4 == 0) {
        iVar4 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x5c))
                          (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x58));
        if (iVar4 == 0) {
          if (*(char *)(iVar5 + 0x4c1) != '\0') {
            iVar6 = iVar6 + 1;
          }
          iVar7 = iVar7 + 1;
          iVar5 = *(int *)(iVar5 + 4);
        }
        else {
          iVar5 = *(int *)(iVar5 + 4);
        }
      }
      else {
        iVar5 = *(int *)(iVar5 + 4);
      }
    }
  }
  if (iVar7 != iVar6) {
    return 0;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar1;
  return 3;
}

