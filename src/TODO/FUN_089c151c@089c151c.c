#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c151c(undefined4 *param_1,int param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  uint uVar8;
  
  if (*(char *)(param_1 + 6) != '\0') {
    uVar8 = param_2 >> 0x14 & 0xff;
    bVar1 = false;
    if (0x52 < uVar8) {
      uVar8 = 0xffffffff;
    }
    if ((-1 < (int)uVar8) && ((int)uVar8 < 2)) {
      FUN_089bb728(param_1[3]);
      piVar2 = (int *)FUN_08a2eeec(*param_1);
      if (piVar2 != (int *)0x0) {
        piVar6 = (int *)piVar2[3];
        while ((piVar2 = (int *)*piVar2, piVar6 == (int *)0x0 || (*piVar6 != param_2))) {
          if (piVar2 == (int *)0x0) goto LAB_089c15c4;
          piVar6 = (int *)piVar2[3];
        }
        *(undefined *)((int)piVar6 + 9) = 1;
        bVar1 = true;
      }
LAB_089c15c4:
      FUN_089bb790(param_1[3]);
      if ((!bVar1) && (iVar3 = _DONE_NotZero_DAT_08AC5874(), iVar3 != 0)) {
        uVar4 = _DONE_Get_DAT_08AC5874();
        iVar3 = FUN_089c61b8(uVar4,uVar8,1);
        if (iVar3 == -1) {
          uVar4 = _DONE_Get_DAT_08AC5874();
          iVar3 = FUN_089c5e0c(uVar4,uVar8);
          if (iVar3 != 0) {
            FUN_089bb728(param_1[3]);
            piVar2 = (int *)0x0;
            if (param_1[4] != 0) {
              piVar6 = (int *)FUN_089d76ac(param_1[4]);
              piVar2 = (int *)0x0;
              if (piVar6 != (int *)0x0) {
                piVar2 = piVar6;
              }
            }
            if (piVar2 == (int *)0x0) {
              FUN_089d8634();
              uVar4 = FUN_089d81a4();
              FUN_089d816c(1);
              piVar2 = (int *)FUN_089d7d74(0xc,0,0);
              FUN_089d816c(uVar4);
              FUN_089d866c();
              *piVar2 = param_2;
            }
            else {
              *piVar2 = param_2;
            }
            piVar2[1] = param_3;
            *(undefined *)(piVar2 + 2) = 0;
            *(undefined *)((int)piVar2 + 9) = 1;
            FUN_08a2ebac(*param_1,piVar2,1000);
            if (uVar8 != 0xffffffff) {
              piVar2 = (int *)FUN_08a2f38c(param_1[1]);
              bVar1 = false;
              if (piVar2 != (int *)0x0) {
                puVar7 = (uint *)piVar2[3];
                while ((piVar2 = (int *)*piVar2, puVar7 == (uint *)0x0 || (*puVar7 != uVar8))) {
                  if (piVar2 == (int *)0x0) goto LAB_089c1708;
                  puVar7 = (uint *)piVar2[3];
                }
                bVar1 = true;
              }
LAB_089c1708:
              if (!bVar1) {
                puVar7 = (uint *)0x0;
                if (param_1[5] != 0) {
                  puVar5 = (uint *)FUN_089d76ac(param_1[5]);
                  puVar7 = (uint *)0x0;
                  if (puVar5 != (uint *)0x0) {
                    puVar7 = puVar5;
                  }
                }
                if (puVar7 == (uint *)0x0) {
                  FUN_089d8634();
                  uVar4 = FUN_089d81a4();
                  FUN_089d816c(1);
                  puVar7 = (uint *)FUN_089d7d74(8,0,0);
                  FUN_089d816c(uVar4);
                  FUN_089d866c();
                }
                *puVar7 = uVar8;
                puVar7[1] = 0x1e;
                FUN_08a2f04c(param_1[1],puVar7,1000);
              }
            }
            FUN_089bb790(param_1[3]);
          }
        }
      }
    }
  }
  return;
}

