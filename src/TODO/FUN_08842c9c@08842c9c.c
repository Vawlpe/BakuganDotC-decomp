#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08842c9c(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = -1;
  iVar6 = 0;
  do {
    iVar5 = 0;
    piVar1 = &DAT_08a65498;
    piVar2 = &DAT_08a655ac;
    piVar3 = &DAT_08a65550;
    piVar4 = &DAT_08a654f4;
    do {
      if (iVar6 < 2) {
        if (-1 < iVar6) {
          if (iVar6 < 1) {
            iVar7 = *piVar1;
          }
          else {
            iVar7 = *piVar4;
          }
        }
      }
      else if (iVar6 < 3) {
        iVar7 = *piVar3;
      }
      else if (iVar6 < 4) {
        iVar7 = *piVar2;
      }
      if (iVar7 != -1) {
        *(undefined4 *)(*(int *)(*(int *)(param_2 + 0x60) + iVar7 * 4) + 0xbc) = param_1;
      }
      iVar5 = iVar5 + 1;
      piVar1 = piVar1 + 1;
      piVar4 = piVar4 + 1;
      piVar3 = piVar3 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar5 < 0x17);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  return;
}

