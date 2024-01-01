#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089013e0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  
  FUN_088ffadc();
  FUN_08900df4(param_1);
  iVar7 = *(int *)(param_1 + 0x660);
  if (0x33 < iVar7) {
    if (iVar7 < 0x66) {
      if (iVar7 < 100) {
        return;
      }
      if (iVar7 < 0x65) {
        FUN_089c87e4(0);
        FUN_089c879c(0x3ecccccd,0);
        FUN_089c87e4(1);
        FUN_089c879c(0x3ecccccd,1);
        uVar6 = FUN_089c59f0();
        FUN_089c69a4(uVar6);
        *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
      }
      fVar8 = *(float *)(param_1 + 0x67c) + 0.06667;
      *(float *)(param_1 + 0x67c) = fVar8;
      if (fVar8 < 1.0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x67c) = 0x3f800000;
      iVar7 = FUN_0884b268();
      uVar6 = *(undefined4 *)(param_1 + 0x674);
      uVar1 = *(undefined4 *)(param_1 + 0x678);
      uVar2 = *(undefined4 *)(param_1 + 0x67c);
      *(undefined4 *)(iVar7 + 0x4f0) = *(undefined4 *)(param_1 + 0x670);
      *(undefined4 *)(iVar7 + 0x4f4) = uVar6;
      *(undefined4 *)(iVar7 + 0x4f8) = uVar1;
      *(undefined4 *)(iVar7 + 0x4fc) = uVar2;
      FUN_089bf2f0(*(undefined4 *)(param_1 + 0x4d4),3);
      if (*(int *)(param_1 + 0x4d8) != 0) {
        FUN_089bf2f0(*(undefined4 *)(param_1 + 0x4d8),3);
      }
      uVar2 = DAT_08b001bc;
      uVar1 = DAT_08b001b8;
      uVar6 = DAT_08b001b4;
      puVar4 = DAT_08ac5934;
      *DAT_08ac5934 = DAT_08b001b0;
      puVar4[1] = uVar6;
      puVar4[2] = uVar1;
      puVar4[3] = uVar2;
      *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
    }
    else if (0x66 < iVar7) {
      if (0x67 < iVar7) {
        return;
      }
      FUN_088fefc4(param_1,DAT_08abff80);
      *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
      return;
    }
    if (*(int *)(param_1 + 0x664) == -1) {
      iVar7 = *(int *)(param_1 + 0x660);
    }
    else {
      FUN_089c2d54(*(undefined4 *)(param_1 + 0x664));
      iVar7 = FUN_089c2c54(*(undefined4 *)(param_1 + 0x664));
      if (iVar7 != 0) {
        return;
      }
      iVar7 = FUN_089c2d54(0xffffffff);
      if (iVar7 == 0) {
        return;
      }
      iVar7 = *(int *)(param_1 + 0x660);
    }
    *(int *)(param_1 + 0x660) = iVar7 + 1;
    return;
  }
  switch(iVar7) {
  case 0:
    if (0.005 < *(float *)(param_1 + 0x67c)) {
      fVar8 = *(float *)(param_1 + 0x67c) * 0.9;
    }
    else {
      fVar8 = 0.0;
    }
    *(float *)(param_1 + 0x67c) = fVar8;
    DAT_08abff80 = FUN_088ffdac(param_1);
    if (DAT_08abff80 == 0) {
      return;
    }
    FUN_089c87e4(0);
    FUN_089c879c(0x3f000000,0);
    if (DAT_08abff80 == 2) {
      FUN_089c87e4(1);
      FUN_089c879c(0x3f800000,1);
    }
    *(undefined4 *)(param_1 + 0x658) = 0;
    *(undefined4 *)(param_1 + 0x660) = 10;
    *(undefined4 *)(param_1 + 0x670) = 0;
    *(undefined4 *)(param_1 + 0x674) = 0;
    *(undefined4 *)(param_1 + 0x678) = 0;
    *(undefined4 *)(param_1 + 0x67c) = 0;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
    goto switchD_0890143c_caseD_1;
  case 10:
    break;
  case 0xb:
    goto switchD_0890143c_caseD_b;
  case 0xc:
    goto switchD_0890143c_caseD_c;
  case 0xd:
    *(undefined4 *)(param_1 + 0x660) = 0x14;
  case 0x14:
    iVar7 = FUN_089bf93c(0x2726,1);
    if (iVar7 != 0) {
      return;
    }
    iVar7 = FUN_0882c220(10);
    if (iVar7 == 0) {
      return;
    }
    bVar3 = true;
    if ((*(int *)(DAT_08ac58c4 + 0x20) == 1) && (iVar7 = FUN_0882c220(4), iVar7 != 0)) {
      bVar3 = false;
    }
    uVar6 = 100;
    if (bVar3) {
      uVar6 = 0x32;
    }
    *(undefined4 *)(param_1 + 0x660) = uVar6;
    return;
  default:
    if (iVar7 < 0x32) {
      return;
    }
    if (0x32 < iVar7) {
      iVar7 = FUN_089bf93c(0x19a,1);
      if (iVar7 == 0) {
        *(undefined4 *)(param_1 + 0x660) = 100;
      }
      iVar7 = FUN_0880d354();
      if (iVar7 == 0) {
        return;
      }
      iVar7 = FUN_0880d2e0();
      if (iVar7 == 0) {
        return;
      }
      uVar6 = FUN_0880cc48();
      iVar7 = FUN_0880d7e0(uVar6,0x80);
      if (iVar7 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x660) == 100) {
        return;
      }
      FUN_089bf850(0x19a);
      *(undefined4 *)(param_1 + 0x660) = 100;
      return;
    }
    iVar7 = FUN_089bf6e8(0x19a,100);
    if (iVar7 == 0) {
LAB_08901794:
      iVar7 = *(int *)(param_1 + 0x660);
    }
    else {
      if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
        FUN_089108d8(iVar7,6);
        goto LAB_08901794;
      }
      FUN_089108d8(iVar7,7);
      uVar6 = FUN_0880cc48();
      iVar5 = FUN_0880d0ac(uVar6,0x2e);
      if (iVar5 == 0) {
        iVar7 = *(int *)(param_1 + 0x660);
      }
      else {
        uVar6 = FUN_0880cc48();
        iVar5 = FUN_0880d0ac(uVar6,0x2b);
        if (iVar5 == 1) {
          FUN_089108d8(iVar7,8);
          iVar7 = *(int *)(param_1 + 0x660);
        }
        else {
          uVar6 = FUN_0880cc48(iVar7);
          iVar5 = FUN_0880d0ac(uVar6,0x2b);
          if (iVar5 != 2) goto LAB_08901794;
          FUN_089108d8(iVar7,9);
          iVar7 = *(int *)(param_1 + 0x660);
        }
      }
    }
    *(int *)(param_1 + 0x660) = iVar7 + 1;
    goto switchD_0890143c_caseD_1;
  }
  *(undefined4 *)(param_1 + 0x660) = 0xb;
