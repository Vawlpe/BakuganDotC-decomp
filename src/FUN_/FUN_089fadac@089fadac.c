#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089fadac(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  bVar1 = false;
  if ((int)param_1[5] < 0) {
    *(undefined *)((int)param_1 + 10) = 1;
  }
  if (*(char *)((int)param_1 + 10) == '\0') {
    iVar3 = zz_sceIoCloseAsync();
    param_1[8] = iVar3;
    cVar2 = *(char *)((int)param_1 + 0xe1);
    if (iVar3 < 0) {
      bVar1 = true;
    }
    else {
      *(undefined *)((int)param_1 + 9) = 1;
    }
  }
  else {
    iVar3 = param_1[8];
    *(undefined *)((int)param_1 + 10) = 0;
    cVar2 = *(char *)((int)param_1 + 0xe1);
    if (-1 < iVar3) {
      *param_1 = 0;
      *(undefined *)(param_1 + 3) = 1;
      param_1[5] = 0xffffffff;
    }
    bVar1 = true;
    if (*(char *)(param_1 + 0x38) != '\0') {
      *param_1 = 9;
      *(undefined *)(param_1 + 3) = 0;
      *(undefined *)(param_1 + 0x3b) = 1;
    }
  }
  if (cVar2 != '\0') {
    if (param_1[1] != 2) {
      *param_1 = 9;
      *(undefined *)(param_1 + 3) = 0;
      param_1[8] = 0;
      *(undefined *)(param_1 + 0x3b) = 0;
      *(undefined *)((int)param_1 + 10) = 0;
      return;
    }
    *(undefined *)((int)param_1 + 0xe1) = 0;
  }
  if (((bVar1) && (*(char *)(param_1 + 0x3b) != '\0')) && (iVar3 != -0x7ffdfcd7)) {
    *param_1 = 9;
    *(undefined *)(param_1 + 3) = 0;
  }
  return;
}

