#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void dl_write_framebuffer_ptr(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  
  if (DAT_08afd498 != (code *)0x0) {
    (*DAT_08afd498)();
  }
  iVar1 = DAT_08afcf9c;
  puVar4 = *(uint **)(DAT_08afcf9c + 8);
  *puVar4 = param_1 | 0xd2000000;
  iVar2 = 4;
  puVar4[1] = ((param_2 << 4) >> 0x1c) << 0x10 | 0x9d000000 | param_3;
  puVar4[2] = param_2 & 0xffffff | 0x9c000000;
  *(uint **)(iVar1 + 8) = puVar4 + 3;
  puVar3 = &DAT_08afcfa0;
  do {
    iVar1 = DAT_08afcf94;
    iVar2 = iVar2 + -1;
    puVar3[0x28] = DAT_08afcf90;
    puVar3[0x29] = iVar1;
    puVar3[0x27] = param_1;
    puVar3 = puVar3 + 0x3f;
  } while (-1 < iVar2);
  DAT_08afcf78 = param_1;
  DAT_08afcf80 = param_2;
  DAT_08afcf7c = param_3;
  if ((DAT_08afcf88 == 0) && (DAT_08afcf94 != 0)) {
    DAT_08afcf88 = param_2 + DAT_08afcf94 * param_3 * 4;
  }
  if (DAT_08afcf8c == 0) {
    DAT_08afcf8c = param_3;
  }
  return;
}

