#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889e9c0(int param_1,undefined4 param_2)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 in_V04;
  undefined4 in_V08;
  undefined4 in_V0C;
  undefined auStack_90 [84];
  undefined4 local_3c;
  int local_38;
  
  DAT_08abd488 = param_1;
  FUN_0889d2f8(param_1);
  puVar8 = &DAT_08abd4a0;
  iVar7 = 0;
  do {
    *puVar8 = 0;
    iVar7 = iVar7 + 1;
    puVar8 = puVar8 + 1;
  } while (iVar7 < 3);
  DAT_08abd4c0 = 0;
  DAT_08ac5c74 = (undefined4 *)(&DAT_08a81c38 + param_1 * 0xc);
  uVar9 = vuc2i_s(*DAT_08ac5c74);
  auVar1._12_4_ = in_V0C;
  auVar1._8_4_ = in_V08;
  auVar1._4_4_ = in_V04;
  auVar1._0_4_ = uVar9;
  auVar1 = vi2f_q(auVar1,0x1f);
  DAT_08b00960 = auVar1._0_4_;
  DAT_08b00964 = auVar1._4_4_;
  DAT_08b00968 = auVar1._8_4_;
  DAT_08b0096c = auVar1._12_4_;
  puVar8 = DAT_08ac5934;
  local_3c = param_2;
  local_38 = param_1;
  puVar3 = (undefined4 *)FUN_0889e948();
  uVar9 = puVar3[1];
  uVar5 = puVar3[2];
  uVar2 = puVar3[3];
  *puVar8 = *puVar3;
  puVar8[1] = uVar9;
  puVar8[2] = uVar5;
  puVar8[3] = uVar2;
  iVar7 = FUN_0889c9d8(PTR_s_battle_map_gmo_08abd3b0,&DAT_08b007d0,param_2,1);
  FUN_08a15924(*(undefined4 *)(iVar7 + 0x130),0x100,0xffffffff);
  DAT_08abd4a0 = iVar7;
  FUN_0889cbd0(iVar7);
  FUN_0889d514(iVar7);
  iVar7 = FUN_0889da6c();
  if (iVar7 == 0) {
    FUN_08804000(0xffffffff);
  }
  else {
    FUN_08804000(0x80c0a0a0);
  }
  pfVar4 = (float *)FUN_0889d4e4(0xffffffff);
  DAT_08b00850 = -*pfVar4;
  DAT_08b00854 = -pfVar4[1];
  DAT_08b00858 = -pfVar4[2];
  uVar9 = 0;
  DAT_08b0085c = 0;
  iVar7 = FUN_0889d4e4(0xffffffff);
  DAT_08b00980 = -*(float *)(iVar7 + 0x18);
  DAT_08b00984 = -*(float *)(iVar7 + 0x1c);
  DAT_08b00988 = -*(float *)(iVar7 + 0x20);
  DAT_08b0098c = uVar9;
  iVar7 = FUN_0889d4e4(0xffffffff);
  DAT_08b00990 = *(undefined4 *)(iVar7 + 0xc);
  DAT_08b00994 = *(undefined4 *)(iVar7 + 0x10);
  DAT_08b00998 = *(undefined4 *)(iVar7 + 0x14);
  uVar9 = 0x3f800000;
  DAT_08b0099c = 0x3f800000;
  iVar7 = FUN_0889d4e4(0xffffffff);
  DAT_08b009a0 = *(undefined4 *)(iVar7 + 0x24);
  DAT_08b009a4 = *(undefined4 *)(iVar7 + 0x28);
  DAT_08b009a8 = *(undefined4 *)(iVar7 + 0x2c);
  DAT_08b009ac = uVar9;
  iVar7 = FUN_0889d4e4(0xffffffff);
  DAT_08b009b0 = *(undefined4 *)(iVar7 + 0x30);
  DAT_08b009b4 = *(undefined4 *)(iVar7 + 0x34);
  DAT_08b009b8 = *(undefined4 *)(iVar7 + 0x38);
  DAT_08b009bc = uVar9;
  iVar7 = FUN_089be148(DAT_08ac520c,PTR_s_battle_subset_1_gmo_08abd3b4);
  if (iVar7 != 0) {
    uVar9 = FUN_0889c9d8(PTR_s_battle_subset_1_gmo_08abd3b4,&DAT_08b007d0,local_3c,1);
    DAT_08abd4a4 = uVar9;
    FUN_0889cbd0(uVar9);
    FUN_0889d514(uVar9);
  }
  iVar7 = FUN_089be148(DAT_08ac520c,PTR_s_battle_subset_2_gmo_08abd3b8);
  uVar9 = local_3c;
  if (iVar7 != 0) {
    uVar5 = FUN_0889c9d8(PTR_s_battle_subset_2_gmo_08abd3b8,&DAT_08b007d0,local_3c,1);
    DAT_08abd4a8 = uVar5;
    FUN_0889cbd0(uVar5);
    FUN_0889d514(uVar5);
  }
  iVar7 = DAT_08abd488 * 0x10;
  DAT_08b00970 = *(undefined4 *)(&DAT_08abd130 + iVar7);
  DAT_08b00974 = *(undefined4 *)(&DAT_08abd134 + iVar7);
  DAT_08b00978 = *(undefined4 *)(&DAT_08abd138 + iVar7);
  DAT_08b0097c = *(undefined4 *)(&DAT_08abd13c + iVar7);
  FUN_0889cb00("battle_map.ctc");
  DAT_08aba7a8 = uVar9;
  FUN_0889d3ac();
  FUN_0889d800();
  FUN_0889e418();
  DAT_08abd4c8 = 0;
  uVar9 = FUN_0880cc48();
  FUN_0880cd9c(uVar9,10,0);
  uVar9 = FUN_0880cc48();
  FUN_0880cd9c(uVar9,0x1c,0);
  if ((local_38 < 0x29) && (*(int *)(DAT_08ac58c4 + 0x20) == 1)) {
    iVar7 = *(int *)(DAT_08ac58c4 + 0x24);
    FUN_089b4c84(auStack_90,"battle/%s/event_battle_%06d.script",
                 (&PTR_s_F0Japan_08abd4e4)[iVar7 / 100000],iVar7);
    DAT_08abd4dc = FUN_089cb9cc(auStack_90);
    iVar7 = (iVar7 / 100) % 10;
    if (iVar7 < 2) {
      if (0 < iVar7) {
        uVar9 = FUN_0880cc48();
        FUN_0880cd9c(uVar9,10,1);
      }
    }
    else if (iVar7 < 3) {
      uVar9 = FUN_0880cc48();
      FUN_0880cd9c(uVar9,10,2);
    }
  }
  FUN_0889df44();
  DAT_08abd4d8 = 0;
  DAT_08abd4d4 = 0;
  iVar7 = FUN_0889dad8();
  if (iVar7 == 0) {
    FUN_0889ddac(DAT_08abd488);
  }
  iVar7 = FUN_0889daa8();
  if (((iVar7 == 0) && (iVar7 = FUN_0889dad8(), iVar7 == 0)) && (iVar7 = FUN_0889da6c(), iVar7 == 0)
     ) {
    iVar7 = FUN_089bf6e8(0x1e2,100);
    iVar6 = FUN_0884b268();
    *(undefined4 *)(iVar7 + 0x20) = *(undefined4 *)(iVar6 + 0x430);
  }
  FUN_0889e908(DAT_08abd4c0);
  return;
}

