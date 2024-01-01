#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e0f6c(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (DAT_08ac5c65 == '\0') {
      iVar2 = *(int *)(param_1 + 0x14);
      for (iVar3 = *(int *)(param_1 + 4);
          (**(code **)(iVar2 + 0x3c))(param_1 + *(short *)(iVar2 + 0x38)), iVar3 != 0;
          iVar3 = *(int *)(iVar3 + 4)) {
        iVar2 = *(int *)(iVar3 + 0x14);
        param_1 = iVar3;
      }
    }
    else {
      cVar1 = *(char *)(param_1 + 0xba);
      iVar3 = *(int *)(param_1 + 4);
      while( true ) {
        if (cVar1 == '\0') {
          (**(code **)(*(int *)(param_1 + 0x14) + 0x3c))
                    (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x38));
        }
        if (iVar3 == 0) break;
        cVar1 = *(char *)(iVar3 + 0xba);
        param_1 = iVar3;
        iVar3 = *(int *)(iVar3 + 4);
      }
    }
  }
  return;
}

