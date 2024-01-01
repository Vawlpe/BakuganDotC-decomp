#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088a9020(undefined4 *param_1)

{
  int iVar1;
  undefined4 in_V7D;
  undefined4 uVar2;
  
  DAT_08b002d0 = *param_1;
  DAT_08b002d8 = param_1[2];
  DAT_08b002dc = param_1[3];
  DAT_08b002d4 = (float)param_1[1] + 1000.0;
  DAT_08b002e0 = DAT_08b008e0;
  DAT_08b002e4 = DAT_08b008e4;
  DAT_08b002e8 = DAT_08b008e8;
  DAT_08b002ec = DAT_08b008ec;
  uVar2 = vcmp_s(8,DAT_08b008e0,DAT_08b008e0);
  vrcp_s(DAT_08b008e0);
  DAT_08b002f0 = vcmovt_s(in_V7D,(byte)uVar2 & 1);
  uVar2 = vcmp_s(8,DAT_08b008e4,DAT_08b008e0);
  vrcp_s(DAT_08b008e4);
  DAT_08b002f4 = vcmovt_s(in_V7D,(byte)uVar2 & 1);
  uVar2 = vcmp_s(8,DAT_08b008e8,DAT_08b008e0);
  vrcp_s(DAT_08b008e8);
  DAT_08b002f8 = vcmovt_s(in_V7D,(byte)uVar2 & 1);
  DAT_08b002fc = in_V7D;
  iVar1 = FUN_0884b248();
  if ((iVar1 != 0) && (iVar1 = FUN_0881a83c(0x3fbf2100,&DAT_08b00300,0), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

