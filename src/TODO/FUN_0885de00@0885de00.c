#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0885de00(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char acStack_64 [68];
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xf0)) {
    do {
      iVar3 = FUN_089e01dc(param_1,iVar2);
      strcpy(acStack_64 + 4,iVar3 + 0x18);
      iVar3 = strlen(acStack_64 + 4);
      iVar1 = acStack_64[iVar3 + 3] + -0x30;
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      if (9 < iVar1) {
        iVar1 = -1;
      }
      if (iVar1 != -1) {
        acStack_64[iVar3] = '\0';
      }
      if (0 < param_2) {
        FUN_089b4c84(acStack_64 + 4,"%s.%03d",acStack_64 + 4,param_2);
      }
      iVar3 = FUN_089f7850(acStack_64 + 4);
      if (iVar3 == 0) break;
      FUN_089e0224(param_1,iVar2,iVar3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xf0));
  }
  return iVar3 != 0;
}

