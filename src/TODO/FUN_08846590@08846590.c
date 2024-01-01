#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08846590(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  int local_30 [2];
  
  piVar6 = local_30;
  local_30[0] = 0;
  local_30[1] = 0xd;
  piVar1 = (int *)FUN_088660c8();
  if (piVar1 != (int *)0x0) {
    iVar5 = 0;
    puVar8 = &DAT_08a65c50;
    do {
      if ((*piVar6 == param_2) && (iVar7 = *piVar1, iVar7 != 0)) {
        iVar2 = *(int *)(iVar7 + 0x14);
        do {
          iVar2 = (**(code **)(iVar2 + 0x94))(iVar7 + *(short *)(iVar2 + 0x90));
          if (iVar2 != 0) {
            iVar2 = FUN_0885fc80(iVar7);
            iVar3 = *(int *)(iVar7 + 0x168);
            if (iVar2 == 0) {
              uVar4 = *puVar8;
              if (0x14 < *(uint *)(iVar7 + 8)) {
                if (0x20 < *(uint *)(iVar7 + 8)) {
                  *(uint *)(iVar3 + 0x14) = uVar4;
                  goto LAB_08846664;
                }
                uVar4 = uVar4 & 0xffffbffb;
              }
              *(uint *)(iVar3 + 0x14) = uVar4;
            }
            else {
              *(undefined4 *)(iVar3 + 0x14) = 0xffffffff;
            }
          }
LAB_08846664:
          iVar7 = *(int *)(iVar7 + 4);
          if (iVar7 == 0) break;
          iVar2 = *(int *)(iVar7 + 0x14);
        } while( true );
      }
      iVar5 = iVar5 + 1;
      piVar6 = piVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (iVar5 < 2);
  }
  return;
}

