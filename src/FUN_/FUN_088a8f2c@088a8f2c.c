#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a8f2c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_V7D;
  undefined4 uVar4;
  
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  DAT_08b002d0 = *param_2;
  DAT_08b002d8 = param_2[2];
  DAT_08b002dc = param_2[3];
  DAT_08b002d4 = (float)param_2[1] + 200.0;
  DAT_08b002e0 = DAT_08b008e0;
  DAT_08b002e4 = DAT_08b008e4;
  DAT_08b002e8 = DAT_08b008e8;
  DAT_08b002ec = DAT_08b008ec;
  uVar4 = vcmp_s(8,DAT_08b008e0,DAT_08b008e0);
  vrcp_s(DAT_08b008e0);
  DAT_08b002f0 = vcmovt_s(in_V7D,(byte)uVar4 & 1);
  uVar4 = vcmp_s(8,DAT_08b008e4,DAT_08b008e0);
  vrcp_s(DAT_08b008e4);
  DAT_08b002f4 = vcmovt_s(in_V7D,(byte)uVar4 & 1);
  uVar4 = vcmp_s(8,DAT_08b008e8,DAT_08b008e0);
  vrcp_s(DAT_08b008e8);
  DAT_08b002f8 = vcmovt_s(in_V7D,(byte)uVar4 & 1);
  DAT_08b002fc = in_V7D;
  iVar3 = FUN_0881a83c(param_3,&DAT_08b00300,0);
  uVar2 = DAT_08b0028c;
  uVar1 = DAT_08b00288;
  uVar4 = DAT_08b00284;
  if (iVar3 == 0) {
    uVar4 = param_2[1];
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    *param_1 = *param_2;
    param_1[1] = uVar4;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    param_1[1] = 0;
  }
  else {
    *param_1 = DAT_08b00280;
    param_1[1] = uVar4;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  return;
}

