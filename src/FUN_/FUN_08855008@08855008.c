#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08855008(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 local_70 [21];
  
  piVar1 = (int *)FUN_088660c8();
  if (piVar1 != (int *)0x0) {
    iVar6 = *piVar1;
    iVar5 = 0;
    if (iVar6 != 0) {
      do {
        iVar2 = (**(code **)(*(int *)(iVar6 + 0x14) + 0x5c))
                          (iVar6 + *(short *)(*(int *)(iVar6 + 0x14) + 0x58));
        if (iVar2 == 0) {
          iVar6 = *(int *)(iVar6 + 4);
        }
        else {
          puVar4 = local_70 + iVar5;
          iVar5 = iVar5 + 1;
          *puVar4 = *(undefined4 *)(iVar6 + 0xc);
          iVar6 = *(int *)(iVar6 + 4);
        }
      } while (iVar6 != 0);
      if (param_1 < iVar5) {
        uVar3 = FUN_089d86bc(piVar1,local_70[param_1]);
        return uVar3;
      }
    }
  }
  return 0;
}

