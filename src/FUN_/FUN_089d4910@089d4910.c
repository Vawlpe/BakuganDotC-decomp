#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d4910(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x34;
  if (*(int *)(param_1 + 0x24) == 2) {
    strcpy(iVar1,&DAT_08aa20a8);
    FUN_089d4808(param_1,iVar1,param_1 + 0x3c);
  }
  else {
    strcpy(iVar1,"MATCH");
  }
  return;
}

