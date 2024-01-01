#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089eb14c(int param_1,int param_2,int param_3,char *param_4,undefined param_5,
                 undefined param_6)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    if (*(char *)(param_1 + 8) == '\0') {
      cVar1 = *param_4;
    }
    else {
      FUN_089f51b8();
      *(undefined4 *)(iVar2 + 0x84) = 0;
      *(undefined *)(param_1 + 8) = 0;
      cVar1 = *param_4;
    }
    if (cVar1 != '\0') {
      iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x74);
      (**(code **)(iVar2 + 0x14))
                ((float)param_2,(float)param_3,0,
                 *(int *)(param_1 + 0xc) + (int)*(short *)(iVar2 + 0x10),param_4,param_5,0,param_6);
    }
  }
  return;
}

