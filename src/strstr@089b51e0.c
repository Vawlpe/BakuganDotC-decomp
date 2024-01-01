#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char * strstr(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (*param_1 == '\0') {
    pcVar3 = (char *)0x0;
    if (*param_2 == '\0') {
      pcVar3 = param_1;
    }
    return pcVar3;
  }
  do {
    iVar2 = 0;
    cVar1 = *param_2;
    while( true ) {
      pcVar3 = param_1 + iVar2;
      if (cVar1 == '\0') {
        return param_1;
      }
      iVar2 = iVar2 + 1;
      if (cVar1 != *pcVar3) break;
      cVar1 = param_2[iVar2];
    }
    param_1 = param_1 + 1;
  } while (*param_1 != '\0');
  return (char *)0x0;
}

