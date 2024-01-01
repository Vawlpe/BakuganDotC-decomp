#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880bb40(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  undefined4 in_V7C;
  undefined auStack_250 [256];
  undefined auStack_150 [256];
  undefined auStack_50 [60];
  
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    iVar3 = FUN_089cc674();
    if (iVar3 < 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xf;
      *(undefined *)(param_1 + 0x20) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 1;
      *(undefined *)(param_1 + 0x20) = 1;
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
    break;
  case 1:
    iVar3 = FUN_089cc058();
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    uVar4 = FUN_089cc080();
    FUN_089cc460(uVar4,1);
    uVar4 = FUN_089cc080();
    uVar4 = FUN_089cc630(uVar4,1);
    *(undefined4 *)(param_1 + 0x18) = uVar4;
    if (*(char *)(param_1 + 0x20) == '\0') {
      iVar3 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(iVar3 + 0x20) = 0x3e8888f8;
      *(undefined4 *)(iVar3 + 0x24) = 0x3f088851;
      *(undefined4 *)(iVar3 + 0x28) = 0x3e8888f8;
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      iVar3 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(iVar3 + 0x30) = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(iVar3 + 0x28);
      *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(iVar3 + 0x2c);
      iVar3 = *(int *)(param_1 + 0x28);
      *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(iVar3 + 0x20);
      *(undefined4 *)(iVar3 + 0x44) = *(undefined4 *)(iVar3 + 0x24);
      *(undefined4 *)(iVar3 + 0x48) = *(undefined4 *)(iVar3 + 0x28);
      *(undefined4 *)(iVar3 + 0x4c) = *(undefined4 *)(iVar3 + 0x2c);
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x4c) = 0x3f333333;
      *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x10) = 0x44ed8000;
      FUN_089ede1c(*(undefined4 *)(param_1 + 0x28),3);
      FUN_089edf24(*(undefined4 *)(param_1 + 0x28),0xf);
      FUN_089edde8(*(undefined4 *)(param_1 + 0x28),1);
      *(undefined4 *)(param_1 + 0x10) = 2;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x10);
      (**(code **)(iVar3 + 0x14))(*(int *)(param_1 + 0x18) + (int)*(short *)(iVar3 + 0x10),0xd);
      *(undefined4 *)(param_1 + 0x10) = 4;
      *(undefined4 *)(param_1 + 0x2c) = 0x2d;
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
    break;
  case 2:
    iVar3 = FUN_089edf70(*(undefined4 *)(param_1 + 0x28));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x10);
    (**(code **)(iVar3 + 0x14))(*(int *)(param_1 + 0x18) + (int)*(short *)(iVar3 + 0x10),0);
    *(undefined4 *)(param_1 + 0x10) = 3;
    break;
  case 3:
    iVar3 = FUN_089cc778(*(undefined4 *)(param_1 + 0x18));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    FUN_089ede1c(*(undefined4 *)(param_1 + 0x28),4);
    FUN_089edf24(*(undefined4 *)(param_1 + 0x28),0xf);
    *(undefined4 *)(param_1 + 0x10) = 4;
    break;
  case 4:
    iVar3 = FUN_089edf70(*(undefined4 *)(param_1 + 0x28));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    if (0 < *(int *)(param_1 + 0x2c)) {
      if (*(int *)(param_1 + 0x2c) < 2) {
        iVar3 = FUN_089cc778(*(undefined4 *)(param_1 + 0x18));
        if (iVar3 == 0) {
          iVar3 = *(int *)(param_1 + 0x28);
          goto LAB_0880c3fc;
        }
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      else {
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
      }
      break;
    }
    iVar3 = FUN_089cc778(*(undefined4 *)(param_1 + 0x18));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    iVar3 = FUN_089cc798(*(undefined4 *)(param_1 + 0x18));
    uVar4 = FUN_089cbdf0(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    iVar5 = FUN_0880d2e0();
    if (iVar5 != 0) {
      uVar4 = FUN_0880cc48();
      FUN_0880cd9c(uVar4,1,iVar3);
    }
    uVar4 = FUN_089cc080();
    FUN_089cc5a8(uVar4,1);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (iVar3 < 2) {
      if (iVar3 < 1) {
        iVar5 = *(int *)(param_1 + 0x10);
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 0x12;
LAB_0880be70:
        iVar5 = *(int *)(param_1 + 0x10);
      }
    }
    else {
      if (iVar3 < 3) {
        uVar4 = 0x11;
        if (*(char *)(param_1 + 0x20) != '\0') {
          uVar4 = 0x12;
        }
        *(undefined4 *)(param_1 + 0x10) = uVar4;
        goto LAB_0880be70;
      }
      iVar5 = *(int *)(param_1 + 0x10);
    }
    if (iVar5 == 0x12) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    if (*(char *)(param_1 + 0x20) == '\0') {
      *(undefined4 *)(param_1 + 0x10) = 8;
    }
    else if (iVar3 < 6) {
      if (iVar3 < 4) {
LAB_0880bed8:
        *(undefined4 *)(param_1 + 0x10) = 5;
      }
      else if (iVar3 < 5) {
        *(undefined4 *)(param_1 + 0x10) = 6;
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 7;
      }
    }
    else {
      if ((iVar3 < 7) || (8 < iVar3)) goto LAB_0880bed8;
      *(undefined4 *)(param_1 + 0x10) = 8;
    }
    break;
  case 5:
    iVar3 = FUN_08816aac();
    iVar3 = FUN_089eb134(*(undefined4 *)(iVar3 + 0x2c));
    if (iVar3 != 0) {
      FUN_089b4c84(auStack_250,*(undefined4 *)(PTR_PTR_DAT_08aae714 + 0x14),
                   *(undefined4 *)(param_1 + 0x1c));
      uVar4 = FUN_08816aac();
      FUN_08816ba4(uVar4,auStack_250);
      iVar3 = FUN_08816aac();
      *(undefined4 *)(iVar3 + 0x40) = 0;
      uVar4 = FUN_08816aac();
      iVar3 = FUN_08816c28(uVar4,1,0xffffffff);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x10) = 0xe;
      }
    }
    break;
  case 6:
    iVar3 = FUN_08816aac();
    iVar3 = FUN_089eb134(*(undefined4 *)(iVar3 + 0x2c));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    uVar4 = FUN_08816aac();
    FUN_08816ba4(uVar4,*(undefined4 *)(PTR_PTR_DAT_08aae714 + 0x18));
    iVar3 = FUN_08816aac();
    *(undefined4 *)(iVar3 + 0x40) = 0;
    uVar4 = FUN_08816aac();
    iVar3 = FUN_08816c28(uVar4,1,0xffffffff);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xe;
    }
    break;
  case 7:
    iVar3 = FUN_08816aac();
    iVar3 = FUN_089eb134(*(undefined4 *)(iVar3 + 0x2c));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    uVar4 = FUN_08816aac();
    FUN_08816ba4(uVar4,*(undefined4 *)(PTR_PTR_DAT_08aae714 + 0x1c));
    iVar3 = FUN_08816aac();
    *(undefined4 *)(iVar3 + 0x40) = 0;
    uVar4 = FUN_08816aac();
    iVar3 = FUN_08816c28(uVar4,1,0xffffffff);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xe;
    }
    break;
  case 8:
    iVar3 = FUN_089cc058();
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    uVar4 = FUN_089cc080();
    FUN_089cc460(uVar4,1);
    uVar4 = FUN_089cc080();
    iVar3 = FUN_089cc630(uVar4,1);
    *(int *)(param_1 + 0x18) = iVar3;
    (**(code **)(*(int *)(iVar3 + 0x10) + 0x14))
              (iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 0x10),4);
    *(undefined4 *)(param_1 + 0x10) = 9;
    break;
  case 9:
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    iVar3 = FUN_089cc778(*(undefined4 *)(param_1 + 0x18));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    iVar5 = 0;
    iVar3 = FUN_0880d2e0();
    if (iVar3 != 0) {
      iVar5 = FUN_089cc798(*(undefined4 *)(param_1 + 0x18));
      uVar4 = FUN_0880cc48();
      FUN_0880cd9c(uVar4,1,iVar5);
    }
    uVar4 = FUN_089cc080();
    FUN_089cc5a8(uVar4,1);
    if ((iVar5 < 7) || (8 < iVar5)) {
      *(undefined4 *)(param_1 + 0x10) = 0x11;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 10;
    }
    break;
  case 10:
    iVar3 = FUN_08816aac();
    iVar3 = FUN_089eb134(*(undefined4 *)(iVar3 + 0x2c));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    iVar3 = FUN_089cc658();
    iVar3 = (int)(iVar3 + ((uint)(iVar3 >> 10) >> 0x16)) >> 10;
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    FUN_089b4c84(auStack_150,*(undefined4 *)(PTR_PTR_DAT_08aae714 + 8),iVar3);
    uVar4 = FUN_08816aac();
    FUN_08816ba4(uVar4,auStack_150);
    iVar3 = FUN_08816aac();
    *(undefined4 *)(iVar3 + 0x40) = 0;
    uVar4 = FUN_08816aac();
    iVar3 = FUN_08816c28(uVar4,1,0xffffffff);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xb;
    }
    break;
  case 0xb:
    uVar4 = FUN_08816aac();
    iVar3 = FUN_08816e58(uVar4);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    uVar4 = FUN_08816aac();
    iVar3 = FUN_08816eb0(uVar4);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xc;
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0x11;
    }
    break;
  case 0xc:
    iVar3 = FUN_089cc058();
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    uVar4 = FUN_089cc080();
    FUN_089cc460(uVar4,1);
    uVar4 = FUN_089cc080();
    iVar3 = FUN_089cc630(uVar4,1);
    *(int *)(param_1 + 0x18) = iVar3;
    (**(code **)(*(int *)(iVar3 + 0x10) + 0x14))
              (iVar3 + *(short *)(*(int *)(iVar3 + 0x10) + 0x10),2);
    *(undefined4 *)(param_1 + 0x10) = 0xd;
    break;
  case 0xd:
    if (*(int *)(param_1 + 0x18) == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    iVar3 = FUN_089cc778(*(undefined4 *)(param_1 + 0x18));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    uVar4 = FUN_089cc080();
    FUN_089cc5a8(uVar4,1);
    *(undefined4 *)(param_1 + 0x10) = 1;
    break;
  case 0xe:
    uVar4 = FUN_08816aac();
    iVar3 = FUN_08816e58(uVar4);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    uVar4 = FUN_08816aac();
    iVar3 = FUN_08816eb0(uVar4);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x10) = 0x12;
    }
    else {
      uVar4 = 1;
      if (*(char *)(param_1 + 0x21) != '\0') {
        uVar4 = 0xf;
      }
      *(undefined4 *)(param_1 + 0x10) = uVar4;
    }
    break;
  case 0xf:
    iVar3 = FUN_08816aac();
    iVar3 = FUN_089eb134(*(undefined4 *)(iVar3 + 0x2c));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    uVar4 = FUN_08816aac();
    FUN_08816ba4(uVar4,*(undefined4 *)(PTR_PTR_DAT_08aae714 + 0x20));
    iVar3 = FUN_08816aac();
    *(undefined4 *)(iVar3 + 0x40) = 0;
    uVar4 = FUN_08816aac();
    iVar3 = FUN_08816c28(uVar4,1,0xffffffff);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0x10;
    }
    break;
  case 0x10:
    uVar4 = FUN_08816aac();
    iVar3 = FUN_08816e58(uVar4);
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    uVar4 = FUN_08816aac();
    iVar3 = FUN_08816eb0(uVar4);
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0x21) = 0;
      *(undefined4 *)(param_1 + 0x10) = 1;
    }
    else {
      *(undefined *)(param_1 + 0x21) = 1;
      *(undefined4 *)(param_1 + 0x10) = 0x11;
    }
    break;
  case 0x11:
    iVar3 = FUN_08816aac();
    iVar3 = FUN_089eb134(*(undefined4 *)(iVar3 + 0x2c));
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      goto LAB_0880c3fc;
    }
    uVar4 = FUN_08816aac();
    FUN_08816ba4(uVar4,*(undefined4 *)(PTR_PTR_DAT_08aae714 + 0x10));
    iVar3 = FUN_08816aac();
    *(undefined4 *)(iVar3 + 0x40) = 0;
    uVar4 = FUN_08816aac();
    iVar3 = FUN_08816c28(uVar4,1,0xffffffff);
    if (iVar3 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xe;
    }
    break;
  default:
    FUN_089bf7a8(param_1,1);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x28);
