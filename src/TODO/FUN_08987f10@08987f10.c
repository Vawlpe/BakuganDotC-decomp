#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_08987f10(char param_1,uint param_2)

{
  uint uVar1;
  ushort *puVar2;
  ushort local_40 [22];
  
  puVar2 = local_40;
  param_2 = param_2 & 0xffff;
  memcpy_jak(local_40,u_6789_CDLNORVcgmoqruvww_08ac3a00,0x2c);
  uVar1 = 0;
  if (param_1 == '\0') {
    if (param_2 < 0x15) {
      local_40[0] = local_40[param_2];
    }
    return (uint)local_40[0];
  }
  do {
    if (*puVar2 == param_2) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    puVar2 = puVar2 + 1;
  } while ((int)uVar1 < 0x15);
  return 0xffffffff;
}

