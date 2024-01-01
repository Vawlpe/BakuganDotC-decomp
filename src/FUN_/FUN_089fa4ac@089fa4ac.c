#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fa4ac(undefined4 *param_1)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 10) == '\0') {
    iVar1 = zz_sceIoLseekAsync(param_1[5],&PTR_caseD_89b8390_08aa0000,0,0,0);
    param_1[8] = iVar1;
    if (-1 < iVar1) {
      *(undefined *)((int)param_1 + 9) = 1;
    }
  }
  else {
    *(undefined *)((int)param_1 + 10) = 0;
    if (-1 < (int)param_1[8]) {
      *param_1 = 6;
    }
  }
  return;
}

