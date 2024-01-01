#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c9e94(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar2 = *(char **)(param_1 + 0x30);
  iVar3 = 1;
  cVar1 = *pcVar2;
  while (cVar1 != '\0') {
    pcVar4 = pcVar2 + iVar3;
    iVar3 = iVar3 + 1;
    cVar1 = *pcVar4;
  }
  if (iVar3 < 5) {
    iVar3 = 5;
  }
  *(char **)(param_1 + 0x30) = pcVar2 + iVar3;
  *(char *)(param_1 + 0x44) = *(char *)(param_1 + 0x44) + '\x01';
  return;
}

