#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char * strcpy(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_2;
  param_2 = param_2 + 1;
  *param_1 = cVar1;
  pcVar2 = param_1 + 1;
  while (cVar1 != '\0') {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  }
  return param_1;
}

