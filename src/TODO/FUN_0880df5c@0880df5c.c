#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0880df5c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == -1) {
    uVar1 = DONE_Get_DAT_08AAC9E0();
    param_1 = FUN_0880d0ac(uVar1,0x13);
  }
  iVar2 = FUN_0880ddb4(param_1);
  iVar2 = iVar2 + 0x57;
  if (iVar2 < 0x5a) {
    if (0x58 < iVar2) {
      return 0x67;
    }
  }
  else if (iVar2 == 0x61) {
    iVar2 = 0x60;
  }
  return iVar2;
}

