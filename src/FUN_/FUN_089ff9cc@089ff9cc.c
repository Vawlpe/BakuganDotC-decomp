#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ff9cc(undefined4 *param_1)

{
  code *pcVar1;
  
  do {
    while( true ) {
      FUN_089bb728(param_1[1]);
      FUN_08a2d5a8(*param_1);
      pcVar1 = (code *)FUN_08a327fc(*param_1,0);
      FUN_089bb790(param_1[1]);
      if (pcVar1 == (code *)0x0) break;
      (*pcVar1)();
      FUN_089ffa3c(param_1,pcVar1);
    }
    FUN_089bbef8();
  } while( true );
}

