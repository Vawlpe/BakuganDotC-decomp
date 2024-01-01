#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

char * FUN_08a02748(undefined4 param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)0x0;
  switch(param_1) {
  case 1:
    pcVar1 = "\nC++ runtime abort";
    break;
  case 2:
    pcVar1 = "terminate() called by the exception handling mechanism";
    break;
  case 3:
    pcVar1 = "returned from a user-defined terminate() routine";
    break;
  case 4:
    pcVar1 = "internal error: static object marked for destruction more than once";
    break;
  case 5:
    pcVar1 = "main() called more than once";
    break;
  case 6:
    pcVar1 = "a pure virtual function was called";
    break;
  case 7:
    pcVar1 = "invalid dynamic cast";
    break;
  case 8:
    pcVar1 = "invalid typeid operation";
    break;
  case 9:
    pcVar1 = "freeing array not allocated by an array new operation";
  }
  return pcVar1;
}

