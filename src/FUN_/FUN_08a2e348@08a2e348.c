#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a2e348(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *param_1;
  iVar8 = 0;
  FUN_08a2e774(param_1[1]);
  iVar6 = param_1[1];
  if (iVar6 != 0) {
    do {
      iVar2 = FUN_08a2e774(iVar6);
      if ((iVar2 != 0) && (iVar3 = FUN_08a2e788(iVar2), iVar3 != 0)) {
        uVar4 = FUN_08a2e774(iVar2);
        FUN_08a2e76c(iVar6,uVar4);
        if ((param_1[4] != 0) && (iVar3 = FUN_089d774c(param_1[4],iVar2), iVar3 != 0)) {
          FUN_08a2e6f4(iVar2,2);
          iVar2 = 0;
        }
        if (iVar2 != 0) {
          FUN_08a2e6f4(iVar2,3);
        }
      }
      iVar6 = FUN_08a2e774(iVar6);
    } while (iVar6 != 0);
    iVar6 = param_1[1];
  }
  iVar6 = FUN_08a2e774(iVar6);
  do {
    if (iVar7 == 0) {
      FUN_08a2deec(param_1);
      FUN_08a2e76c(param_1[1],0);
      return iVar8;
    }
    iVar2 = FUN_08a2e774(iVar7);
    bVar1 = false;
    if (iVar2 == 0) {
      if (iVar6 != 0) {
        FUN_08a2e76c(iVar7,iVar6);
      }
    }
    else {
      iVar8 = iVar8 + 1;
      iVar3 = FUN_08a2e788(iVar2);
      if (iVar3 != 0) {
        uVar4 = FUN_08a2e774(iVar2);
        FUN_08a2e76c(iVar7,uVar4);
        if ((param_1[4] != 0) && (iVar3 = FUN_089d774c(param_1[4],iVar2), iVar3 != 0)) {
          FUN_08a2e6f4(iVar2,2);
          iVar2 = 0;
        }
        if (iVar2 != 0) {
          FUN_08a2e6f4(iVar2,3);
        }
        iVar2 = FUN_08a2e774(iVar7);
        bVar1 = true;
      }
      if (iVar2 != 0) {
        while (iVar6 != 0) {
          iVar3 = FUN_08a2e764(iVar6);
          iVar5 = FUN_08a2e764(iVar2);
          if (iVar5 <= iVar3) break;
          iVar8 = iVar8 + 1;
          FUN_08a2e76c(iVar7,iVar6);
          iVar6 = FUN_08a2e774(iVar6);
          uVar4 = FUN_08a2e774(iVar7);
          FUN_08a2e76c(uVar4,iVar2);
          iVar7 = FUN_08a2e774(iVar7);
        }
      }
    }
    if (!bVar1) {
      iVar7 = iVar2;
    }
  } while( true );
}

