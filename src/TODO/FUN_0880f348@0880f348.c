#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0880f348(int param_1)

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
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar5 + 0x14);
    while( true ) {
      iVar4 = (**(code **)(iVar4 + 0x74))(iVar5 + *(short *)(iVar4 + 0x70));
      if ((iVar4 == 0) ||
         (iVar4 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x9c))
                            (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x98)), iVar4 == 1)) {
        if (iVar5 == iVar3) {
          iVar5 = *(int *)(iVar5 + 4);
        }
        else {
          iVar4 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x8c))
                            (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x88));
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
      }
      else {
        iVar5 = *(int *)(iVar5 + 4);
      }
      if (iVar5 == 0) break;
      iVar4 = *(int *)(iVar5 + 0x14);
    }
  }
  if (iVar7 != iVar6) {
    return 0;
  }
  *(undefined2 *)(*(int *)(param_1 + 0x2c) + 6) = uVar1;
  return 3;
}

