#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088bcc48(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = (undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x370) = *puVar3;
  *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x37c) = *(undefined4 *)(param_1 + 0x5c);
  puVar2 = (undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x380) = *puVar2;
  *(undefined4 *)(param_1 + 900) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x388) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x38c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x360) = 0x3f800000;
  FUN_088b9f54(param_1,1,0);
  iVar1 = 0;
  do {
    FUN_088bc210(param_1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 10);
  *(undefined4 *)(param_1 + 0x390) = *puVar3;
  *(undefined4 *)(param_1 + 0x394) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0x3a0) = *puVar2;
  *(undefined4 *)(param_1 + 0x3a4) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x3ac) = *(undefined4 *)(param_1 + 0x6c);
  *puVar3 = *(undefined4 *)(param_1 + 0x370);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x374);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_1 + 0x378);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x37c);
  *puVar2 = *(undefined4 *)(param_1 + 0x380);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 900);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x388);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_1 + 0x38c);
  FUN_088b9eac(param_1,6);
  return;
}

