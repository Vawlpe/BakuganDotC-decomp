#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893a858(int param_1,char param_2)

{
  int iVar1;
  
  switch(*(undefined *)(param_1 + 0x5ee)) {
  case 0:
  case 4:
  case 8:
  case 9:
    return;
  case 1:
  case 2:
  case 3:
  case 7:
    if (param_2 != '\0') {
      FUN_08939b58(param_1,param_2,5);
      return;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x14);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_08939b58(param_1,0,5);
switchD_0893a884_caseD_5:
    return;
  case 5:
  case 6:
    goto switchD_0893a884_caseD_5;
  default:
    return;
  }
}

