#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089fdaa4(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar2 = 0;
  if (param_2 != 0) {
    iVar7 = *param_1;
    if (iVar7 < 1) {
      if (iVar7 < 0) {
        return 0;
      }
      iVar7 = param_1[1];
    }
    else {
      if (iVar7 != 2) {
        return 0;
      }
      iVar7 = param_1[1];
    }
    if (iVar7 == 0) {
      param_1[1] = param_2;
    }
    iVar7 = 0;
    while (iVar3 = FUN_089be308(param_2,iVar7), iVar3 != 0) {
      uVar2 = FUN_089be378(param_2,iVar7);
      uVar4 = FUN_089be340(param_2,iVar7);
      bVar1 = false;
      if (param_3 == 0) {
        bVar1 = true;
      }
      else {
        iVar5 = strstr(uVar2,param_3);
        if (iVar5 != 0) {
          bVar1 = true;
        }
      }
      if (bVar1) {
        uVar6 = FUN_089fce94();
        iVar3 = FUN_089fd150(uVar6,param_1[1],uVar2,iVar3,1,0);
        if (iVar3 != 0) {
          FUN_089fba80(iVar3,0x100);
          FUN_089fbcf0(iVar3,uVar4);
        }
      }
      iVar7 = iVar7 + 1;
    }
    *param_1 = 2;
    uVar2 = 1;
  }
  return uVar2;
}

