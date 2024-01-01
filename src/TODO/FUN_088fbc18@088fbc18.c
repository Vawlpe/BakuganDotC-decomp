#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fbc18(int *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 != (int *)0x0) {
    iVar8 = 0;
    if (0 < param_1[2]) {
      iVar9 = 0;
      do {
        if (iVar8 < 0) {
          memset_jak((undefined *)&DAT_08b00bac,0,4);
          piVar6 = DAT_08b00bac;
        }
        else {
          piVar6 = *(int **)(*param_1 + iVar9);
        }
        if (piVar6 != (int *)0x0) {
          iVar5 = 0;
          iVar7 = 0;
          if (0 < piVar6[2]) {
            do {
              bVar1 = iVar5 < 0;
              if (bVar1) {
                memset_jak((undefined *)&DAT_08b00fd0,0,4);
                iVar2 = DAT_08b00fd0;
              }
              else {
                iVar2 = *(int *)(*piVar6 + iVar7);
              }
              if (iVar2 == 0) {
                iVar2 = piVar6[2];
              }
              else {
                if ((bVar1) || (piVar6[2] <= iVar5)) {
                  memset_jak((undefined *)&DAT_08b00fd0,0,4);
                  iVar2 = DAT_08b00fd0;
                }
                else {
                  iVar2 = *(int *)(*piVar6 + iVar7);
                }
                if (iVar2 != 0) {
                  if ((iVar2 != -0x30) && (iVar3 = *(int *)(iVar2 + 0x30), iVar3 != 0)) {
                    FUN_089d8634();
                    FUN_089d7fd8(iVar3,0,0);
                    FUN_089d866c();
                    *(undefined4 *)(iVar2 + 0x30) = 0;
                  }
                  FUN_089d8634();
                  FUN_089d7fd8(iVar2,0,0);
                  FUN_089d866c();
                }
                if ((bVar1) || (piVar6[2] <= iVar5)) {
                  memset_jak((undefined *)&DAT_08b00fd0,0,4);
                  puVar4 = &DAT_08b00fd0;
                }
                else {
                  puVar4 = (undefined4 *)(*piVar6 + iVar7);
                }
                *puVar4 = 0;
                iVar2 = piVar6[2];
              }
              iVar5 = iVar5 + 1;
              iVar7 = iVar7 + 4;
            } while (iVar5 < iVar2);
          }
          if (piVar6 != (int *)0x0) {
            iVar5 = *piVar6;
            if (iVar5 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(iVar5,0,0);
              FUN_089d866c();
              *piVar6 = 0;
            }
            FUN_089d8634();
            FUN_089d7fd8(piVar6,0,0);
            FUN_089d866c();
          }
        }
        iVar8 = iVar8 + 1;
        iVar9 = iVar9 + 4;
      } while (iVar8 < param_1[2]);
    }
    if ((param_1 != (int *)0x0) && (iVar8 = *param_1, iVar8 != 0)) {
      FUN_089d8634();
      FUN_089d7fd8(iVar8,0,0);
      FUN_089d866c();
      *param_1 = 0;
    }
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

