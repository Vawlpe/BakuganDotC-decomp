#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088f4d94(int param_1,undefined param_2)

{
  FUN_088f4cdc(param_1,param_2);
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) | 1;
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 0xfd;
  *(undefined **)(param_1 + 0x14) = &DAT_08af43c4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined2 *)(param_1 + 0x30) = 0xffff;
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 0xfb;
  *(undefined2 *)(param_1 + 0x32) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0xffff;
  *(undefined *)(param_1 + 0x36) = 0;
  *(undefined *)(param_1 + 0x37) = 0;
  *(undefined *)(param_1 + 0x38) = 0;
  *(undefined *)(param_1 + 0x39) = 0;
  *(undefined *)(param_1 + 0x3a) = 0;
  *(undefined *)(param_1 + 0x3c) = 0;
  *(undefined *)(param_1 + 0x3d) = 2;
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 0xf7;
  *(undefined *)(param_1 + 0x3e) = 0;
  *(undefined *)(param_1 + 0x3f) = 0;
  *(undefined *)(param_1 + 0x40) = 0;
  *(undefined *)(param_1 + 0x41) = 0;
  *(undefined *)(param_1 + 0x42) = 0;
  *(undefined *)(param_1 + 0x43) = 0;
  *(undefined *)(param_1 + 0x44) = 6;
  *(undefined *)(param_1 + 0x45) = 0;
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 0xef;
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 0xdf;
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 0xbf;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) & 0xfe;
  *(byte *)(param_1 + 0x46) = *(byte *)(param_1 + 0x46) & 0x7f;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 2;
  *(byte *)(param_1 + 0x47) = *(byte *)(param_1 + 0x47) | 4;
  memset_jak(param_1 + 0x18,0,0xc);
  return param_1;
}

