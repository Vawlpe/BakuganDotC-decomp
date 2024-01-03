#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_0880969c(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af1504;
  *(undefined4 *)(DAT_08ac5934 + 0x1c) = 0;
  iVar5 = WeirdBuff;
  *(int *)(param_1 + 0x24) = WeirdBuff;
  *(undefined *)(iVar5 + 0x3c) = 1;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar5 = 0;
  if (iVar3 != 0) {
    FUN_089f4f54(iVar3,0);
    iVar5 = iVar3;
  }
  *(int *)(param_1 + 0x1c) = iVar5;
  *(undefined *)(iVar5 + 4) = 1;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar4 = FUN_089d7d74(0x6c,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x20) = uVar4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  uVar9 = 0;
  iVar5 = param_1;
  do {
    *(undefined4 *)(iVar5 + 0x3c) = 0x3f800000;
    uVar9 = uVar9 + 1;
    iVar5 = iVar5 + 4;
  } while (uVar9 < 7);
  *(undefined *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_0880968c(param_1,0);
  iVar5 = DONE_NotZero_DAT_08AAC9E0();
  if (iVar5 != 0) {
    uVar9 = FUN_089ce6d4(WeirdBuff);
    switch(uVar9) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0xc:
      bVar1 = (int)uVar9 < 0xd;
      break;
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    default:
      uVar9 = 0;
      bVar1 = true;
    }
    if (bVar1) {
      uVar2 = DONE_Get_DAT_08AAC9E0();
      FUN_0880c618(uVar2,uVar9);
      uVar6 = 0;
      puVar7 = &DAT_08a34038;
      do {
        uVar8 = uVar6;
        if (*puVar7 == uVar9) break;
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 1;
        uVar8 = uVar9;
      } while (uVar6 < 7);
      *(uint *)(param_1 + 0x28) = uVar8;
    }
    else {
      uVar2 = DONE_Get_DAT_08AAC9E0();
      FUN_0880c618(uVar2,0);
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return param_1;
}

