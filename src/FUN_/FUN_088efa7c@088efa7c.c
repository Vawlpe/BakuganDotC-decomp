#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088efa7c(int param_1)

{
  FUN_088eb508();
  *(byte *)(param_1 + 0x2d6) = *(byte *)(param_1 + 0x2d6) & 0xfe;
  *(undefined **)(param_1 + 0xc) = &DAT_08af425c;
  *(undefined4 *)(param_1 + 0x284) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  *(undefined2 *)(param_1 + 0x28c) = 0;
  *(undefined2 *)(param_1 + 0x28e) = 0;
  *(undefined *)(param_1 + 0x2d2) = 0;
  *(undefined *)(param_1 + 0x2d3) = 0;
  *(undefined *)(param_1 + 0x2d4) = 0;
  *(byte *)(param_1 + 0x2d6) = *(byte *)(param_1 + 0x2d6) & 0xfd;
  *(byte *)(param_1 + 0x2d6) = *(byte *)(param_1 + 0x2d6) & 0xfb;
  memcpy_jak(param_1 + 0x274,&DAT_08a99280,0x10);
  memset_jak(param_1 + 0x292,0,0x40);
  return param_1;
}

