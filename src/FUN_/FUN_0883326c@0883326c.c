#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0883326c(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 local_70 [21];
  
  piVar1 = (int *)FUN_088660c8();
  iVar2 = FUN_088660e0();
  if ((iVar2 != 0) && (piVar1 != (int *)0x0)) {
    iVar7 = *piVar1;
    iVar6 = 0;
    if (iVar7 != 0) {
      do {
        iVar3 = (**(code **)(*(int *)(iVar7 + 0x14) + 0x74))
                          (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x70));
        if (iVar3 == 0) {
          if (iVar7 == iVar2) {
            iVar7 = *(int *)(iVar7 + 4);
          }
          else {
            iVar3 = (**(code **)(*(int *)(iVar7 + 0x14) + 0x54))
                              (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x50));
            if (iVar3 == 0) {
              iVar3 = (**(code **)(*(int *)(iVar7 + 0x14) + 100))
                                (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x60));
              if (iVar3 == 0) {
                iVar7 = *(int *)(iVar7 + 4);
                goto LAB_08833338;
              }
              uVar4 = *(undefined4 *)(iVar7 + 0xc);
            }
            else {
              uVar4 = *(undefined4 *)(iVar7 + 0xc);
            }
            puVar5 = local_70 + iVar6;
            iVar6 = iVar6 + 1;
            *puVar5 = uVar4;
            iVar7 = *(int *)(iVar7 + 4);
          }
        }
        else {
          iVar7 = *(int *)(iVar7 + 4);
        }
LAB_08833338:
      } while (iVar7 != 0);
      if (param_2 < iVar6) {
        uVar4 = FUN_089d86bc(piVar1,local_70[param_2]);
        return uVar4;
      }
    }
  }
  return 0;
}

