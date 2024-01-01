#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0888e40c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar12 = 0.0;
  fVar11 = -1.0;
  piVar1 = (int *)FUN_088660c8();
  if ((piVar1 == (int *)0x0) || (iVar6 = *piVar1, iVar6 == 0)) {
    return 0;
  }
  iVar5 = 0;
  iVar3 = *(int *)(param_1 + 0x1a0);
  do {
    if (*(int *)(iVar3 + 0xc) == *(int *)(iVar6 + 0xc)) {
      iVar6 = *(int *)(iVar6 + 4);
    }
    else if (*(char *)(iVar6 + 0x4c1) == '\0') {
      if (*(char *)(iVar6 + 0x476) == '\0') {
        fVar8 = fVar12;
        if (*(char *)(iVar6 + 0x574) == '\0') {
          iVar3 = FUN_0888e104(param_1,iVar6);
          if (iVar3 != 0) {
            iVar6 = *(int *)(iVar6 + 4);
            goto LAB_0888e658;
          }
          if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
            uVar2 = _DONE_Get_DAT_08AAC9E0();
            iVar3 = FUN_0880d0ac(uVar2,7);
            if (iVar3 == 2) {
              fVar10 = 0.0;
              fVar7 = (float)FUN_08887b94(iVar6 + 0x434);
              iVar3 = FUN_08887a90(iVar6 + 0x434);
              fVar9 = (float)iVar3;
              if (iVar3 < 0) {
                fVar9 = fVar9 + 4.294967e+09;
              }
              if (fVar9 != 0.0) {
                fVar10 = (1.0 - fVar7 / fVar9) * 100.0;
              }
              uVar2 = _DONE_Get_DAT_08AAC9E0();
              iVar3 = FUN_0880d0ac(uVar2,*(int *)(iVar6 + 0x150) + 0xe);
              iVar4 = *(int *)(*(int *)(param_1 + 0x2cc) + 4);
              fVar7 = (float)(**(code **)(iVar4 + 0x44))
                                       (*(int *)(param_1 + 0x2cc) + (int)*(short *)(iVar4 + 0x40),
                                        *(int *)(param_1 + 0x1a4) + -1);
              fVar10 = fVar10 + (float)iVar3 * fVar7;
              if (fVar11 < fVar10) {
                iVar5 = *(int *)(iVar6 + 0xc);
                fVar11 = fVar10;
                goto LAB_0888e654;
              }
              iVar6 = *(int *)(iVar6 + 4);
              goto LAB_0888e658;
            }
          }
          fVar8 = (float)FUN_0888e3a8(0x447a0000,0x42b40000,param_1,iVar6);
          if ((fVar8 <= 0.0) || (fVar12 <= fVar8)) {
            if (iVar5 != 0) {
              iVar6 = *(int *)(iVar6 + 4);
              goto LAB_0888e658;
            }
            iVar5 = *(int *)(iVar6 + 0xc);
          }
          else {
            iVar5 = *(int *)(iVar6 + 0xc);
          }
        }
LAB_0888e654:
        iVar6 = *(int *)(iVar6 + 4);
        fVar12 = fVar8;
      }
      else {
        iVar6 = *(int *)(iVar6 + 4);
      }
    }
    else {
      iVar6 = *(int *)(iVar6 + 4);
    }
LAB_0888e658:
    if (iVar6 == 0) {
      return iVar5;
    }
    iVar3 = *(int *)(param_1 + 0x1a0);
  } while( true );
}

