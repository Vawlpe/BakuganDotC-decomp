#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089bf7a8(int *param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if (DAT_08af8270 != 0) {
    iVar2 = *param_1;
    iVar1 = FUN_089bfad4();
    if (iVar1 == iVar2) {
      FUN_089bfac4(0);
    }
    iVar1 = FUN_08a2da04(DAT_08af8270,param_1);
    if (((iVar1 != 0) && (param_2 != '\0')) && (param_1 != (int *)0x0)) {
      (**(code **)(param_1[3] + 0xc))((int)param_1 + (int)*(short *)(param_1[3] + 8),3);
    }
  }
  return;
}

