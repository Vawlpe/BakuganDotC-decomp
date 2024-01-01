#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089064b4(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  
  uVar5 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0x28) == 0x52) {
    if (uVar5 == 0x7d) {
      if (*(int *)(param_1 + 0x18) != 0) {
        FUN_088608d8(0x3dcccccd,*(int *)(param_1 + 0x18),0x126,1,1);
        uVar5 = *(uint *)(param_1 + 0x30);
      }
      goto LAB_08906520;
    }
    uVar4 = *(ushort *)(param_2 + 0x18);
  }
  else {
LAB_08906520:
    uVar4 = *(ushort *)(param_2 + 0x18);
  }
  if (uVar4 != uVar5) {
    return;
  }
  iVar7 = 0;
  iVar2 = FUN_08904ec0(*(int *)(param_1 + 0x10) + 0x1a0,*(undefined4 *)(param_2 + 0x20));
  if (iVar2 != 0) {
    iVar7 = *(int *)(iVar2 + 0x28);
  }
  iVar2 = 0;
  if (iVar7 < 3) {
    if (iVar7 < 2) {
      uVar4 = *(ushort *)(param_2 + 0x1a);
      goto LAB_08906594;
    }
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  else if (iVar7 < 4) {
    iVar2 = *(int *)(param_1 + 0x18);
  }
  else {
    if (4 < iVar7) {
      uVar4 = *(ushort *)(param_2 + 0x1a);
      goto LAB_08906594;
    }
    iVar2 = *(int *)(param_1 + 0x20);
  }
  uVar4 = *(ushort *)(param_2 + 0x1a);
LAB_08906594:
  if ((uVar4 < 5) && (uVar4 != 1)) {
    if (uVar4 == 2) {
      uVar5 = (uint)*(ushort *)(param_2 + 0x34);
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      else if (7 < uVar5) {
        uVar5 = 7;
      }
      switch(*(undefined4 *)(param_1 + 0x28)) {
      case 0x19:
      case 0x21:
      case 0x25:
      case 0x29:
      case 0x2d:
      case 0x31:
      case 0x35:
      case 0x39:
      case 0x41:
      case 0x45:
      case 0x49:
      case 0x4d:
      case 0x51:
      case 0x55:
      case 0x59:
      case 0x5d:
      case 0x61:
      case 0x65:
        uVar5 = 1;
        break;
      case 0x33:
        uVar5 = 1;
        break;
      case 0x5b:
        if (iVar7 == 3) {
          uVar5 = 0;
        }
        else {
          pfVar6 = (float *)(*(int *)(param_1 + 0x1c) + 0x20);
          uVar5 = 4;
          *pfVar6 = *pfVar6 + 26.0;
          pfVar6 = (float *)(*(int *)(param_1 + 0x1c) + 0x28);
          *pfVar6 = *pfVar6 + 64.0;
        }
        break;
      case 0x5f:
        if (iVar7 == 2) {
          pfVar6 = (float *)(*(int *)(param_1 + 0x1c) + 0x20);
          *pfVar6 = *pfVar6 + -8.0;
          pfVar6 = (float *)(*(int *)(param_1 + 0x1c) + 0x28);
          uVar5 = 4;
          *pfVar6 = *pfVar6 + 82.0;
          *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2c) = 0x3ff1463b;
          FUN_088deadc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x2c));
        }
        break;
      case 99:
        if (iVar7 == 2) {
          uVar5 = 2;
        }
      }
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar7 = FUN_089d7d74(0x28,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      if (iVar7 != 0) {
        FUN_08906340(iVar7,*(undefined4 *)(param_1 + 0x10),iVar2,uVar5,
                     *(undefined4 *)(param_1 + 0x28),param_1 + 0x60);
      }
    }
    else if (uVar4 == 3) {
      uVar1 = *(undefined2 *)(param_2 + 0x30);
      if (iVar7 < 3) {
        if ((1 < iVar7) && (iVar2 = *(int *)(param_1 + 0x1c), iVar2 != 0)) {
          uVar3 = FUN_089063b8(param_1,uVar1);
          FUN_088def24(*(undefined4 *)(param_2 + 0x28),iVar2,uVar3,*(char *)(param_2 + 0x3a) != '\0'
                       ,1);
        }
      }
      else if (iVar7 < 4) {
        iVar2 = *(int *)(param_1 + 0x18);
        if (iVar2 != 0) {
          uVar3 = FUN_089063ec(param_1,uVar1);
          FUN_088608d8(*(undefined4 *)(param_2 + 0x28),iVar2,uVar3,*(char *)(param_2 + 0x3a) != '\0'
                       ,1);
        }
      }
      else if ((iVar7 < 5) && (iVar2 = *(int *)(param_1 + 0x20), iVar2 != 0)) {
        uVar3 = FUN_0890648c(param_1,uVar1);
        FUN_088b7fd8(*(undefined4 *)(param_2 + 0x28),iVar2,uVar3,*(char *)(param_2 + 0x3a) != '\0',1
                    );
      }
    }
    else if ((uVar4 != 4) && (iVar2 != 0)) {
      *(float *)(iVar2 + 0x6c) = (float)(uint)*(byte *)(param_2 + 0x3b) * 0.003921569;
    }
  }
  if (param_2 != 0) {
    (**(code **)(*(int *)(param_2 + 0x14) + 0xc))
              (param_2 + *(short *)(*(int *)(param_2 + 0x14) + 8),3);
  }
  return;
}

