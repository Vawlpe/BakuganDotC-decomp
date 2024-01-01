#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0882c490(undefined4 param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = 0;
  psVar1 = &DAT_08a646b0;
  do {
    iVar2 = iVar2 + 1;
    if (param_2 == *psVar1) {
      return (int)psVar1[1];
    }
    psVar1 = psVar1 + 2;
  } while (iVar2 < 0xec);
  return 0x5a;
}

