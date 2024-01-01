#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Switch with 1 destination removed at 0x088c580c : 12 cases all go to same destination

void FUN_088c4ff4(int param_1)

{
  undefined auVar1 [16];
  undefined auVar2 [16];
  undefined auVar3 [16];
  undefined auVar4 [64];
  undefined auVar5 [16];
  int iVar6;
  int iVar7;
  int iVar8;
  undefined (*pauVar9) [64];
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 in_V7C;
  undefined auStack_b0 [64];
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  
  switch(*(undefined4 *)(param_1 + 0x61c)) {
  case 0:
    iVar8 = FUN_0890ad3c();
    if (iVar8 == 0) {
      FUN_0890ad0c();
      iVar8 = FUN_089edb80();
      *(undefined4 *)(iVar8 + 0x10) = 0x469c4000;
      iVar8 = FUN_089edb80();
      *(undefined4 *)(iVar8 + 0x30) = 0;
      *(undefined4 *)(iVar8 + 0x34) = 0;
      *(undefined4 *)(iVar8 + 0x38) = 0;
      *(undefined4 *)(iVar8 + 0x3c) = 0x3f800000;
      iVar8 = FUN_089edb80();
      *(undefined4 *)(iVar8 + 0x40) = 0;
      *(undefined4 *)(iVar8 + 0x44) = 0;
      *(undefined4 *)(iVar8 + 0x48) = 0;
      *(undefined4 *)(iVar8 + 0x4c) = 0;
      uVar10 = FUN_089edb80();
      FUN_089edf24(uVar10,0x14);
    }
    *(undefined4 *)(param_1 + 0x61c) = 3;
    break;
  case 1:
  case 2:
  default:
    *(undefined4 *)(DAT_08ac5934 + 0x1c) = 1;
    *(undefined4 *)(param_1 + 0x618) = 1;
    *(undefined4 *)(param_1 + 0x61c) = 0;
    break;
  case 3:
    if (*(int *)(param_1 + 0x10) == 0) {
      local_40 = 0;
      FUN_089d8634();
      uVar10 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar13 = FUN_089d7d74(0x44,0,0);
      FUN_089d816c(uVar10);
      FUN_089d866c();
      iVar8 = local_40;
      if (iVar13 != 0) {
        FUN_089bd9b4(iVar13);
        iVar8 = iVar13;
      }
      *(int *)(param_1 + 0x10) = iVar8;
    }
    uVar12 = *(undefined4 *)(param_1 + 0x10);
    uVar10 = FUN_088d3ed8(*(undefined4 *)(DAT_08ac58c4 + 4));
    iVar8 = FUN_089bda88(uVar12,uVar10,10,1,0);
    if (iVar8 != 0) {
      DAT_08ac6164 = 1;
      iVar8 = FUN_089bdb90(*(undefined4 *)(param_1 + 0x10),1);
      if (iVar8 != 0) {
        *(undefined4 *)(param_1 + 0x61c) = 4;
      }
    }
    break;
  case 4:
    iVar8 = FUN_089bfa40(0x2774);
    iVar8 = (**(code **)(*(int *)(iVar8 + 0xc) + 0x34))
                      (iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 0x30),3);
    uVar10 = FUN_089edb80();
    iVar13 = FUN_089edf70(uVar10);
    if ((iVar13 != 0) && (iVar8 == 3)) {
      iVar8 = FUN_089edb80();
      *(undefined4 *)(iVar8 + 0x10) = 0x469c4000;
      iVar8 = FUN_089edb80();
      *(undefined4 *)(iVar8 + 0x30) = 0;
      *(undefined4 *)(iVar8 + 0x34) = 0;
      *(undefined4 *)(iVar8 + 0x38) = 0;
      *(undefined4 *)(iVar8 + 0x3c) = 0;
      iVar8 = FUN_089edb80();
      *(undefined4 *)(iVar8 + 0x40) = 0;
      *(undefined4 *)(iVar8 + 0x44) = 0;
      *(undefined4 *)(iVar8 + 0x48) = 0;
      *(undefined4 *)(iVar8 + 0x4c) = 0x3f800000;
      uVar10 = FUN_089edb80();
      FUN_089edf24(uVar10,0x14);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 5:
    uVar10 = FUN_089edb80();
    iVar8 = FUN_089edf70(uVar10);
    if (iVar8 != 0) {
      *(undefined *)(param_1 + 0x6a0) = 1;
      DAT_08ac6164 = 0;
      FUN_088d47b8(*(undefined4 *)(DAT_08ac58c4 + 4),param_1 + 0x640);
      FUN_08828ad0();
      FUN_08825580();
      FUN_088660a8(param_1 + 0x634);
      uVar10 = FUN_089be054(DAT_08ac520c,"particle_02.ptb");
      FUN_088bec04(param_1,uVar10);
      local_44 = 0;
      FUN_089d8634();
      uVar10 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar13 = FUN_089d7d74(4,0,0);
      FUN_089d816c(uVar10);
      FUN_089d866c();
      iVar8 = local_44;
      if (iVar13 != 0) {
        FUN_088c70a8(iVar13);
        iVar8 = iVar13;
      }
      *(int *)(param_1 + 0x610) = iVar8;
      if (*(int *)(DAT_08ac58c4 + 4) == 1) {
        uVar10 = FUN_089be054(DAT_08ac520c,"particle_01.ptb");
        FUN_088bece0(param_1,uVar10);
      }
      if (0x1f < DAT_08abef9c && DAT_08abef9c < 0x24) {
        local_48 = 0;
        FUN_089d8634();
        uVar10 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar13 = FUN_089d7d74(0x550,0,0);
        FUN_089d816c(uVar10);
        FUN_089d866c();
        iVar8 = local_48;
        if (iVar13 != 0) {
          FUN_089d8634();
          uVar10 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar6 = FUN_089d7d74(0x140,0,0);
          FUN_089d816c(uVar10);
          FUN_089d866c();
          iVar8 = 0;
          if (iVar6 != 0) {
            FUN_089de2e4(iVar6,"menu_worldmap.gmo",0);
            iVar8 = iVar6;
          }
          local_4c = 0;
          FUN_089d8634();
          uVar10 = FUN_089d81a4();
          FUN_089d816c(1);
          iVar7 = FUN_089d7d74(0x2a0,0,0);
          FUN_089d816c(uVar10);
          FUN_089d866c();
          iVar6 = local_4c;
          if (iVar7 != 0) {
            FUN_089e2910(iVar7);
            iVar6 = iVar7;
          }
          FUN_0882ab60(iVar13,iVar8,iVar6,0xffffffff);
          iVar8 = iVar13;
        }
        *(int *)(param_1 + 0x6c8) = iVar8;
        iVar8 = *(int *)(iVar8 + 0x520);
        *(undefined *)(iVar8 + 0xbc) = 1;
        local_70 = 0x3ecccccd;
        local_6c = 0x3ecccccd;
        local_68 = 0x3ecccccd;
        local_64 = 0x3f800000;
        FUN_089e0344(0x40e00000,iVar8,&local_70,0);
        *(undefined4 *)(iVar8 + 0x60) = 0;
        *(undefined4 *)(iVar8 + 100) = 0;
        *(undefined4 *)(iVar8 + 0x68) = 0;
        *(undefined4 *)(iVar8 + 0x6c) = 0x3f800000;
        FUN_089e02cc(iVar8,"psp_line__BA",&LAB_088bdf14,iVar8 + 0x80);
        iVar8 = FUN_089df79c(iVar8,"psp_line__BA");
        *(byte *)(iVar8 + 4) = *(byte *)(iVar8 + 4) & 0xf3 | 8;
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c8) + 0x528) + 0x40) = 0x3f000000;
        iVar8 = *(int *)(*(int *)(param_1 + 0x6c8) + 0x528);
        *(undefined4 *)(iVar8 + 0x50) = 0;
        *(undefined4 *)(iVar8 + 0x54) = 0x42480000;
        *(undefined4 *)(iVar8 + 0x58) = 0xc2a00000;
        *(undefined4 *)(iVar8 + 0x5c) = 0;
        FUN_089e2b14(*(undefined4 *)(*(int *)(param_1 + 0x6c8) + 0x528),0xffffffff);
        iVar8 = *(int *)(*(int *)(param_1 + 0x6c8) + 0x528);
        local_60 = 0x3f800000;
        local_5c = 0x3f147ae1;
        local_58 = 0x3f800000;
        local_54 = 0;
        auVar1 = vscl_q(*(undefined (*) [16])(iVar8 + 0xd0),0x3f800000);
        auVar2 = vscl_q(*(undefined (*) [16])(iVar8 + 0xe0),0x3f147ae1);
        auVar3 = vscl_q(*(undefined (*) [16])(iVar8 + 0xf0),0x3f800000);
        *(int *)*(undefined (*) [16])(iVar8 + 0xd0) = auVar1._0_4_;
        *(int *)(iVar8 + 0xd4) = auVar1._4_4_;
        *(int *)(iVar8 + 0xd8) = auVar1._8_4_;
        *(int *)(iVar8 + 0xdc) = auVar1._12_4_;
        *(int *)(iVar8 + 0xe0) = auVar2._0_4_;
        *(int *)(iVar8 + 0xe4) = auVar2._4_4_;
        *(int *)(iVar8 + 0xe8) = auVar2._8_4_;
        *(int *)(iVar8 + 0xec) = auVar2._12_4_;
        *(int *)(iVar8 + 0xf0) = auVar3._0_4_;
        *(int *)(iVar8 + 0xf4) = auVar3._4_4_;
        *(int *)(iVar8 + 0xf8) = auVar3._8_4_;
        *(int *)(iVar8 + 0xfc) = auVar3._12_4_;
        iVar8 = FUN_089f5734(*(undefined4 *)(param_1 + 0x5f8),
                             *(undefined4 *)(*(int *)(param_1 + 0x6c8) + 0x524));
        pauVar9 = (undefined (*) [64])(iVar8 + 0x20);
        auVar4 = vmidt_q();
        *(int *)*pauVar9 = auVar4._0_4_;
        *(int *)(iVar8 + 0x24) = auVar4._16_4_;
        *(int *)(iVar8 + 0x28) = auVar4._32_4_;
        *(int *)(iVar8 + 0x2c) = auVar4._48_4_;
        *(int *)(iVar8 + 0x30) = auVar4._4_4_;
        *(int *)(iVar8 + 0x34) = auVar4._20_4_;
        *(int *)(iVar8 + 0x38) = auVar4._36_4_;
        *(int *)(iVar8 + 0x3c) = auVar4._52_4_;
        *(int *)(iVar8 + 0x40) = auVar4._8_4_;
        *(int *)(iVar8 + 0x44) = auVar4._24_4_;
        *(int *)(iVar8 + 0x48) = auVar4._40_4_;
        *(int *)(iVar8 + 0x4c) = auVar4._56_4_;
        *(int *)(iVar8 + 0x50) = auVar4._12_4_;
        *(int *)(iVar8 + 0x54) = auVar4._28_4_;
        *(int *)(iVar8 + 0x58) = auVar4._44_4_;
        *(int *)(iVar8 + 0x5c) = auVar4._60_4_;
        *(undefined4 *)(iVar8 + 0xe0) = 1;
        *(undefined4 *)(iVar8 + 0xdc) = 2;
        *(undefined4 *)(iVar8 + 0x20) = 0xc1400000;
        *(undefined4 *)(iVar8 + 0x34) = 0xc1400000;
        *(undefined4 *)(iVar8 + 0x48) = 0x3f800000;
        uVar10 = vmul_s(0x3fc90fdb,in_V7C);
        auVar3 = vrot_q(uVar10,1,0,3,0);
        auVar1 = vidt_q();
        auVar5 = vrot_q(uVar10,2,0,1,0);
        auVar2 = vidt_q();
        auVar4._48_16_ = auVar2;
        auVar4._44_4_ = auVar5._12_4_;
        auVar4._40_4_ = auVar5._8_4_;
        auVar4._36_4_ = auVar5._4_4_;
        auVar4._32_4_ = auVar5._0_4_;
        auVar4._28_4_ = auVar1._12_4_;
        auVar4._24_4_ = auVar1._8_4_;
        auVar4._20_4_ = auVar1._4_4_;
        auVar4._16_4_ = auVar1._0_4_;
        auVar4._12_4_ = auVar3._12_4_;
        auVar4._8_4_ = auVar3._8_4_;
        auVar4._4_4_ = auVar3._4_4_;
        auVar4._0_4_ = auVar3._0_4_;
        auVar4 = vmmul_q(*pauVar9,auVar4);
        *(int *)*pauVar9 = auVar4._0_4_;
        *(int *)(iVar8 + 0x24) = auVar4._4_4_;
        *(int *)(iVar8 + 0x28) = auVar4._8_4_;
        *(int *)(iVar8 + 0x2c) = auVar4._12_4_;
        *(int *)(iVar8 + 0x30) = auVar4._16_4_;
        *(int *)(iVar8 + 0x34) = auVar4._20_4_;
        *(int *)(iVar8 + 0x38) = auVar4._24_4_;
        *(int *)(iVar8 + 0x3c) = auVar4._28_4_;
        *(int *)(iVar8 + 0x40) = auVar4._32_4_;
        *(int *)(iVar8 + 0x44) = auVar4._36_4_;
        *(int *)(iVar8 + 0x48) = auVar4._40_4_;
        *(int *)(iVar8 + 0x4c) = auVar4._44_4_;
        *(int *)(iVar8 + 0x50) = auVar4._48_4_;
        *(int *)(iVar8 + 0x54) = auVar4._52_4_;
        *(int *)(iVar8 + 0x58) = auVar4._56_4_;
        *(int *)(iVar8 + 0x5c) = auVar4._60_4_;
        *(undefined4 *)(iVar8 + 0x60) = 0x429f0000;
        *(undefined4 *)(iVar8 + 100) = 0x41c40000;
        *(undefined4 *)(iVar8 + 0x68) = 0x40accccd;
        *(undefined4 *)(iVar8 + 0x6c) = 0;
        *(undefined4 *)(iVar8 + 0xbc) = 0x3f333333;
        iVar8 = DAT_08abf040;
        FUN_089e02cc(DAT_08abf040,"tv_img_02",&LAB_088bdf40,DAT_08abf040 + 0x80);
        FUN_089e02cc(iVar8,"tv_img_03",&LAB_088bdf40,iVar8 + 0x84);
      }
      FUN_08866394(0x1b);
      FUN_089b4c84(auStack_b0,"f%d.eset",DAT_08b00bd4);
      uVar10 = FUN_089be054(DAT_08ac520c,auStack_b0);
      *(undefined4 *)(param_1 + 0x6c4) = uVar10;
      FUN_088bf690(param_1,DAT_08b00bd4,DAT_08b00bd6);
      FUN_088dfa1c(param_1 + 0x628);
      FUN_088a91d4();
      FUN_088b8cd4(param_1 + 0x64c);
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      local_50 = 0;
      FUN_089d8634();
      uVar10 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar13 = FUN_089d7d74(0xd8,0,0);
      FUN_089d816c(uVar10);
      FUN_089d866c();
      iVar8 = local_50;
      if (iVar13 != 0) {
        FUN_088f3ff0(iVar13);
        iVar8 = iVar13;
      }
      *(int *)(param_1 + 0x78c) = iVar8;
      FUN_088f4668(iVar8,DAT_08b00bd4,DAT_08b00bd6,0);
      FUN_088e1948();
    }
    break;
  case 6:
    iVar13 = param_1 + 0x20;
    uVar10 = FUN_088e1948();
    FUN_088b9ea4(iVar13,uVar10);
    DAT_08ac5c90 = iVar13;
    FUN_088bcd18(iVar13);
    iVar8 = FUN_088e1948();
    if (iVar8 != 0) {
      *(int *)(iVar8 + 0x314) = iVar13;
    }
    FUN_088a9578();
    iVar8 = FUN_088e1948();
    (**(code **)(*(int *)(iVar8 + 0x14) + 0x3c))(iVar8 + *(short *)(*(int *)(iVar8 + 0x14) + 0x38));
    FUN_088b9f54(iVar13,1,0);
    FUN_088b9d98(iVar13);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 7:
    iVar8 = FUN_089bfa40(0x2774);
    if (iVar8 == 0) {
      iVar8 = *(int *)(param_1 + 0x61c);
    }
    else {
      (**(code **)(*(int *)(iVar8 + 0xc) + 0x2c))
                (iVar8 + *(short *)(*(int *)(iVar8 + 0xc) + 0x28),3,4);
      iVar8 = *(int *)(param_1 + 0x61c);
    }
    *(int *)(param_1 + 0x61c) = iVar8 + 1;
  case 8:
    iVar8 = FUN_0890ad3c();
    if (iVar8 == 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 9:
    iVar8 = FUN_089c59d4();
    if (iVar8 == 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    else {
      uVar10 = FUN_089c59f0();
      iVar8 = FUN_089c5f18(uVar10,0xffffffff);
      if (iVar8 != 0) {
        *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
      }
    }
    break;
  case 10:
    uVar10 = FUN_089bf6e8(0x1d6,100);
    *(undefined4 *)(param_1 + 0x790) = uVar10;
    FUN_088efd08(uVar10,0,0,0,&DAT_08b00bb0,0,DAT_08b00bd4,DAT_08b00bd6);
    *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    break;
  case 0xb:
    uVar10 = 0x6d;
    uVar11 = 0;
    iVar8 = 0;
    do {
      iVar8 = uVar11 + iVar8;
      if (*(int *)(DAT_08ac58c4 + 4) == (&DAT_08a92de0)[iVar8]) {
        uVar10 = (&DAT_08a92de4)[iVar8];
        *(undefined4 *)(param_1 + 0x6ec) = (&DAT_08a92de8)[iVar8];
        break;
      }
      uVar11 = (int)((uVar11 + 1) * 0x10000) >> 0x10;
      iVar8 = uVar11 * 2;
    } while (uVar11 < 0xb);
    iVar8 = FUN_089c2e90(uVar10);
    if (iVar8 == 0) {
      iVar8 = FUN_089c2f78();
      if (iVar8 == 0) {
        FUN_089c2ef0();
      }
    }
    else {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
    break;
  case 0xc:
    iVar8 = FUN_089c2f34();
    if (iVar8 != 0) {
      *(int *)(param_1 + 0x61c) = *(int *)(param_1 + 0x61c) + 1;
    }
  }
  return;
}

