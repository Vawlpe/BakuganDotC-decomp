#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089f17b0(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    param_2 = *(uint *)(DAT_08ac5934 + 0x34);
  }
  puVar1 = (undefined4 *)FUN_089f1308(param_1);
  *puVar1 = 0x1e000001;
  puVar1[1] = 0x22000000;
  puVar1[2] = 0x23000000;
  puVar1[3] = 0x24000000;
  puVar1[4] = 0x21000000;
  puVar1[5] = 0x55ffffff;
  puVar1[6] = 0x580000ff;
  puVar1[7] = 0x4c000000;
  puVar1[8] = 0x4d000000;
  puVar1[9] = 0x483f8000;
  puVar1[10] = 0x493f8000;
  puVar1[0xb] = 0x4a000000;
  puVar1[0xc] = 0x4b000000;
  puVar1[0xd] = 0xd2000000;
  puVar1[0xe] = (param_2 >> 0x18 & 0xf) << 0x10 | 0x9d000100;
  puVar1[0xf] = param_2 & 0xffffff | 0x9c000000;
  puVar1[0x10] = 0x42430000;
  puVar1[0x11] = 0x43c30000;
  puVar1[0x12] = 0x45000000;
  puVar1[0x13] = 0x46000000;
  puVar1[0x14] = 0xd4000000;
  puVar1[0x15] = 0xd503fcff;
  puVar1[0x16] = 0x15000000;
  puVar1[0x17] = 0x1603fcff;
  iVar2 = zz_sceGeEdramGetAddr();
  uVar3 = iVar2 + (DAT_08ac5db0 ^ 1) * 0x88000;
  puVar1[0x18] = (uVar3 >> 0x18 & 0xf) << 0x10 | 0xa8000200;
  puVar1[0x19] = uVar3 & 0xffffff | 0xa0000000;
  puVar1[0x1a] = 0xb8000909;
  puVar1[0x1b] = 0xcb000000;
  puVar1[0x1c] = 0xc2000000;
  puVar1[0x1d] = 0xc3000003;
  puVar1[0x1e] = 0xcb000000;
  puVar1[0x1f] = 0x12800102;
  puVar1[0x20] = 0x10080000;
  puVar1[0x21] = 0x1ac5e58;
  puVar1[0x22] = 0x4060008;
  puVar1[0x23] = 0x4c007100;
  puVar1[0x24] = 0x4d007780;
  puVar1[0x25] = 0x42437000;
  puVar1[0x26] = 0x43c30800;
  puVar1[0x27] = 0x45450000;
  puVar1[0x28] = 0x46450000;
  puVar1[0x29] = 0xd4000000;
  puVar1[0x2a] = 0xd5043ddf;
  puVar1[0x2b] = 0x15000000;
  puVar1[0x2c] = 0x16043ddf;
  if (DAT_08ac5db0 == 0) {
    puVar1[0x2d] = 0xd2000003;
    puVar1[0x2e] = 0x9d000200;
    puVar1[0x2f] = 0x9c088000;
  }
  else {
    puVar1[0x2d] = 0xd2000003;
    puVar1[0x2e] = 0x9d000200;
    puVar1[0x2f] = 0x9c000000;
  }
  FUN_089f13c8(param_1,puVar1 + 0x30);
  return;
}

