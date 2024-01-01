#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char * FUN_0882393c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(*(int *)(param_1 + 0x80) + 4);
  if ((param_2 < *(int *)(param_1 + 0x8c)) && (iVar2 = 0, pcVar3 < *(char **)(param_1 + 0x88))) {
    do {
      if (*pcVar3 == '\0') {
        return (char *)0x0;
      }
      if (iVar2 == param_2) {
        return pcVar3;
      }
      iVar1 = strlen(pcVar3);
      pcVar3 = pcVar3 + iVar1 + 1;
      iVar2 = iVar2 + 1;
    } while (pcVar3 < *(char **)(param_1 + 0x88));
  }
  return (char *)0x0;
}