LAB_0880c3fc:
  if (iVar3 == 0) {
    iVar3 = *(int *)(param_1 + 0x24);
  }
  else {
    FUN_089edc68(*(undefined4 *)(param_1 + 0x28));
    iVar3 = *(int *)(param_1 + 0x24);
  }
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    if (iVar3 < 1) {
      if ((-1 < iVar3) && (iVar3 = FUN_089eb03c(*(undefined4 *)(param_1 + 0x24),0x20), iVar3 != 0))
      {
        uVar4 = FUN_089eb248(*(undefined4 *)(param_1 + 0x24));
        FUN_08817a90(uVar4,1);
        iVar3 = FUN_089eb248(*(undefined4 *)(param_1 + 0x24));
        uVar2 = DAT_08b0019c;
        uVar1 = DAT_08b00198;
        uVar4 = DAT_08b00194;
        *(undefined4 *)(iVar3 + 0xb0) = DAT_08b00190;
        *(undefined4 *)(iVar3 + 0xb4) = uVar4;
        *(undefined4 *)(iVar3 + 0xb8) = uVar1;
        *(undefined4 *)(iVar3 + 0xbc) = uVar2;
        iVar3 = FUN_089eb248(*(undefined4 *)(param_1 + 0x24));
        uVar2 = DAT_08b0019c;
        uVar1 = DAT_08b00198;
        uVar4 = DAT_08b00194;
        *(undefined4 *)(iVar3 + 0xc0) = DAT_08b00190;
        *(undefined4 *)(iVar3 + 0xc4) = uVar4;
        *(undefined4 *)(iVar3 + 200) = uVar1;
        *(undefined4 *)(iVar3 + 0xcc) = uVar2;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
    }
    else if (iVar3 < 2) {
      if (0 < *(int *)(param_1 + 0x2c)) {
        FUN_089eb2e0(auStack_50,*(undefined4 *)(PTR_PTR_DAT_08aae714 + 0x28));
        FUN_089eb14c(*(undefined4 *)(param_1 + 0x24),0x20,0xf0,auStack_50,0,0);
        *(undefined4 *)(param_1 + 0x34) = 0;
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      }
    }
    else if (iVar3 < 3) {
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      if (*(int *)(param_1 + 0x2c) == 0) {
        FUN_089eb250(*(undefined4 *)(param_1 + 0x24));
        *(undefined4 *)(param_1 + 0x30) = 1;
      }
      else {
        iVar3 = FUN_089eb248(*(undefined4 *)(param_1 + 0x24));
        iVar3 = *(int *)(iVar3 + 0x84);
        if (iVar3 != 0) {
          iVar5 = FUN_089eb248(*(undefined4 *)(param_1 + 0x24));
          iVar5 = *(int *)(iVar5 + 0x88);
          iVar6 = 0;
          if (0 < iVar5) {
            iVar7 = *(int *)(param_1 + 0x34) * 2;
            do {
              uVar4 = vmul_s((float)iVar7 * 3.141593 * 0.06666667,in_V7C);
              fVar8 = (float)vcos_s(uVar4);
              *(float *)(iVar3 + 100) = fVar8 * 3.0 + 240.0;
              iVar7 = iVar7 + 8;
              iVar6 = iVar6 + 1;
              iVar3 = iVar3 + 0x160;
            } while (iVar6 < iVar5);
          }
        }
      }
    }
  }
  return;
}

