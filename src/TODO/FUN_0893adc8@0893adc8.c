#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893adc8(int param_1,char param_2)

{
  switch(*(undefined *)(param_1 + 0x5ee)) {
  case 0:
    return;
  case 1:
  case 2:
  case 8:
  case 9:
    break;
  case 3:
  case 4:
  case 5:
  case 7:
    return;
  case 6:
    break;
  default:
    goto switchD_0893ade8_caseD_a;
  }
  if (param_2 == '\0') {
    *(undefined4 *)(param_1 + 0x740) = 0;
    *(undefined4 *)(param_1 + 0x748) = 0;
    *(undefined4 *)(param_1 + 0x77c) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x77c) = 0;
    *(undefined4 *)(param_1 + 0x740) = 0x3f800000;
    *(undefined4 *)(param_1 + 0x748) = 0x3f800000;
  }
  *(undefined *)(param_1 + 0x778) = 1;
switchD_0893ade8_caseD_a:
  return;
}

