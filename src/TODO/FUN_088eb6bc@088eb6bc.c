#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eb6bc(int param_1,char param_2)

{
  char *pcVar1;
  
  *(short *)(param_1 + 0x250) = *(short *)(param_1 + 0x250) + 1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
  pcVar1 = *(char **)(param_1 + 0x20);
  while( true ) {
    if (*pcVar1 == param_2) {
      return;
    }
    *(short *)(param_1 + 0x250) = *(short *)(param_1 + 0x250) + 1;
    *(char **)(param_1 + 0x20) = pcVar1 + 4;
    if (*(ushort *)(param_1 + 0x252) <= *(ushort *)(param_1 + 0x250)) break;
    pcVar1 = *(char **)(param_1 + 0x20);
  }
  return;
}

