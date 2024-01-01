#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char * strcat(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  cVar1 = *param_1;
  pcVar3 = param_1 + 1;
  pcVar2 = param_1;
  while (pcVar4 = pcVar3, cVar1 != '\0') {
    pcVar3 = pcVar4 + 1;
    pcVar2 = pcVar4;
    cVar1 = *pcVar4;
  }
  cVar1 = *param_2;
  param_2 = param_2 + 1;
  *pcVar2 = cVar1;
  while (cVar1 != '\0') {
    cVar1 = *param_2;
    param_2 = param_2 + 1;
    *pcVar4 = cVar1;
    pcVar4 = pcVar4 + 1;
  }
  return param_1;
}

