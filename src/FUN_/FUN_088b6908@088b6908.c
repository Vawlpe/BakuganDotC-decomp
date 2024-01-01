#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088b6908(int param_1)

{
  char cVar1;
  undefined auVar2 [16];
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  piVar3 = (int *)FUN_088660c8();
  if (((DAT_08aba778 == 0) && (piVar3 != (int *)0x0)) && (iVar5 = *piVar3, iVar5 != 0)) {
    cVar1 = *(char *)(iVar5 + 0x4c1);
    while( true ) {
      if (cVar1 == '\0') {
        iVar4 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x54))
                          (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x50));
        if (iVar4 == 0) {
          iVar5 = *(int *)(iVar5 + 4);
        }
        else {
          auVar2 = vsub_q(*(undefined (*) [16])(iVar5 + 0x20),*(undefined (*) [16])(param_1 + 0x20))
          ;
          fVar6 = (float)vdot_t(auVar2._0_12_,auVar2._0_12_);
          if (fVar6 <= 57600.0) {
            *(int *)(param_1 + 0x40) = iVar5;
            return 1;
          }
          iVar5 = *(int *)(iVar5 + 4);
        }
      }
      else {
        iVar5 = *(int *)(iVar5 + 4);
      }
      if (iVar5 == 0) break;
      cVar1 = *(char *)(iVar5 + 0x4c1);
    }
  }
  return 0;
}

