#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088fbf38(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0xc);
  iVar4 = 0;
  if (0 < piVar1[2]) {
    iVar3 = 0;
    do {
      if ((iVar4 < 0) || (piVar1[2] <= iVar4)) {
        memset_jak(&DAT_08b00fd0,0,4);
        iVar2 = DAT_08b00fd0;
      }
      else {
        iVar2 = *(int *)(*piVar1 + iVar3);
      }
      if (*(int *)(iVar2 + 0x3c) == param_2) {
        return 1;
      }
      piVar1 = *(int **)(param_1 + 0xc);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar4 < piVar1[2]);
  }
  return 0;
}

