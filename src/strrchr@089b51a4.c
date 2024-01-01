#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char * strrchr(char *param_1,char param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    if (cVar1 == param_2) {
      pcVar2 = param_1;
    }
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (param_2 == '\0') {
    pcVar2 = param_1;
  }
  return pcVar2;
}

