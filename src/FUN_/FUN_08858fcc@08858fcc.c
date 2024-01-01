#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08858fcc(int param_1)

{
  char cVar1;
  undefined auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  
  iVar7 = 0;
  if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
    uVar3 = FUN_0880cc48();
    iVar4 = FUN_0880d0ac(uVar3,7);
    if (iVar4 == 1) {
      piVar5 = (int *)FUN_088660c8();
      if ((piVar5 == (int *)0x0) || (iVar4 = *piVar5, iVar4 == 0)) {
        return 0;
      }
      cVar1 = *(char *)(iVar4 + 0x4c1);
      fVar8 = INFINITY;
      while( true ) {
        fVar9 = fVar8;
        if (cVar1 == '\0') {
          if (*(char *)(iVar4 + 0x574) == '\0') {
            iVar6 = (**(code **)(*(int *)(iVar4 + 0x14) + 0x54))
                              (iVar4 + *(short *)(*(int *)(iVar4 + 0x14) + 0x50));
            if (iVar6 == 0) {
              iVar6 = *(int *)(iVar4 + 4);
            }
            else {
              auVar2 = vsub_q(*(undefined (*) [16])(param_1 + 0x20),
                              *(undefined (*) [16])(iVar4 + 0x20));
              uVar3 = vdot_t(auVar2._0_12_,auVar2._0_12_);
              fVar9 = (float)vsqrt_s(uVar3);
              if (fVar9 < fVar8) {
                iVar6 = *(int *)(iVar4 + 4);
                iVar7 = iVar4;
              }
              else {
                iVar6 = *(int *)(iVar4 + 4);
                fVar9 = fVar8;
              }
            }
          }
          else {
            iVar6 = *(int *)(iVar4 + 4);
          }
        }
        else {
          iVar6 = *(int *)(iVar4 + 4);
        }
        if (iVar6 == 0) break;
        cVar1 = *(char *)(iVar6 + 0x4c1);
        iVar4 = iVar6;
        fVar8 = fVar9;
      }
      cVar1 = *(char *)(iVar7 + 0x574);
      goto LAB_08859104;
    }
  }
  iVar7 = FUN_08866220(0);
  cVar1 = *(char *)(iVar7 + 0x574);
LAB_08859104:
  if ((*(byte *)(iVar7 + 0x4c1) | cVar1 != '\0') != 0) {
    return 0;
  }
  return iVar7;
}

