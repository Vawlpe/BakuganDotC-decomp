#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c5a60(int param_1)

{
  char cVar1;
  undefined auVar2 [16];
  undefined4 uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  undefined2 uVar10;
  short sVar11;
  byte bVar12;
  undefined (*pauVar13) [16];
  uint uVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined auStack_90 [2];
  short local_8e;
  undefined auStack_7c [96];
  
  FUN_088be95c();
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    FUN_088bf230(param_1);
    *(undefined4 *)(param_1 + 0x61c) = 1;
    bVar4 = false;
    if (DAT_08b00dd7 < 2) {
      if (DAT_08b00dd7 == 0) {
LAB_088c5bbc:
        if (((DAT_08abe906 == '\x01') || (DAT_08abe906 == '\x02')) || (DAT_08abe906 == '\x03')) {
          FUN_088c0fc8(param_1);
          FUN_088df5d8(*DAT_08abf710);
          FUN_088b9f54(param_1 + 0x20,1,0);
          DAT_08abe906 = '\0';
        }
      }
      else {
        DAT_08b00d1c = *DAT_08b00d40;
        DAT_08b00d20 = DAT_08b00d40[1];
        DAT_08b00d24 = DAT_08b00d40[2];
        DAT_08b00d28 = *(undefined2 *)((int)DAT_08b00d40 + 0xe);
      }
    }
    else {
      if (2 < DAT_08b00dd7) goto LAB_088c5bbc;
      piVar7 = (int *)_DONE_Get_DAT_08AAC9E0();
      if ((*(int *)(*piVar7 + *(int *)(DAT_08ac58c4 + 4) * 4 + 0x250) == 2) && (DAT_08b00dc2 != -1))
      {
        FUN_088c1084(param_1,(int)DAT_08b00dc2,DAT_08b00dc6);
        bVar4 = true;
      }
      if (bVar4) {
        *(undefined4 *)(param_1 + 0x61c) = 4;
      }
      else {
        DAT_08b00d1c = *DAT_08b00d40;
        DAT_08b00d20 = DAT_08b00d40[1];
        DAT_08b00d24 = DAT_08b00d40[2];
        DAT_08b00d28 = *(undefined2 *)((int)DAT_08b00d40 + 0xe);
      }
    }
    DAT_08b00dd7 = 0;
    iVar9 = 0;
    if (*(int *)(param_1 + 0x5e4) != 0) {
      do {
        FUN_088bb320(param_1 + 0x20);
        iVar9 = iVar9 + 1;
      } while (iVar9 < 0x78);
    }
    if (!bVar4) {
      FUN_088bf180(param_1);
      iVar9 = FUN_088e1948();
      *(undefined *)(iVar9 + 0x3b1) = 1;
      FUN_089c2fbc(*(undefined4 *)(param_1 + 0x6ec));
      *(undefined *)(param_1 + 0x6f8) = 1;
    }
    iVar9 = FUN_089edb80();
    if (0.0 < *(float *)(iVar9 + 0x2c)) {
      iVar9 = FUN_089edb80();
      iVar6 = FUN_089edb80();
      uVar8 = *(undefined4 *)(iVar6 + 0x24);
      uVar5 = *(undefined4 *)(iVar6 + 0x28);
      uVar3 = *(undefined4 *)(iVar6 + 0x2c);
      *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar6 + 0x20);
      *(undefined4 *)(iVar9 + 0x34) = uVar8;
      *(undefined4 *)(iVar9 + 0x38) = uVar5;
      *(undefined4 *)(iVar9 + 0x3c) = uVar3;
      iVar9 = FUN_089edb80();
      *(undefined4 *)(iVar9 + 0x40) = 0;
      *(undefined4 *)(iVar9 + 0x44) = 0;
      *(undefined4 *)(iVar9 + 0x48) = 0;
      *(undefined4 *)(iVar9 + 0x4c) = 0;
      uVar8 = FUN_089edb80();
      FUN_089edf24(uVar8,0x14);
    }
    break;
  case 1:
    uVar8 = FUN_089edb80();
    iVar9 = FUN_089edf70(uVar8);
    if (iVar9 != 0) {
      if (*(char *)(param_1 + 0x6f8) == '\0') {
        FUN_088cf048();
        FUN_088bf180(param_1);
      }
      else {
        *(undefined *)(param_1 + 0x6f8) = 0;
      }
      FUN_088f48c8(*(undefined4 *)(param_1 + 0x78c));
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  case 2:
    uVar8 = FUN_088c3eac(param_1);
    *(undefined4 *)(param_1 + 0x61c) = uVar8;
    break;
  case 4:
    uVar8 = FUN_089edb80();
    iVar9 = FUN_089edf70(uVar8);
    if (iVar9 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 5:
    iVar9 = FUN_088ef6c4(*(undefined4 *)(param_1 + 0x790));
    if (iVar9 != 0) {
      if (*(char *)(param_1 + 0x6e0) != '\0') {
        FUN_088c1d48(param_1);
      }
      break;
    }
    *(undefined *)(param_1 + 0x6e0) = 0;
    FUN_088b8cd4(param_1 + 0x64c);
    if (*(char *)(param_1 + 0x6c0) != '\0') {
      *(undefined *)(param_1 + 0x6c0) = 0;
      *(undefined4 *)(param_1 + 0x61c) = 0x1f;
      break;
    }
    goto LAB_088c5dc0;
  case 6:
    iVar9 = FUN_089edb80();
    *(undefined4 *)(iVar9 + 0x30) = 0;
    *(undefined4 *)(iVar9 + 0x34) = 0;
    *(undefined4 *)(iVar9 + 0x38) = 0;
    *(undefined4 *)(iVar9 + 0x3c) = 0;
    iVar9 = FUN_089edb80();
    *(undefined4 *)(iVar9 + 0x40) = 0;
    *(undefined4 *)(iVar9 + 0x44) = 0;
    *(undefined4 *)(iVar9 + 0x48) = 0;
    *(undefined4 *)(iVar9 + 0x4c) = 0x3f800000;
    uVar8 = FUN_089edb80();
    FUN_089edf24(uVar8,0x14);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 7:
    uVar8 = FUN_089edb80();
    iVar9 = FUN_089edf70(uVar8);
    if (iVar9 != 0) {
      FUN_088bf3e8(param_1,1);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 8:
    FUN_088c0cc4(param_1,1);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 9:
    FUN_088b9f54(param_1 + 0x20,1,0);
    iVar9 = FUN_089edb80();
    *(undefined4 *)(iVar9 + 0x30) = 0;
    *(undefined4 *)(iVar9 + 0x34) = 0;
    *(undefined4 *)(iVar9 + 0x38) = 0;
    *(undefined4 *)(iVar9 + 0x3c) = 0x3f800000;
    iVar9 = FUN_089edb80();
    *(undefined4 *)(iVar9 + 0x40) = 0;
    *(undefined4 *)(iVar9 + 0x44) = 0;
    *(undefined4 *)(iVar9 + 0x48) = 0;
    *(undefined4 *)(iVar9 + 0x4c) = 0;
    uVar8 = FUN_089edb80();
    FUN_089edf24(uVar8,0x14);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x61c) = 1;
    break;
  case 0xb:
    *(undefined *)(param_1 + 0x3d9) = 1;
    uVar10 = 0x5a;
    if (DAT_08b00bd8._1_1_ != '\0') {
      uVar10 = 0x32;
    }
    *(undefined2 *)(param_1 + 0x794) = uVar10;
    *(undefined2 *)(param_1 + 0x798) = 0x3c;
    if (*(char *)(param_1 + 0x79b) == -1) {
      *(undefined4 *)(param_1 + 0x60c) = 0;
    }
    else {
      iVar9 = DAT_08abf710[*(byte *)(param_1 + 0x79b)];
      *(int *)(param_1 + 0x60c) = iVar9;
      FUN_088ba5c8(param_1 + 0x20,iVar9);
      iVar9 = (**(code **)(*(int *)(iVar9 + 0x14) + 100))
                        (iVar9 + *(short *)(*(int *)(iVar9 + 0x14) + 0x60));
      if (iVar9 == 0) {
        uVar10 = 0x6e;
        if (DAT_08b00bd8._1_1_ != '\0') {
          uVar10 = 0x3c;
        }
      }
      else {
        uVar10 = 0x82;
        if (DAT_08b00bd8._1_1_ != '\0') {
          uVar10 = 0x46;
        }
      }
      *(undefined2 *)(param_1 + 0x794) = uVar10;
    }
    *(undefined *)(param_1 + 0x700) = 1;
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 0xc:
    if (*(int *)(param_1 + 0x60c) == 0) {
      sVar11 = *(short *)(param_1 + 0x794);
    }
    else if ((*(short *)(param_1 + 0x794) < DAT_08abea08) || (*(char *)(param_1 + 0x701) != '\0')) {
      pauVar13 = (undefined (*) [16])(param_1 + 0x370);
      auVar2 = vsub_q(*(undefined (*) [16])(*(int *)(param_1 + 0x60c) + 0x20),*pauVar13);
      auVar2 = vscl_q(auVar2,*(undefined4 *)(param_1 + 0x704));
      auVar2 = vadd_q(*pauVar13,auVar2);
      *(int *)*pauVar13 = auVar2._0_4_;
      *(int *)(param_1 + 0x374) = auVar2._4_4_;
      *(int *)(param_1 + 0x378) = auVar2._8_4_;
      *(int *)(param_1 + 0x37c) = auVar2._12_4_;
      if (DAT_08abea0c < *(float *)(param_1 + 0x364)) {
        *(float *)(param_1 + 0x364) =
             *(float *)(param_1 + 0x364) * (1.0 - *(float *)(param_1 + 0x704)) +
             DAT_08abea0c * *(float *)(param_1 + 0x704);
        sVar11 = *(short *)(param_1 + 0x794);
      }
      else {
        sVar11 = *(short *)(param_1 + 0x794);
      }
    }
    else {
      sVar11 = *(short *)(param_1 + 0x794);
    }
    if ((sVar11 < 1) ||
       (iVar9 = *(short *)(param_1 + 0x798) + -1, *(short *)(param_1 + 0x798) = (short)iVar9,
       iVar9 * 0x10000 >> 0x10 < 0)) {
      iVar9 = _DONE_NotZero_DAT_08AC5874();
      if (iVar9 == 0) {
        cVar1 = *(char *)(param_1 + 0x700);
      }
      else {
        uVar8 = _DONE_Get_DAT_08AC5874();
        FUN_089c6588(uVar8,*(undefined4 *)(param_1 + 0x6f4));
        cVar1 = *(char *)(param_1 + 0x700);
      }
      *(undefined2 *)(param_1 + 0x798) = 0;
      if (cVar1 != '\0') {
        *(undefined *)(param_1 + 0x700) = 0;
      }
      sVar11 = *(short *)(param_1 + 0x794);
    }
    else {
      sVar11 = *(short *)(param_1 + 0x794);
    }
    *(short *)(param_1 + 0x794) = (short)(sVar11 + -1);
    if ((sVar11 + -1) * 0x10000 >> 0x10 < 1) {
      *(undefined *)(param_1 + 0x701) = 0;
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 0xd:
    if (DAT_08b00bd8._1_1_ == '\0') {
      *(undefined4 *)(param_1 + 0x60c) = 0;
      iVar9 = FUN_089edb80();
      *(undefined4 *)(iVar9 + 0x30) = 0;
      *(undefined4 *)(iVar9 + 0x34) = 0;
      *(undefined4 *)(iVar9 + 0x38) = 0;
      *(undefined4 *)(iVar9 + 0x3c) = 0;
      iVar9 = FUN_089edb80();
      *(undefined4 *)(iVar9 + 0x40) = 0;
      *(undefined4 *)(iVar9 + 0x44) = 0;
      *(undefined4 *)(iVar9 + 0x48) = 0;
      *(undefined4 *)(iVar9 + 0x4c) = 0x3f800000;
      uVar8 = FUN_089edb80();
      FUN_089edf24(uVar8,10);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    else {
      *(undefined2 *)(param_1 + 0x794) = 8;
      *(undefined4 *)(param_1 + 0x61c) = 0x13;
    }
    break;
  case 0xe:
    uVar8 = FUN_089edb80();
    iVar9 = FUN_089edf70(uVar8);
    if (iVar9 != 0) {
      if (*(char *)(DAT_08abf710 + 0x22) != '\0') {
        *(undefined *)(DAT_08abf710 + 0x22) = 0;
      }
      uVar8 = FUN_088e1948();
      FUN_088e1408(uVar8);
      FUN_088bf3e8(param_1,0);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 0xf:
    FUN_088c0cc4(param_1,0);
    iVar9 = 0;
    do {
      FUN_088bcf60(param_1 + 0x20);
      FUN_088bb320(param_1 + 0x20);
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x78);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 0x10:
    iVar9 = FUN_089edb80();
    *(undefined4 *)(iVar9 + 0x30) = 0;
    *(undefined4 *)(iVar9 + 0x34) = 0;
    *(undefined4 *)(iVar9 + 0x38) = 0;
    *(undefined4 *)(iVar9 + 0x3c) = 0x3f800000;
    iVar9 = FUN_089edb80();
    *(undefined4 *)(iVar9 + 0x40) = 0;
    *(undefined4 *)(iVar9 + 0x44) = 0;
    *(undefined4 *)(iVar9 + 0x48) = 0;
    *(undefined4 *)(iVar9 + 0x4c) = 0;
    uVar8 = FUN_089edb80();
    FUN_089edf24(uVar8,10);
    FUN_088b9f54(param_1 + 0x20,1,0);
    FUN_088b9d98(param_1 + 0x20);
    *(undefined *)(param_1 + 0x3d9) = 0;
    *(undefined4 *)(param_1 + 0x61c) = 1;
    break;
  case 0x11:
    uVar8 = FUN_089edb80();
    iVar9 = FUN_089edf70(uVar8);
    if (iVar9 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
    break;
  case 0x12:
    iVar9 = FUN_088e1948();
    if (*(int *)(iVar9 + 0x140) != 7) {
      FUN_088f491c(*(undefined4 *)(param_1 + 0x78c));
      FUN_088c1028(param_1,(int)*(short *)(param_1 + 0x796),0,0,0);
      FUN_088bf1e0(param_1);
      *(undefined4 *)(param_1 + 0x61c) = 5;
    }
    break;
  case 0x13:
    iVar9 = *(short *)(param_1 + 0x794) + -1;
    *(short *)(param_1 + 0x794) = (short)iVar9;
    if (iVar9 * 0x10000 >> 0x10 < 1) {
      FUN_088c46a0(param_1,1);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 0x14:
    iVar9 = FUN_088c46a0(param_1,0);
    if (iVar9 == 0) {
      if (*(char *)(param_1 + 0x79b) == -1) {
        iVar9 = *(int *)(param_1 + 0x61c);
      }
      else {
        FUN_088c1028(param_1,(int)*(short *)(param_1 + 0x796),0,
                     *(undefined *)((int)DAT_08abf710 + *(byte *)(param_1 + 0x79b) + 0xa9),0);
        iVar9 = *(int *)(param_1 + 0x61c);
      }
      *(int *)(param_1 + 0x61c) = iVar9 + 1;
    }
    break;
  case 0x15:
    iVar9 = FUN_088ef6c4(*(undefined4 *)(param_1 + 0x790));
    if (iVar9 == 0) {
      DAT_08b00bd8._1_1_ = DAT_08b00bd8._1_1_ + -1;
      piVar7 = (int *)_DONE_Get_DAT_08AAC9E0();
      *(char *)(*piVar7 + 0x410) = *(char *)(*piVar7 + 0x410) + -1;
      if (*(char *)(*piVar7 + 0x410) < '\0') {
        *(undefined *)(*piVar7 + 0x410) = 0;
      }
      iVar9 = FUN_088e1948();
      if (iVar9 == 0) {
        cVar1 = *(char *)(param_1 + 0x79b);
      }
      else {
        (**(code **)(*(int *)(iVar9 + 0x14) + 0x6c))
                  (iVar9 + *(short *)(*(int *)(iVar9 + 0x14) + 0x68));
        cVar1 = *(char *)(param_1 + 0x79b);
      }
      if ((cVar1 != -1) && (*(int *)(param_1 + 0x60c) != 0)) {
        FUN_088e5e6c();
      }
      iVar9 = _DONE_NotZero_DAT_08AAC9E0();
      if (iVar9 != 0) {
        FUN_088ea158(param_1 + 0x780);
      }
      FUN_088bf340(param_1,0);
      FUN_088bf180(param_1);
      FUN_088c0c4c(param_1,0);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 0x16:
    *(undefined4 *)(param_1 + 0x61c) = 2;
    break;
  case 0x17:
    iVar9 = FUN_088e1948();
    if (iVar9 == 0) {
      sVar11 = *(short *)(param_1 + 0x796);
    }
    else {
      if (*(int *)(iVar9 + 0x140) == 0xc) break;
      sVar11 = *(short *)(param_1 + 0x796);
    }
    FUN_088c1028(param_1,(int)sVar11,0,0,0);
    *(undefined4 *)(param_1 + 0x61c) = 5;
    break;
  case 0x18:
    iVar9 = FUN_089edb80();
    *(undefined4 *)(iVar9 + 0x10) = 0x469c4000;
    iVar9 = FUN_089edb80();
    iVar6 = FUN_089edb80();
    uVar8 = *(undefined4 *)(iVar6 + 0x24);
    uVar5 = *(undefined4 *)(iVar6 + 0x28);
    uVar3 = *(undefined4 *)(iVar6 + 0x2c);
    *(undefined4 *)(iVar9 + 0x30) = *(undefined4 *)(iVar6 + 0x20);
    *(undefined4 *)(iVar9 + 0x34) = uVar8;
    *(undefined4 *)(iVar9 + 0x38) = uVar5;
    *(undefined4 *)(iVar9 + 0x3c) = uVar3;
    iVar9 = FUN_089edb80();
    *(undefined4 *)(iVar9 + 0x40) = 0;
    *(undefined4 *)(iVar9 + 0x44) = 0;
    *(undefined4 *)(iVar9 + 0x48) = 0;
    *(undefined4 *)(iVar9 + 0x4c) = 0x3f800000;
    uVar8 = FUN_089edb80();
    FUN_089edf24(uVar8,0x14);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 0x19:
    uVar8 = FUN_089edb80();
    iVar9 = FUN_089edf70(uVar8);
    if (iVar9 != 0) {
      switch(*(undefined *)(param_1 + 0x79a)) {
      case 3:
        *(undefined4 *)(param_1 + 0x620) = 5;
        *(undefined4 *)(param_1 + 0x618) = 3;
        *(undefined4 *)(param_1 + 0x61c) = 0;
        break;
      case 10:
        *(undefined4 *)(DAT_08ac58c4 + 4) = 0x20;
        *(undefined4 *)(param_1 + 0x618) = 3;
        *(undefined4 *)(param_1 + 0x61c) = 0;
        break;
      case 0xc:
        *(uint *)(DAT_08ac58c4 + 4) = (uint)DAT_08b00bd4 * 4 + (uint)DAT_08b00bd6;
        *(undefined4 *)(param_1 + 0x618) = 3;
        *(undefined4 *)(param_1 + 0x61c) = 0;
        break;
      case 0xe:
        uVar8 = *(undefined4 *)(DAT_08ac58c4 + 4);
        *(undefined4 *)(param_1 + 0x620) = 2;
        uVar14 = *(uint *)(DAT_08ac58c4 + 4);
        if ((int)uVar14 < 0) {
          uVar15 = -(-uVar14 & 3) & 0xff;
        }
        else {
          uVar15 = uVar14 & 3;
        }
        FUN_089b1ec0(auStack_90,(int)(uVar14 + ((uint)((int)uVar14 >> 2) >> 0x1e)) >> 2 & 0xff,
                     uVar15);
        if ((local_8e == 1) || (iVar9 = FUN_089c9b48(0x1c,DAT_08ac58c8), iVar9 == 0)) {
          *(undefined4 *)(param_1 + 0x620) = 8;
        }
        FUN_089b1bd8();
        FUN_089b1c54(2,*(uint *)(DAT_08ac58c4 + 4) & 0xff);
        uVar5 = _DONE_Get_DAT_08AAC9E0();
        FUN_0880cd9c(uVar5,0x33,*(undefined4 *)(DAT_08ac58c4 + 4));
        uVar5 = _DONE_Get_DAT_08AAC9E0();
        FUN_0880cd9c(uVar5,0x2e,0);
        uVar5 = _DONE_Get_DAT_08AAC9E0();
        FUN_0880cd9c(uVar5,0x31,uVar8);
        if ((*(int *)(DAT_08ac58c4 + 4) == 0x25) &&
           (iVar9 = FUN_089c9b48(0x1d,DAT_08ac58c8), iVar9 != 0)) {
          *(undefined4 *)(DAT_08ac58c4 + 0x3c) = 0x11;
        }
        FUN_088c1e1c(param_1);
        *(undefined4 *)(param_1 + 0x618) = 3;
        *(undefined4 *)(param_1 + 0x61c) = 0;
        break;
      case 0x10:
        *(undefined4 *)(param_1 + 0x620) = 10;
        *(undefined4 *)(param_1 + 0x618) = 3;
        *(undefined4 *)(param_1 + 0x61c) = 0;
      }
    }
    break;
  case 0x1a:
    iVar9 = *(short *)(param_1 + 0x794) + -1;
    *(short *)(param_1 + 0x794) = (short)iVar9;
    if (iVar9 * 0x10000 >> 0x10 < 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 0x1b:
    FUN_088bf388(param_1);
    *(undefined4 *)(param_1 + 0x620) = 9;
    DAT_08abe906 = '\x01';
    *(undefined4 *)(param_1 + 0x618) = 3;
    *(undefined4 *)(param_1 + 0x61c) = 0;
    break;
  case 0x1c:
    FUN_089bf6e8(0x1fe,100);
    uVar8 = FUN_0880dd54();
    FUN_089b4c84(auStack_7c,"mes_MaruchoJet_%s.bin",uVar8);
    iVar9 = FUN_089be054(DAT_08ac520c,auStack_7c);
    FUN_088cc354(iVar9);
    FUN_0890e844(*(undefined4 *)(iVar9 + 8));
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 0x1d:
    iVar9 = FUN_089bf93c(0x1fe,1);
    if (iVar9 == 0) {
      iVar9 = FUN_0890e868();
      if (iVar9 == 1) {
        FUN_088bf388(param_1);
        iVar9 = FUN_089c9b48(0x18,DAT_08ac58c8);
        if (iVar9 != 0) {
          *(undefined4 *)(param_1 + 0x620) = 5;
        }
        iVar9 = 0x10;
        puVar16 = &DAT_08a91c80;
        do {
          iVar6 = FUN_089c9b48(*puVar16,DAT_08ac58c8);
          iVar9 = iVar9 + -1;
          if (iVar6 != 0) {
            *(undefined4 *)(DAT_08ac58c4 + 4) = puVar16[1];
            break;
          }
          puVar16 = puVar16 + -2;
        } while (-1 < iVar9);
        piVar7 = (int *)_DONE_Get_DAT_08AAC9E0();
        *(char *)(*piVar7 + 0x80) =
             (char)((int)(*(int *)(DAT_08ac58c4 + 4) +
                         ((uint)(*(int *)(DAT_08ac58c4 + 4) >> 2) >> 0x1e)) >> 2);
        piVar7 = (int *)_DONE_Get_DAT_08AAC9E0();
        bVar12 = (byte)*(int *)(DAT_08ac58c4 + 4);
        if (*(int *)(DAT_08ac58c4 + 4) < 0) {
          bVar12 = -(-bVar12 & 3);
        }
        else {
          bVar12 = bVar12 & 3;
        }
        *(byte *)(*piVar7 + 0x81) = bVar12;
        uVar8 = FUN_088cdc88(*(undefined4 *)(DAT_08ac58c4 + 4));
        *(undefined4 *)(DAT_08ac58c4 + 0x3c) = uVar8;
        iVar9 = FUN_088c1e50(param_1);
        if (iVar9 == 0) {
          DAT_08b00dd7 = 1;
        }
        else {
          FUN_088c1eb4(param_1);
        }
        FUN_088cf058();
        *(undefined4 *)(param_1 + 0x618) = 3;
        *(undefined4 *)(param_1 + 0x61c) = 0;
      }
      else {
        FUN_088b9f54(param_1 + 0x20,0,0);
        FUN_088f48c8(*(undefined4 *)(param_1 + 0x78c));
        *(undefined4 *)(param_1 + 0x61c) = 2;
      }
    }
    break;
  case 0x1e:
    if (*(char *)(param_1 + 0x6c0) != '\0') {
      FUN_088c1028(param_1,(int)*(short *)(param_1 + 0x796),0,0,0);
      *(undefined4 *)(param_1 + 0x61c) = 5;
    }
    break;
  case 0x1f:
    uVar8 = _DONE_Get_DAT_08AAC9E0();
    iVar9 = FUN_0880d7e0(uVar8,0x20000000);
    if (iVar9 != 0) {
      *(undefined4 *)(param_1 + 0x61c) = 0x20;
    }
    break;
  case 0x20:
LAB_088c5dc0:
    switch(DAT_08b00dc4) {
    case 0:
      FUN_088bf340(param_1,0);
      if (*(char *)(param_1 + 0x6ac) == '\0') {
        FUN_088bf180(param_1);
      }
      *(undefined4 *)(param_1 + 0x61c) = 2;
      break;
    case 1:
      DAT_08b00dd7 = 2;
      FUN_088bf3bc(param_1);
      *(undefined4 *)(param_1 + 0x61c) = 0x18;
      break;
    case 2:
      *(undefined *)(param_1 + 0x79a) = 10;
      *(undefined4 *)(param_1 + 0x61c) = 0x18;
      break;
    case 3:
      DAT_08b00dd7 = 1;
      *(undefined *)(param_1 + 0x79a) = 10;
      *(undefined4 *)(param_1 + 0x61c) = 0x18;
      break;
    case 4:
      *(undefined *)(param_1 + 0x79a) = 3;
      *(undefined4 *)(param_1 + 0x61c) = 0x18;
      break;
    case 5:
      DAT_08b00dd7 = 1;
      *(undefined *)(param_1 + 0x79a) = 0xc;
      *(undefined4 *)(param_1 + 0x61c) = 0x18;
      break;
    case 6:
      DAT_08b00dd7 = 1;
      *(undefined *)(param_1 + 0x79a) = 0x10;
      *(undefined4 *)(param_1 + 0x61c) = 0x18;
    }
    break;
  case 0x21:
    iVar9 = FUN_088e1948();
    if (*(int *)(iVar9 + 0x140) != 0xb) {
      *(undefined4 *)(param_1 + 0x61c) = 2;
    }
  }
  iVar9 = _DONE_NotZero_DAT_08AAC9E0();
  if (iVar9 != 0) {
    FUN_088ea348(param_1 + 0x780);
  }
  FUN_088c242c(param_1);
  return;
}

