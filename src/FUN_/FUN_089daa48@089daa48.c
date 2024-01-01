#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089daa48(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  char local_110;
  char local_10f [255];
  
  pcVar2 = &local_110;
  iVar3 = 0;
  strcpy(&local_110,param_1);
  iVar1 = 0;
  while (local_110 != '.') {
    if (local_110 == '\0') goto LAB_089daa98;
    pcVar2 = local_10f + iVar1;
    iVar1 = iVar1 + 1;
    local_110 = *pcVar2;
  }
  *pcVar2 = '\0';
LAB_089daa98:
  iVar1 = FUN_089f7720(&local_110);
  if (iVar1 != 0) {
    iVar3 = iVar1 + 0x60;
  }
  return iVar3;
}