switchD_0890143c_caseD_b:
  iVar7 = *(int *)(param_1 + 0x658) + -1;
  *(int *)(param_1 + 0x658) = iVar7;
  if (iVar7 < 1) {
    *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
switchD_0890143c_caseD_c:
    bVar3 = false;
    iVar7 = FUN_089c2b10(0);
    if (iVar7 != 0) {
      uVar6 = FUN_089c2b48(0);
      iVar7 = FUN_089c3818(uVar6);
      if (iVar7 == 0) {
        return;
      }
    }
    if ((DAT_08abff80 != 2) && (iVar7 = FUN_089c2b10(1), iVar7 != 0)) {
      uVar6 = FUN_089c2b48(1);
      iVar7 = FUN_089c3818(uVar6);
      if (iVar7 == 0) {
        return;
      }
    }
    if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
      FUN_089c8734(0,0x19,1,0);
      bVar3 = true;
    }
    else {
      iVar7 = FUN_0882c220(4);
      if (iVar7 != 0) {
        FUN_089c8734(0,0x18,1,0);
        bVar3 = true;
      }
    }
    if (bVar3) {
      FUN_0882c2cc(9,1);
      *(int *)(param_1 + 0x660) = *(int *)(param_1 + 0x660) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x660) = 0x32;
    }
  }
switchD_0890143c_caseD_1:
  return;
}

