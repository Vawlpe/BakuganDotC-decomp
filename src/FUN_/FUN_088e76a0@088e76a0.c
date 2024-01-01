#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088e76a0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x350) + 0x3b);
  switch(*(undefined4 *)(DAT_08ac58c4 + 4)) {
  case 4:
    if (cVar1 == -0x6a) {
      return 1;
    }
    break;
  case 8:
    if (cVar1 == -0x5c) {
      return 1;
    }
    break;
  case 0xc:
    if (((cVar1 == -0x60) || (cVar1 == -0x5c)) || (cVar1 == -0x5b)) {
      return 1;
    }
    break;
  case 0xe:
    if ((cVar1 == -0x60) || (cVar1 == -0x5e)) {
      return 1;
    }
  }
  return 0;
}

