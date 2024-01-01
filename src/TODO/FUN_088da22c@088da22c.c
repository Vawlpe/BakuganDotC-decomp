#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088da22c(int param_1)

{
  int iVar1;
  undefined auStack_30 [24];
  
  iVar1 = FUN_088e1948();
  DAT_08b00550 = 0x3f800000;
  DAT_08b00540 = *(undefined4 *)(iVar1 + 0x20);
  DAT_08b00544 = *(undefined4 *)(iVar1 + 0x24);
  DAT_08b00548 = *(undefined4 *)(iVar1 + 0x28);
  DAT_08b0054c = *(undefined4 *)(iVar1 + 0x2c);
  (**(code **)(DAT_08b00534 + 0x4c))((int)&DAT_08b00530 + (int)*(short *)(DAT_08b00534 + 0x48));
  iVar1 = FUN_089ea5d8(param_1 + 0x180,&DAT_08b00530,auStack_30);
  if (iVar1 != 0) {
    return 1;
  }
  return 0;
}

