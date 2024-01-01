#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0899b740(undefined4 param_1,undefined param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  
  cVar1 = FUN_0899b684(param_1,param_2,0x1b);
  cVar2 = FUN_0899b684(param_1,param_2,0x1a);
  cVar3 = FUN_0899b684(param_1,param_2,0x20);
  cVar4 = FUN_0899b684(param_1,param_2,0x21);
  return (char)(cVar1 + cVar2 + cVar3 + cVar4) != '\0';
}

