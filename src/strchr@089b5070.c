#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char * strchr(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  while ((cVar1 != '\0' && (cVar1 != param_2))) {
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  if (cVar1 != param_2) {
    param_1 = (char *)0x0;
  }
  return param_1;
}

