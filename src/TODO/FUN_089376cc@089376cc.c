#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089376cc(int param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 0x2c);
  if (uVar8 < 0xe) {
    switch(uVar8) {
    case 0:
      FUN_0892c130(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xc),param_1 + 0x1a08);
      FUN_0892c25c(1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10),
                   *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x14),param_1 + 0x1a18);
      FUN_0893345c(param_1,0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      break;
    case 1:
      cVar4 = FUN_08933644(param_1,0);
      if (cVar4 == '\x01') {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      break;
    case 2:
      FUN_08933844(param_1,0);
      FUN_08933da4(param_1,0);
      FUN_0893436c(param_1,0);
      FUN_0893601c(param_1,0);
      FUN_08934a1c(param_1,1);
      FUN_08933000(param_1);
      FUN_08933268(param_1);
      FUN_08935b80(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      break;
    case 3:
      cVar4 = FUN_08933a4c(param_1,0);
      cVar1 = FUN_08934080(param_1,0);
      cVar2 = FUN_08934550(param_1,0);
      cVar3 = FUN_0893475c(param_1,0);
      if ((char)(cVar4 + cVar1 + cVar2 + cVar3) == '\x04') {
        piVar7 = (int *)_DONE_Get_DAT_08AAC9E0();
        if ((*(ushort *)(*piVar7 + 0x82) & 0x20) == 0) {
          *(undefined4 *)(param_1 + 0x2c) = 0xc;
        }
        else {
          FUN_08936984(param_1);
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
        }
      }
      break;
    case 4:
      FUN_08934e3c(param_1);
      FUN_08934e90(param_1);
      FUN_08934ec0(param_1);
      FUN_089a5868(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xec),param_1 + 0x9b0);
      cVar4 = FUN_089355d4(param_1);
      if (cVar4 == '\0') {
        if ((*(byte *)(*(int *)(param_1 + 0x20) + 5) & 0x20) == 0) {
          iVar6 = FUN_0893527c(param_1);
          if (iVar6 == 1) {
            iVar6 = _DONE_NotZero_DAT_08AC5874();
            if (iVar6 != 0) {
              uVar5 = _DONE_Get_DAT_08AC5874();
              FUN_089c6350(uVar5,1,0,0);
            }
            FUN_08936984(param_1);
          }
        }
        else {
          iVar6 = _DONE_NotZero_DAT_08AC5874();
          if (iVar6 != 0) {
            uVar5 = _DONE_Get_DAT_08AC5874();
            FUN_089c6350(uVar5,2,0,0);
          }
          *(undefined *)(param_1 + 0xcad) = 1;
          FUN_08936984(param_1);
          *(undefined4 *)(param_1 + 0x2c) = 5;
        }
      }
      else if (cVar4 == '\x01') {
        iVar6 = _DONE_NotZero_DAT_08AC5874();
        if (iVar6 != 0) {
          uVar5 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar5,0,0,0);
        }
        FUN_08936984(param_1);
        FUN_089356a0(param_1);
        *(undefined *)(param_1 + 0xcad) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0xb;
      }
      else {
        iVar6 = _DONE_NotZero_DAT_08AC5874();
        if (iVar6 != 0) {
          uVar5 = _DONE_Get_DAT_08AC5874();
          FUN_089c6350(uVar5,3,0,0);
        }
      }
      break;
    case 5:
      FUN_08934df8(param_1);
      FUN_08933844(param_1,1);
      FUN_08933da4(param_1,1);
      FUN_0893436c(param_1,1);
      FUN_0893601c(param_1,1);
      FUN_08934a1c(param_1,2);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      break;
    case 6:
      cVar4 = FUN_08933a4c(param_1,1);
      cVar1 = FUN_08934080(param_1,1);
      cVar2 = FUN_08934550(param_1,1);
      cVar3 = FUN_0893475c(param_1,1);
      if ((char)(cVar4 + cVar1 + cVar2 + cVar3) == '\x04') {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      break;
    case 7:
      FUN_0893345c(param_1,1);
      FUN_089333b4(param_1);
      FUN_089333ec(param_1);
      FUN_08933424(param_1);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      break;
    case 8:
      cVar4 = FUN_08933644(param_1,1);
      if (cVar4 == '\x01') {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      }
      break;
    case 9:
      iVar6 = FUN_089edb80();
      *(undefined4 *)(iVar6 + 0x30) = 0;
      *(undefined4 *)(iVar6 + 0x34) = 0;
      *(undefined4 *)(iVar6 + 0x38) = 0;
      *(undefined4 *)(iVar6 + 0x3c) = 0;
      iVar6 = FUN_089edb80();
      *(undefined4 *)(iVar6 + 0x40) = 0;
      *(undefined4 *)(iVar6 + 0x44) = 0;
      *(undefined4 *)(iVar6 + 0x48) = 0;
      *(undefined4 *)(iVar6 + 0x4c) = 0x3f800000;
      uVar5 = FUN_089edb80();
      FUN_089edf24(uVar5,0x10);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      break;
    case 10:
      uVar5 = FUN_089edb80();
      iVar6 = FUN_089edf70(uVar5);
      if (iVar6 != 0) {
        *(undefined4 *)(param_1 + 0x2c) = 0xe;
      }
      break;
    case 0xb:
      iVar6 = FUN_0893573c(param_1);
      if (iVar6 == 1) {
        if (*(char *)(param_1 + 0x74) == '\0') {
          FUN_0893584c(param_1);
          FUN_089359f4(param_1);
          *(undefined4 *)(param_1 + 0x2c) = 4;
        }
        else {
          *(undefined4 *)(param_1 + 0x2c) = 5;
        }
      }
      break;
    case 0xc:
      *(undefined *)(param_1 + 0x1a78) = 0;
      *(int *)(param_1 + 0x2c) = ((int)(uVar8 * 4) >> 2) + 1;
      break;
    case 0xd:
      iVar6 = FUN_08935f34(param_1);
      if (iVar6 == 1) {
        FUN_08936984(param_1);
        piVar7 = (int *)_DONE_Get_DAT_08AAC9E0();
        *(ushort *)(*piVar7 + 0x82) = *(ushort *)(*piVar7 + 0x82) | 0x20;
        *(undefined4 *)(param_1 + 0x2c) = 4;
      }
    }
  }
  else {
    FUN_08932fc4(param_1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  FUN_0892c180(param_1 + 0x1a08);
  FUN_0892c2d8(param_1 + 0x1a18);
  FUN_0893466c(param_1);
  FUN_08936f20(param_1);
  FUN_08935e00(param_1);
  return;
}

