#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d125c(void)

{
  undefined4 *puVar1;
  int **ppiVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int *piVar6;
  undefined4 uVar7;
  int **ppiVar8;
  int *piVar9;
  int local_40;
  int local_3c;
  int local_38;
  undefined auStack_34 [8];
  
  if ((DAT_08ac5938 != (undefined4 *)0x0) && (DAT_08ac5938[1] != 0)) {
    FUN_089bb728(DAT_08ac5938[1]);
    ppiVar2 = (int **)FUN_08a31570(*DAT_08ac5938);
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    if (ppiVar2 != (int **)0x0) {
      piVar6 = ppiVar2[3];
      ppiVar8 = ppiVar2;
      while( true ) {
        if (piVar6 == (int *)0x0) {
          ppiVar8 = (int **)*ppiVar8;
        }
        else {
          FUN_089d0ed0(piVar6);
          local_40 = local_40 + 1;
          if (*(char *)((int)piVar6 + 2) == '\0') {
            cVar5 = *(char *)((int)piVar6 + 3);
          }
          else if (*(char *)(piVar6 + 4) == '\x01') {
            local_3c = local_3c + 1;
            cVar5 = *(char *)((int)piVar6 + 3);
          }
          else {
            cVar5 = *(char *)((int)piVar6 + 3);
          }
          if (cVar5 == '\0') {
            ppiVar8 = (int **)*ppiVar8;
          }
          else if (*(char *)(piVar6 + 4) == '\x02') {
            local_38 = local_38 + 1;
            ppiVar8 = (int **)*ppiVar8;
          }
          else {
            ppiVar8 = (int **)*ppiVar8;
          }
        }
        if (ppiVar8 == (int **)0x0) break;
        piVar6 = (int *)((int *)ppiVar8)[3];
      }
    }
    puVar1 = DAT_08ac5938;
    DAT_08ac5938[2] = local_40;
    puVar1[3] = local_3c;
    puVar1[4] = local_38;
    iVar3 = FUN_089d3ab4();
    if (iVar3 != 0) {
      iVar3 = FUN_089d3adc();
      iVar3 = *(int *)(iVar3 + 0x24);
      if (iVar3 < 2) {
        if (((0 < iVar3) && (ppiVar2 != (int **)0x0)) && (piVar6 = ppiVar2[3], piVar6 != (int *)0x0)
           ) {
          FUN_089d0584(piVar6,0,0);
          piVar9 = *ppiVar2;
          if (piVar9 != (int *)0x0) {
            iVar3 = piVar9[3];
            do {
              piVar9 = (int *)*piVar9;
              if (iVar3 != 0) {
                iVar4 = FUN_089d054c(iVar3);
                if (iVar4 == 0) {
                  iVar4 = *(int *)(iVar3 + 0x114);
                }
                else {
                  if (*(char *)(iVar3 + 4) == '\0') {
                    *(undefined *)(iVar3 + 0x12) = *(undefined *)(iVar3 + 0x44);
                    *(undefined *)(iVar3 + 0x13) = *(undefined *)(iVar3 + 0x45);
                    *(int *)(iVar3 + 0x34) = piVar6[0xd];
                    FUN_089d0608(piVar6,iVar3 + 0x38,8);
                    FUN_089d0608(piVar6,iVar3 + 0xc,0x2c);
                    goto LAB_089d14d0;
                  }
                  iVar4 = *(int *)(iVar3 + 0x114);
                }
                if (iVar4 == 0) {
                  cVar5 = *(char *)(iVar3 + 4);
                  uVar7 = *(undefined4 *)(iVar3 + 0x110);
                  if (cVar5 != '\0') {
                    memcpy_jak(auStack_34,iVar3 + 0x38,6);
                  }
                  FUN_08a312e4(*DAT_08ac5938,iVar3);
                  FUN_089d03c4(iVar3,3);
                  if (cVar5 != '\0') {
                    iVar3 = FUN_089cfa8c(auStack_34,
                                         "c:/bullets/bkn2pspsys/src/pspsys/sys/Net/CONetChara.cpp",
                                         0x224);
                    *(undefined4 *)(iVar3 + 0x110) = uVar7;
                  }
                }
                else {
                  iVar4 = FUN_089d054c(iVar3);
                  if (iVar4 == 0) {
                    FUN_08a312e4(*DAT_08ac5938,iVar3);
                    FUN_089d03c4(iVar3,3);
                  }
                }
              }
LAB_089d14d0:
              if (piVar9 == (int *)0x0) break;
              iVar3 = piVar9[3];
            } while( true );
          }
        }
      }
      else if (((iVar3 < 3) && (ppiVar2 != (int **)0x0)) &&
              (ppiVar2 = (int **)*ppiVar2, ppiVar2 != (int **)0x0)) {
        piVar6 = ppiVar2[3];
        while( true ) {
          ppiVar2 = (int **)*ppiVar2;
          if ((piVar6 != (int *)0x0) && (iVar3 = FUN_089d054c(piVar6), iVar3 == 0)) {
            FUN_08a312e4(*DAT_08ac5938,piVar6);
            FUN_089d03c4(piVar6,3);
          }
          if (ppiVar2 == (int **)0x0) break;
          piVar6 = ppiVar2[3];
        }
      }
    }
    FUN_08a313f8(*DAT_08ac5938);
    FUN_089bb790(DAT_08ac5938[1]);
  }
  return;
}

