#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08910104(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af4964;
  *(undefined4 *)(param_1 + 0x160) = 0x25;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar3 = FUN_089d7d74(0x94,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  FUN_08909df4(param_1,1);
  *(undefined *)(param_1 + 0x15c) = *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c);
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  FUN_0880d308();
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  memset_jak((undefined *)(param_1 + 0x80),0,0xc0);
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x378) = 0;
  *(undefined4 *)(param_1 + 0x37c) = 0xffffffff;
  iVar7 = 0;
  iVar5 = param_1 + 0x178;
  iVar6 = param_1;
  do {
    iVar4 = FUN_08818afc(1);
    *(int *)(iVar6 + 0x170) = iVar4;
    *(undefined4 *)(iVar4 + 0xe0) = 0x43e60000;
    strcpy(iVar5,&DAT_08a9b92c);
    uVar1 = DAT_08b0088c;
    uVar3 = DAT_08b00888;
    uVar2 = DAT_08b00884;
    iVar7 = iVar7 + 1;
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 0x100;
  } while (iVar7 < 2);
  iVar6 = *(int *)(param_1 + 0x170);
  *(undefined4 *)(iVar6 + 0xc0) = DAT_08b00880;
  *(undefined4 *)(iVar6 + 0xc4) = uVar2;
  *(undefined4 *)(iVar6 + 200) = uVar3;
  *(undefined4 *)(iVar6 + 0xcc) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = 2;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  FUN_089a3928();
  return param_1;
}

