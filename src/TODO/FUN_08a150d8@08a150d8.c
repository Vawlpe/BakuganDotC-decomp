#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined2 * FUN_08a150d8(void)

{
  undefined2 *puVar1;
  
  puVar1 = (undefined2 *)FUN_08a135b4(0,0x10,0xc0);
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = 1;
    puVar1[0x11] = 0xffff;
    *(undefined4 *)(puVar1 + 0x14) = 0xff;
    *(undefined4 *)(puVar1 + 0x12) = 0xbf800000;
    puVar1[0x17] = 0xfcff;
    *(undefined4 *)(puVar1 + 0x20) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x18) = 0xffffffff;
    *(undefined4 *)(puVar1 + 0x1a) = 0x10001;
    puVar1[1] = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)(puVar1 + 4) = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)(puVar1 + 10) = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x1c) = 0;
    *(undefined4 *)(puVar1 + 0x1e) = 0;
    *(undefined4 *)(puVar1 + 0x22) = 0x3f800000;
    *(undefined4 *)(puVar1 + 0x24) = 0;
    puVar1[0x26] = 0;
    puVar1[0x27] = 0;
    *(undefined4 *)(puVar1 + 0x28) = 0;
    *(undefined4 *)(puVar1 + 0x2a) = 0;
    FUN_08a13c14(0,0,0,0x3f800000,puVar1 + 0x30);
    FUN_08a13c94(0,0,0x3f800000,0x3f800000,puVar1 + 0x38);
    FUN_08a13c2c(0,0,0,0x3f800000,0x3f800000,0x3f800000,puVar1 + 0x40);
  }
  return puVar1;
}

