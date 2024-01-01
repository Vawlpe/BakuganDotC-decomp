#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884254c(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = -1;
  iVar2 = 0;
  do {
    iVar7 = 0;
    piVar3 = &DAT_08a655ac;
    piVar4 = &DAT_08a65550;
    piVar5 = &DAT_08a654f4;
    piVar6 = &DAT_08a65498;
    do {
      if (iVar2 < 2) {
        if (-1 < iVar2) {
          if (iVar2 < 1) {
            iVar1 = *piVar6;
          }
          else {
            iVar1 = *piVar5;
          }
        }
      }
      else if (iVar2 < 3) {
        iVar1 = *piVar4;
      }
      else if (iVar2 < 4) {
        iVar1 = *piVar3;
      }
      if ((iVar1 != -1) &&
         ((iVar8 = *(int *)(*(int *)(param_1 + 0x60) + iVar1 * 4), param_2 != '\0' ||
          (iVar7 != 0x16)))) {
        *(undefined4 *)(iVar8 + 0x90) = *(undefined4 *)(iVar8 + 0x60);
        *(undefined4 *)(iVar8 + 0x94) = *(undefined4 *)(iVar8 + 100);
        *(undefined4 *)(iVar8 + 0x98) = *(undefined4 *)(iVar8 + 0x68);
        *(undefined4 *)(iVar8 + 0x9c) = *(undefined4 *)(iVar8 + 0x6c);
      }
      iVar7 = iVar7 + 1;
      piVar6 = piVar6 + 1;
      piVar5 = piVar5 + 1;
      piVar4 = piVar4 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar7 < 0x17);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}

