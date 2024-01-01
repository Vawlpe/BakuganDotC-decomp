#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088fa50c(int param_1,short param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_2 != -1) {
    iVar2 = (int)param_2;
    if ((iVar2 < 0) || ((*(int **)(DAT_08abf740 + 0xc))[2] <= iVar2)) {
      memset_jak(&DAT_08b00ba8,0,4);
      iVar2 = DAT_08b00ba8;
    }
    else {
      iVar2 = *(int *)(**(int **)(DAT_08abf740 + 0xc) + iVar2 * 4);
    }
    iVar5 = 0;
    if (0 < *(int *)(iVar2 + 0x4c)) {
      iVar6 = 0;
      do {
        if (iVar5 < 0) {
          memset_jak(&DAT_08b00ba4,0,4);
          psVar3 = DAT_08b00ba4;
        }
        else {
          psVar3 = *(short **)(*(int *)(iVar2 + 0x44) + iVar6);
        }
        if (*psVar3 == -1) {
          sVar1 = psVar3[1];
LAB_088fa624:
          if (sVar1 != -1) {
            iVar4 = (int)sVar1;
            if ((iVar4 < 0) || (DAT_08abfc50[2] <= iVar4)) {
              memset_jak(&DAT_08b00bac,0,4);
              iVar4 = DAT_08b00bac;
            }
            else {
              iVar4 = *(int *)(*DAT_08abfc50 + iVar4 * 4);
            }
            DAT_08abfc50[3] = iVar4;
          }
          iVar4 = *(int *)(iVar2 + 0x4c);
        }
        else if (*(short *)(param_1 + 0x48) == -1) {
          iVar4 = *(int *)(iVar2 + 0x4c);
        }
        else {
          if (*psVar3 == *(short *)(param_1 + 0x48)) {
            sVar1 = psVar3[1];
            goto LAB_088fa624;
          }
          iVar4 = *(int *)(iVar2 + 0x4c);
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar5 < iVar4);
    }
  }
  return;
}

