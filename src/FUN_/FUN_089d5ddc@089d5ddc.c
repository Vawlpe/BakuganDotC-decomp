#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d5ddc(int *param_1)

{
  int iVar1;
  int local_10;
  
  iVar1 = FUN_089d6150();
  if (iVar1 == 0) {
    iVar1 = param_1[8];
  }
  else {
    iVar1 = FUN_089d61b4(param_1);
    if (iVar1 == 0) {
      if (param_1[8] < -0x7f9e9ff3) {
        iVar1 = param_1[8];
      }
      else if (param_1[8] == 0) {
        FUN_089d5b08(param_1);
        iVar1 = param_1[8];
      }
      else {
        iVar1 = param_1[8];
      }
    }
    else {
      iVar1 = param_1[8];
    }
  }
  if ((((iVar1 == 0) && (param_1[2] != 0)) && (*param_1 != 0)) &&
     (iVar1 = zz_scePsmfPlayerGetCurrentPts(*param_1,&local_10), iVar1 == 0)) {
    param_1[0x15] = local_10;
  }
  return;
}

