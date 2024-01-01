#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08976364(int param_1)

{
  char cVar1;
  byte bVar2;
  
  if ((*(char *)(param_1 + 0x503) == '\x01') && (*(char *)(param_1 + 0x500) == '\0')) {
    bVar2 = *(byte *)(param_1 + 0x752);
    if (bVar2 < 2) {
      if (bVar2 != 0) {
        cVar1 = *(char *)(param_1 + 0x501);
        if (cVar1 < '\x01') {
          if (-1 < cVar1) {
            FUN_089762c4(param_1,7);
            return;
          }
        }
        else {
          if (cVar1 < '\x02') {
            FUN_089762c4(param_1,6);
            return;
          }
          if (cVar1 < '\x03') {
            FUN_089762c4(param_1,5);
            return;
          }
        }
      }
    }
    else if (bVar2 < 3) {
      cVar1 = *(char *)(param_1 + 0x501);
      if (cVar1 < '\x01') {
        if (-1 < cVar1) {
          FUN_089762c4(param_1,4);
          return;
        }
      }
      else {
        if (cVar1 < '\x02') {
          FUN_089762c4(param_1,2);
          return;
        }
        if (cVar1 < '\x03') {
          FUN_089762c4(param_1,3);
        }
      }
    }
  }
  return;
}

