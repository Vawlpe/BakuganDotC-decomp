#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893a968(int param_1,char param_2)

{
  int iVar1;
  
  switch(*(undefined *)(param_1 + 0x5ee)) {
  case 0:
  case 3:
  case 4:
  case 7:
    return;
  case 1:
  case 2:
  case 8:
  case 9:
    break;
  case 5:
    return;
  case 6:
    goto switchD_0893a994_caseD_6;
  default:
    return;
  }
switchD_0893a994_caseD_6:
  if (param_2 == '\0') {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 4);
    *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
    FUN_08939b58(param_1,0,1);
    return;
  }
  FUN_08939b58(param_1,param_2,1);
  return;
}

