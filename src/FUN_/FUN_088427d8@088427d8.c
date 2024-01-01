#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088427d8(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  
  iVar2 = -1;
  iVar1 = 0;
  piVar6 = &DAT_08a65498;
  piVar5 = &DAT_08a654f4;
  piVar4 = &DAT_08a65550;
  piVar3 = &DAT_08a655ac;
  do {
    if (param_2 < 2) {
      if (-1 < param_2) {
        if (param_2 < 1) {
          iVar2 = *piVar6;
        }
        else {
          iVar2 = *piVar5;
        }
      }
    }
    else if (param_2 < 3) {
      iVar2 = *piVar4;
    }
    else if (param_2 < 4) {
      iVar2 = *piVar3;
    }
    if (iVar2 != -1) {
      iVar7 = *(int *)(*(int *)(param_1 + 0x60) + iVar2 * 4);
      if (param_3 == '\0') {
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
      }
      else {
        *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) | 1;
      }
    }
    iVar1 = iVar1 + 1;
    piVar6 = piVar6 + 1;
    piVar5 = piVar5 + 1;
    piVar4 = piVar4 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar1 < 0x17);
  return;
}

