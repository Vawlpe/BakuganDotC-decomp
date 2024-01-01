#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e0af8(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(DAT_08abf710 + 0x88) == '\0') {
    iVar2 = (**(code **)(*(int *)(param_1 + 0x14) + 0x94))
                      (*(undefined4 *)(param_1 + 0x154),0x40000000,
                       param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x90),param_1 + 0x370,0,0);
    if (iVar2 == 0) {
      cVar1 = *(char *)(param_1 + 0x356);
    }
    else {
      FUN_088e05dc(param_1,9,0);
      *(undefined4 *)(param_1 + 0x324) = 0;
      *(int *)(param_1 + 0x360) = *(int *)(param_1 + 0x360) + 1;
      cVar1 = *(char *)(param_1 + 0x356);
    }
    if ((cVar1 != '\0') && (iVar2 = FUN_088e1948(), iVar2 != 0)) {
      FUN_088e1184();
    }
    return;
  }
  FUN_088def24(0x3e4ccccd,param_1,0,1,0);
  return;
}

