#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c1960(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  char cVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  FUN_089bb728(param_1[3]);
  FUN_08a2f718(param_1[2]);
  FUN_08a2ee1c(*param_1);
  piVar1 = (int *)FUN_08a2eeec(*param_1);
  if (piVar1 != (int *)0x0) {
    piVar6 = (int *)piVar1[3];
    while( true ) {
      piVar1 = (int *)*piVar1;
      if (piVar6 != (int *)0x0) {
        uVar8 = *piVar6 >> 0x14 & 0xff;
        if (uVar8 < 0x53) {
          iVar3 = FUN_08a2f7c0(param_1[2],uVar8);
          if (iVar3 == -1) {
            if (*(char *)(param_1 + 6) == '\0') {
              cVar5 = *(char *)((int)piVar6 + 9);
            }
            else {
              FUN_08a2f4ec(param_1[2],uVar8,1000);
              cVar5 = *(char *)((int)piVar6 + 9);
            }
          }
          else {
            cVar5 = *(char *)((int)piVar6 + 9);
          }
        }
        else {
          cVar5 = *(char *)((int)piVar6 + 9);
        }
        if (cVar5 == '\0') {
          if (*(char *)(piVar6 + 2) != '\0') {
            uVar2 = FUN_089c59f0();
            iVar3 = FUN_089c67ec(uVar2,uVar8);
            if ((iVar3 == 0) && (iVar3 = FUN_08a2ed08(*param_1,piVar6), iVar3 != 0)) {
              if ((param_1[4] != 0) && (iVar3 = FUN_089d774c(param_1[4],piVar6), iVar3 != 0)) {
                piVar6 = (int *)0x0;
              }
              if (piVar6 != (int *)0x0) {
                FUN_089d8634();
                FUN_089d7fd8(piVar6,0,0);
                FUN_089d866c();
              }
            }
          }
        }
        else {
          *(undefined *)((int)piVar6 + 9) = 0;
        }
      }
      if (piVar1 == (int *)0x0) break;
      piVar6 = (int *)piVar1[3];
    }
  }
  FUN_08a2f648(param_1[2]);
  FUN_08a2f2bc(param_1[1]);
  piVar1 = (int *)FUN_08a2f38c(param_1[1]);
  if (piVar1 != (int *)0x0) {
    puVar7 = (undefined4 *)piVar1[3];
    while( true ) {
      piVar1 = (int *)*piVar1;
      if (puVar7 != (undefined4 *)0x0) {
        uVar2 = *puVar7;
        iVar3 = FUN_08a2f7c0(param_1[2],uVar2);
        if ((iVar3 == -1) || (*(char *)(param_1 + 6) == '\0')) {
          iVar3 = FUN_089c59d4();
          if (iVar3 == 0) {
            iVar3 = FUN_08a2f1a8(param_1[1],puVar7);
            if (iVar3 != 0) {
              if ((param_1[5] != 0) && (iVar3 = FUN_089d774c(param_1[5],puVar7), iVar3 != 0)) {
                puVar7 = (undefined4 *)0x0;
              }
              if (puVar7 != (undefined4 *)0x0) {
                FUN_089d8634();
                FUN_089d7fd8(puVar7,0,0);
                FUN_089d866c();
              }
            }
          }
          else {
            uVar4 = FUN_089c59f0();
            iVar3 = FUN_089c5f18(uVar4,uVar2);
            if (iVar3 == 0) {
              uVar4 = FUN_089c59f0();
              iVar3 = FUN_089c67ec(uVar4,uVar2);
              if (iVar3 == 0) {
                uVar4 = FUN_089c59f0();
                iVar3 = FUN_089c6120(uVar4,uVar2);
                if ((iVar3 != 0) && (iVar3 = FUN_08a2f1a8(param_1[1],puVar7), iVar3 != 0)) {
                  if ((param_1[5] != 0) && (iVar3 = FUN_089d774c(param_1[5],puVar7), iVar3 != 0)) {
                    puVar7 = (undefined4 *)0x0;
                  }
                  if (puVar7 != (undefined4 *)0x0) {
                    FUN_089d8634();
                    FUN_089d7fd8(puVar7,0,0);
                    FUN_089d866c();
                  }
                }
              }
            }
          }
        }
        else {
          puVar7[1] = 0x1e;
        }
      }
      if (piVar1 == (int *)0x0) break;
      puVar7 = (undefined4 *)piVar1[3];
    }
  }
  FUN_089bb790(param_1[3]);
  return;
}

