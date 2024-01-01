#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 * FUN_089f1f18(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = zz_sceGeEdramGetAddr();
  uVar2 = DAT_08ac5db0 ^ 1;
  *param_1 = 0xcc000000;
  param_1[1] = 0xc6000000;
  param_1[2] = 0xc9000003;
  param_1[3] = 0xc7000101;
  param_1[4] = 0xc2000000;
  param_1[5] = 0xc3000003;
  uVar2 = iVar1 + uVar2 * 0x88000;
  param_1[6] = 0xcb000000;
  param_1[7] = (uVar2 >> 0x18 & 0xf) << 0x10 | 0xa8000200;
  param_1[8] = uVar2 & 0xffffff | 0xa0000000;
  param_1[9] = 0xb8000909;
  param_1[10] = 0xcb000000;
  param_1[0xb] = 0x1e000001;
  return param_1 + 0xc;
}

