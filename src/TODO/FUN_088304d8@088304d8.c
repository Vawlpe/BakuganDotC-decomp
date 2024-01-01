#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088304d8(undefined4 param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 local_70 [21];
  
  piVar2 = (int *)FUN_088660c8();
  iVar3 = FUN_088660e0();
  if ((iVar3 != 0) && (piVar2 != (int *)0x0)) {
    iVar8 = *piVar2;
    iVar7 = 0;
    if (iVar8 != 0) {
      do {
        iVar4 = (**(code **)(*(int *)(iVar8 + 0x14) + 0x74))
                          (iVar8 + *(short *)(*(int *)(iVar8 + 0x14) + 0x70));
        if (iVar4 == 0) {
          if (iVar8 == iVar3) {
            iVar8 = *(int *)(iVar8 + 4);
          }
          else {
            iVar4 = (**(code **)(*(int *)(iVar8 + 0x14) + 0x54))
                              (iVar8 + *(short *)(*(int *)(iVar8 + 0x14) + 0x50));
            if (iVar4 == 0) {
              iVar4 = (**(code **)(*(int *)(iVar8 + 0x14) + 100))
                                (iVar8 + *(short *)(*(int *)(iVar8 + 0x14) + 0x60));
              if (iVar4 == 0) {
                iVar8 = *(int *)(iVar8 + 4);
                goto LAB_088305b0;
              }
              cVar1 = *(char *)(iVar8 + 0x4c1);
            }
            else {
              cVar1 = *(char *)(iVar8 + 0x4c1);
            }
            if (cVar1 == '\0') {
              puVar6 = local_70 + iVar7;
              iVar7 = iVar7 + 1;
              *puVar6 = *(undefined4 *)(iVar8 + 0xc);
              iVar8 = *(int *)(iVar8 + 4);
            }
            else {
              iVar8 = *(int *)(iVar8 + 4);
            }
          }
        }
        else {
          iVar8 = *(int *)(iVar8 + 4);
        }
LAB_088305b0:
      } while (iVar8 != 0);
      if (param_2 < iVar7) {
        uVar5 = FUN_089d86bc(piVar2,local_70[param_2]);
        return uVar5;
      }
    }
  }
  return 0;
}

