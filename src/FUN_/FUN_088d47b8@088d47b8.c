#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d47b8(int param_1,undefined4 param_2)

{
  undefined auVar1 [16];
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 in_V04;
  undefined4 in_V08;
  undefined4 in_V0C;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  DAT_08abef9c = param_1;
  FUN_088d3e6c();
  puVar6 = &DAT_08abf040;
  iVar5 = 0;
  do {
    *puVar6 = 0;
    puVar2 = DAT_08ac5934;
    iVar5 = iVar5 + 1;
    puVar6 = puVar6 + 1;
  } while (iVar5 < 2);
  DAT_08abefbc = 0;
  DAT_08ac5c74 = (undefined4 *)(&DAT_08a95840 + param_1 * 0xc);
  uVar7 = vuc2i_s(*DAT_08ac5c74);
  auVar1._12_4_ = in_V0C;
  auVar1._8_4_ = in_V08;
  auVar1._4_4_ = in_V04;
  auVar1._0_4_ = uVar7;
  auVar1 = vi2f_q(auVar1,0x1f);
  DAT_08b00fa0 = auVar1._0_4_;
  DAT_08b00fa4 = auVar1._4_4_;
  DAT_08b00fa8 = auVar1._8_4_;
  DAT_08b00fac = auVar1._12_4_;
  *DAT_08ac5934 = DAT_08b00fa0;
  puVar2[1] = auVar1._4_4_;
  puVar2[2] = auVar1._8_4_;
  puVar2[3] = auVar1._12_4_;
  if (DAT_08abef9c == 0x20) {
    iVar5 = 0x10;
    uVar7 = 0xffffffff;
    puVar6 = &DAT_08a91c80;
    do {
      iVar3 = FUN_089c9b48(*puVar6,DAT_08ac58c8);
      iVar5 = iVar5 + -1;
      if (iVar3 != 0) {
        uVar7 = puVar6[1];
        break;
      }
      puVar6 = puVar6 + -2;
    } while (-1 < iVar5);
    iVar5 = -1;
    switch(uVar7) {
    case 0:
      iVar5 = 0;
      break;
    case 1:
      iVar5 = 1;
      break;
    case 2:
      iVar5 = 1;
      break;
    case 3:
    case 7:
    case 0xb:
    case 0xf:
    case 0x13:
    case 0x15:
    case 0x16:
    case 0x17:
      iVar5 = -1;
      break;
    case 4:
      iVar5 = 2;
      break;
    case 5:
      iVar5 = 2;
      break;
    case 6:
      iVar5 = 2;
      break;
    case 8:
      iVar5 = 3;
      break;
    case 9:
      iVar5 = 3;
      break;
    case 10:
      iVar5 = 4;
      break;
    case 0xc:
      iVar5 = 5;
      break;
    case 0xd:
      iVar5 = 6;
      break;
    case 0xe:
      iVar5 = 5;
      break;
    case 0x10:
      iVar5 = 7;
      break;
    case 0x11:
      iVar5 = 7;
      break;
    case 0x12:
      iVar5 = 8;
      break;
    case 0x14:
      iVar5 = 4;
      break;
    case 0x18:
      iVar5 = 4;
    }
    if (-1 < iVar5) {
      DAT_08abf044 = FUN_088d3b9c((&PTR_s_menu_cabin_bg_f0_00_gmo_08abef78)[iVar5],
                                  &DAT_08abeca0 + DAT_08abef9c * 0x10,param_2,1);
      *(undefined *)(DAT_08abf044 + 0xbc) = 0;
    }
  }
  iVar5 = FUN_088d3b9c(PTR_s_adventure_map_gmo_08abef70,&DAT_08abeca0 + DAT_08abef9c * 0x10,param_2,
                       1);
  FUN_08a15924(*(undefined4 *)(iVar5 + 0x130),0x100,0xffffffff);
  DAT_08abf040 = iVar5;
  FUN_089e0af0(iVar5,"f3_quest_wall_re05_comp",&LAB_088d3dac,0);
  iVar3 = FUN_089ded60(iVar5,"locator1");
  if (iVar3 != 0) {
    DAT_08b00fb0 = **(float **)(iVar3 + 0x38) * 0.1;
    DAT_08b00fb4 = *(float *)(*(int *)(iVar3 + 0x38) + 4) * 0.1;
    DAT_08b00fb8 = *(float *)(*(int *)(iVar3 + 0x38) + 8) * 0.1;
  }
  FUN_088d40c0(iVar5);
  iVar5 = FUN_089be148(DAT_08ac520c,PTR_s_adventure_subset_1_gmo_08abef74);
  if (iVar5 != 0) {
    iVar5 = FUN_088d3b9c(PTR_s_adventure_subset_1_gmo_08abef74,&DAT_08b007d0,param_2,1);
    FUN_088d40c0(iVar5);
    DAT_08abf044 = iVar5;
  }
  pfVar4 = (float *)FUN_088d4090(0xffffffff);
  DAT_08b00850 = -*pfVar4;
  DAT_08b00854 = -pfVar4[1];
  DAT_08b00858 = -pfVar4[2];
  uVar7 = 0;
  DAT_08b0085c = 0;
  iVar5 = FUN_088d4090(0xffffffff);
  DAT_08b00980 = -*(float *)(iVar5 + 0x18);
  DAT_08b00984 = -*(float *)(iVar5 + 0x1c);
  DAT_08b00988 = -*(float *)(iVar5 + 0x20);
  DAT_08b0098c = uVar7;
  iVar5 = FUN_088d4090(0xffffffff);
  DAT_08b00990 = *(undefined4 *)(iVar5 + 0xc);
  DAT_08b00994 = *(undefined4 *)(iVar5 + 0x10);
  DAT_08b00998 = *(undefined4 *)(iVar5 + 0x14);
  uVar7 = 0x3f800000;
  DAT_08b0099c = 0x3f800000;
  iVar5 = FUN_088d4090(0xffffffff);
  DAT_08b009a0 = *(undefined4 *)(iVar5 + 0x24);
  DAT_08b009a4 = *(undefined4 *)(iVar5 + 0x28);
  DAT_08b009a8 = *(undefined4 *)(iVar5 + 0x2c);
  DAT_08b009ac = uVar7;
  iVar5 = FUN_088d4090(0xffffffff);
  DAT_08b009b0 = *(undefined4 *)(iVar5 + 0x30);
  DAT_08b009b4 = *(undefined4 *)(iVar5 + 0x34);
  DAT_08b009b8 = *(undefined4 *)(iVar5 + 0x38);
  DAT_08b009bc = uVar7;
  DAT_08b00fb0 = (float)in_V72;
  DAT_08b00fb4 = (float)in_V76;
  DAT_08b00fb8 = (float)in_V7A;
  DAT_08b00fbc = in_V7E;
  FUN_088d3cec("adventure_map.ctc");
  DAT_08aba7a8 = param_2;
  FUN_088d3fd8();
  FUN_088d4200();
  iVar5 = FUN_0889dad8();
  if (iVar5 == 0) {
    FUN_088d4304(DAT_08abef9c);
  }
  DAT_08abd488 = param_1;
  iVar5 = FUN_0889da6c();
  if ((iVar5 == 0) && (iVar5 = FUN_0889daa8(), iVar5 == 0)) {
    iVar5 = FUN_089bf6e8(0x1e2,100);
    iVar3 = FUN_088be274();
    *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar3 + 0x5f4);
  }
  FUN_088d4778(DAT_08abefbc);
  return;
}

