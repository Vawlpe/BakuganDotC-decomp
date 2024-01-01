#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0884b670(undefined4 param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = 0;
  iVar5 = 0;
  iVar6 = 0;
  piVar1 = (int *)FUN_088660c8();
  iVar2 = FUN_088660e0();
  iVar7 = *piVar1;
  if (iVar7 != 0) {
    iVar3 = *(int *)(iVar7 + 0x14);
    while( true ) {
      iVar3 = (**(code **)(iVar3 + 0x74))(iVar7 + *(short *)(iVar3 + 0x70));
      if ((iVar3 == 0) ||
         (iVar3 = (**(code **)(*(int *)(iVar7 + 0x14) + 0x9c))
                            (iVar7 + *(short *)(*(int *)(iVar7 + 0x14) + 0x98)), iVar3 == 1)) {
        if (iVar7 == iVar2) {
          iVar7 = *(int *)(iVar7 + 4);
        }
        else {
          iVar3 = iVar7;
          if (*(char *)(iVar7 + 0x4c1) != '\0') {
            iVar6 = iVar6 + 1;
            iVar3 = DAT_08aba78c;
          }
          DAT_08aba78c = iVar3;
          iVar5 = iVar5 + 1;
          iVar7 = *(int *)(iVar7 + 4);
        }
      }
      else {
        iVar7 = *(int *)(iVar7 + 4);
      }
      if (iVar7 == 0) break;
      iVar3 = *(int *)(iVar7 + 0x14);
    }
  }
  if ((iVar5 == iVar6) && (uVar4 = 1, param_2 != '\0')) {
    if (DAT_08aba78c != 0) {
      iVar2 = DAT_08aba78c;
    }
    DAT_08aba78c = iVar2;
    FUN_0884b588(param_1,DAT_08aba78c,0,0);
  }
  return uVar4;
}

