#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088f61dc(int *param_1,uint param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  undefined4 *local_4c;
  int local_48;
  int local_44;
  
  if (param_1 != (int *)0x0) {
    local_48 = 0;
    if (0 < param_1[2]) {
      local_4c = &DAT_08b00ba8;
      local_44 = 0;
      do {
        if (local_48 < 0) {
          memset_jak((undefined *)&DAT_08b00fc4,0,4);
          piVar9 = DAT_08b00fc4;
        }
        else {
          piVar9 = *(int **)(*param_1 + local_44);
        }
        if (piVar9 != (int *)0x0) {
          iVar6 = 0;
          iVar10 = 0;
          if (0 < piVar9[2]) {
            do {
              bVar1 = iVar6 < 0;
              if (bVar1) {
                memset_jak((undefined *)&DAT_08b00ba8,0,4);
                iVar3 = DAT_08b00ba8;
              }
              else {
                iVar3 = *(int *)(*piVar9 + iVar10);
              }
              if (iVar3 == 0) {
                iVar3 = piVar9[2];
              }
              else {
                if ((bVar1) || (piVar9[2] <= iVar6)) {
                  memset_jak((undefined *)&DAT_08b00ba8,0,4);
                  iVar3 = DAT_08b00ba8;
                }
                else {
                  iVar3 = *(int *)(*piVar9 + iVar10);
                }
                if (iVar3 != 0) {
                  iVar7 = 0;
                  if (0 < *(int *)(iVar3 + 0x4c)) {
                    iVar8 = 0;
                    do {
                      bVar2 = iVar7 < 0;
                      if (bVar2) {
                        memset_jak((undefined *)&DAT_08b00ba4,0,4);
                        iVar4 = DAT_08b00ba4;
                      }
                      else {
                        iVar4 = *(int *)(*(int *)(iVar3 + 0x44) + iVar8);
                      }
                      if (iVar4 == 0) {
                        iVar4 = *(int *)(iVar3 + 0x4c);
                      }
                      else {
                        if ((bVar2) || (*(int *)(iVar3 + 0x4c) <= iVar7)) {
                          memset_jak((undefined *)&DAT_08b00ba4,0,4);
                          iVar4 = DAT_08b00ba4;
                        }
                        else {
                          iVar4 = *(int *)(*(int *)(iVar3 + 0x44) + iVar8);
                        }
                        FUN_089d8634();
                        FUN_089d7fd8(iVar4,0,0);
                        FUN_089d866c();
                        if ((bVar2) || (*(int *)(iVar3 + 0x4c) <= iVar7)) {
                          memset_jak((undefined *)&DAT_08b00ba4,0,4);
                          puVar5 = &DAT_08b00ba4;
                        }
                        else {
                          puVar5 = (undefined4 *)(*(int *)(iVar3 + 0x44) + iVar8);
                        }
                        *puVar5 = 0;
                        iVar4 = *(int *)(iVar3 + 0x4c);
                      }
                      iVar7 = iVar7 + 1;
                      iVar8 = iVar8 + 4;
                    } while (iVar7 < iVar4);
                  }
                  if ((iVar3 != -0x44) && (iVar7 = *(int *)(iVar3 + 0x44), iVar7 != 0)) {
                    FUN_089d8634();
                    FUN_089d7fd8(iVar7,0,0);
                    FUN_089d866c();
                    *(undefined4 *)(iVar3 + 0x44) = 0;
                  }
                  FUN_089d8634();
                  FUN_089d7fd8(iVar3,0,0);
                  FUN_089d866c();
                }
                if ((bVar1) || (piVar9[2] <= iVar6)) {
                  memset_jak((undefined *)&DAT_08b00ba8,0,4);
                  puVar5 = local_4c;
                }
                else {
                  puVar5 = (undefined4 *)(*piVar9 + iVar10);
                }
                *puVar5 = 0;
                iVar3 = piVar9[2];
              }
              iVar6 = iVar6 + 1;
              iVar10 = iVar10 + 4;
            } while (iVar6 < iVar3);
          }
          if (piVar9 != (int *)0x0) {
            iVar6 = *piVar9;
            if (iVar6 != 0) {
              FUN_089d8634();
              FUN_089d7fd8(iVar6,0,0);
              FUN_089d866c();
              *piVar9 = 0;
            }
            FUN_089d8634();
            FUN_089d7fd8(piVar9,0,0);
            FUN_089d866c();
          }
        }
        local_48 = local_48 + 1;
        local_44 = local_44 + 4;
      } while (local_48 < param_1[2]);
    }
    if ((param_1 != (int *)0x0) && (iVar6 = *param_1, iVar6 != 0)) {
      FUN_089d8634();
      FUN_089d7fd8(iVar6,0,0);
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

