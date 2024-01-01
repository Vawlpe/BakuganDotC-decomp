#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c2d54(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  iVar1 = FUN_089fce78();
  if (iVar1 != 0) {
    uVar2 = FUN_089fce94();
    piVar6 = (int *)&DAT_08ac5604;
    iVar1 = FUN_089fd3f4(uVar2,&DAT_08ac5604,0);
    if (iVar1 != 0) {
      iVar1 = FUN_089c2c54(param_1);
      if (iVar1 == 0) {
        uVar2 = FUN_089fce94();
        uVar3 = FUN_089c2b60(param_1);
        iVar1 = FUN_089fd350(uVar2,uVar3);
        if (iVar1 != 0) {
          uVar7 = 0;
        }
      }
      else if (param_1 == -1) {
        uVar2 = FUN_089fce94();
        FUN_089fd560(uVar2,&DAT_08ac5604);
      }
      else {
        iVar1 = 0;
        piVar5 = &DAT_08aa1218;
        do {
          if (*piVar5 == param_1) {
            piVar6 = &DAT_08aa1218;
          }
          iVar1 = iVar1 + 1;
          piVar5 = piVar5 + 1;
        } while (iVar1 < 1);
        uVar2 = FUN_089fce94();
        uVar3 = FUN_089fce94();
        uVar4 = FUN_089c2b60(param_1);
        uVar3 = FUN_089fd350(uVar3,uVar4);
        FUN_089fd4a0(uVar2,piVar6,uVar3);
      }
    }
  }
  return uVar7;
}

