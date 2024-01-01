#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088cd1b8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af2d84;
  iVar7 = 0;
  DAT_08ac5934[7] = 0;
  iVar6 = param_1;
  do {
    iVar5 = FUN_08818afc(0);
    *(int *)(iVar6 + 0x10) = iVar5;
    iVar7 = iVar7 + 1;
    *(undefined *)(iVar5 + 0x8c) = 1;
    iVar5 = WeirdBuff;
    iVar6 = iVar6 + 4;
  } while (iVar7 < 3);
  *(int *)(param_1 + 0x1c) = WeirdBuff;
  *(undefined *)(iVar5 + 0x39) = 1;
  iVar6 = FUN_089edb80();
  *(undefined4 *)(iVar6 + 0x10) = 0x469c4000;
  uVar4 = DAT_08b001bc;
  uVar3 = DAT_08b001b8;
  uVar2 = DAT_08b001b4;
  puVar1 = DAT_08ac5934;
  *DAT_08ac5934 = DAT_08b001b0;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  memset_jak((undefined *)(param_1 + 0x28),0,8);
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0;
  return param_1;
}

