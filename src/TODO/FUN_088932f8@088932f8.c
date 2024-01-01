#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088932f8(int param_1,uint *param_2)

{
  undefined auVar1 [12];
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  
  piVar2 = (int *)FUN_088660c8();
  if ((piVar2 == (int *)0x0) || (iVar5 = *piVar2, iVar5 == 0)) {
    return 0;
  }
  iVar3 = *(int *)(param_1 + 0x1a0);
  iVar6 = 0;
  fVar9 = 0.0;
  do {
    iVar7 = iVar6;
    fVar11 = fVar9;
    if (*(int *)(iVar3 + 0xc) == *(int *)(iVar5 + 0xc)) {
      iVar5 = *(int *)(iVar5 + 4);
    }
    else if (*(char *)(iVar5 + 0x4c1) == '\0') {
      if (*(char *)(iVar5 + 0x574) == '\0') {
        iVar3 = FUN_0888e104(param_1,iVar5);
        if (iVar3 != 0) {
          iVar5 = *(int *)(iVar5 + 4);
          goto LAB_088934bc;
        }
        uVar8 = 0;
        iVar3 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x54))
                          (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x50));
        if (iVar3 == 0) {
          iVar3 = *(int *)(iVar5 + 0x14);
LAB_088933ec:
          iVar3 = (**(code **)(iVar3 + 0x7c))(iVar5 + *(short *)(iVar3 + 0x78));
          if (iVar3 != 0) {
            uVar8 = 2;
            goto LAB_08893454;
          }
          iVar3 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x5c))
                            (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x58));
          if (iVar3 != 0) {
            uVar8 = 4;
            goto LAB_08893454;
          }
          iVar3 = (**(code **)(*(int *)(iVar5 + 0x14) + 0x84))
                            (iVar5 + *(short *)(*(int *)(iVar5 + 0x14) + 0x80));
          if (iVar3 != 0) {
            uVar8 = 0x10;
            goto LAB_08893454;
          }
          uVar4 = *param_2;
        }
        else {
          if (*(char *)(iVar5 + 0x476) != '\0') {
            iVar3 = *(int *)(iVar5 + 0x14);
            goto LAB_088933ec;
          }
          uVar8 = 1;
LAB_08893454:
          uVar4 = *param_2;
        }
        if ((uVar4 & uVar8) == 0) {
          iVar5 = *(int *)(iVar5 + 4);
        }
        else {
          auVar1 = vsub_t(*(undefined (*) [12])(*(int *)(param_1 + 0x1a0) + 0x20),
                          *(undefined (*) [12])(iVar5 + 0x20));
          uVar10 = vdot_t(auVar1,auVar1);
          fVar11 = (float)vsqrt_s(uVar10);
          iVar7 = iVar5;
          if ((iVar6 == 0) || (fVar11 < fVar9)) goto LAB_088934b8;
          iVar5 = *(int *)(iVar5 + 4);
          iVar7 = iVar6;
          fVar11 = fVar9;
        }
      }
      else {
LAB_088934b8:
        iVar5 = *(int *)(iVar5 + 4);
      }
    }
    else {
      iVar5 = *(int *)(iVar5 + 4);
    }
LAB_088934bc:
    if (iVar5 == 0) {
      return iVar7;
    }
    iVar3 = *(int *)(param_1 + 0x1a0);
    iVar6 = iVar7;
    fVar9 = fVar11;
  } while( true );
}

