#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08910760(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar2 = FUN_089f2178(0x43fa0000);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_089f59e8(*(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c),
                 *(int *)(param_1 + 0x18),0);
    FUN_089f5084(*(undefined4 *)(param_1 + 0x18),uVar2);
  }
  iVar8 = 0;
  iVar6 = 0xdc;
  iVar5 = param_1 + 0x178;
  iVar7 = param_1;
  do {
    if (*(int *)(iVar7 + 0x170) != 0) {
      FUN_089f59e8(*(undefined4 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c),
                   *(int *)(iVar7 + 0x170),0);
      *(undefined4 *)(*(int *)(iVar7 + 0x170) + 0xcc) = *(undefined4 *)(param_1 + 0x378);
      iVar3 = *(int *)(*(int *)(iVar7 + 0x170) + 0x74);
      (**(code **)(iVar3 + 0x14))
                (0x43660000,(float)iVar6,0,*(int *)(iVar7 + 0x170) + (int)*(short *)(iVar3 + 0x10),
                 iVar5,1,0,0);
      iVar3 = *(int *)(iVar7 + 0x170);
      iVar4 = *(int *)(iVar3 + 0x74);
      sVar1 = *(short *)(iVar4 + 0x28);
      uVar2 = FUN_089f2178(0x44098000);
      (**(code **)(iVar4 + 0x2c))(iVar3 + sVar1,uVar2);
    }
    iVar8 = iVar8 + 1;
    iVar7 = iVar7 + 4;
    iVar6 = iVar6 + 0x11;
    iVar5 = iVar5 + 0x100;
  } while (iVar8 < 2);
  FUN_089a46cc();
  return;
}

