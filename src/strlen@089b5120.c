#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int strlen(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = param_1;
  if (*param_1 != '\0') {
    for (pcVar1 = param_1 + 1; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    }
  }
  return (int)pcVar1 - (int)param_1;
}

