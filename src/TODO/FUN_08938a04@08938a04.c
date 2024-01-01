#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08938a04(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined local_1c0;
  undefined auStack_1bf [63];
  undefined *local_180 [4];
  undefined *local_170;
  undefined *local_16c;
  undefined *local_168;
  undefined *local_164;
  undefined *local_160;
  undefined *local_15c;
  undefined *local_158;
  undefined *local_154;
  undefined local_150;
  undefined auStack_14f [63];
  undefined4 auStack_110 [20];
  undefined4 local_c0;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  memset_jak((undefined *)(param_1 + 0x74),0,0x578);
  FUN_0881a0c4(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c),0x11);
  uVar8 = *(undefined4 *)(param_1 + 0x18);
  uVar2 = FUN_089f7720("part_comp_moji");
  local_1d8 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x18) + 0x68);
  local_1e0 = 0x42e00000;
  local_1dc = 0x42e00000;
  local_1d4 = 0;
  uVar2 = FUN_089f54d8(uVar8,uVar2,&local_1e0,0);
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c) = uVar2;
  local_1d0 = 0;
  local_1cc = 0;
  local_1c8 = 0x43800000;
  local_1c4 = 0x42200000;
  FUN_089f4060(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c),&local_1d0);
  FUN_089f4924(0x43800000,0x42800000,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c));
  FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c));
  FUN_089f4a20(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c));
  local_28 = 0;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x160,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar6 = local_28;
  if (iVar3 != 0) {
    FUN_089f3aa8(iVar3);
    iVar6 = iVar3;
  }
  *(int *)(*(int *)(param_1 + 0x1c) + 0x90) = iVar6;
  FUN_089f5194(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x90));
  FUN_089f3dd4(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x8c),
               *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x90));
  uVar7 = 0;
  iVar6 = 0;
  do {
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + iVar6);
    *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) & 0xfffffffe;
    uVar7 = uVar7 + 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar6) + 0xbc) = 0;
    iVar6 = iVar6 + 4;
  } while (uVar7 < 0x25);
  cVar4 = *(char *)(param_1 + 0x5ee);
  switch(cVar4) {
  case '\0':
  case '\x01':
  case '\x02':
  case '\x03':
  case '\x04':
  case '\a':
  case '\b':
  case '\t':
    uVar7 = 2;
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar3 = 8;
    do {
      FUN_089f46dc(*(undefined4 *)(iVar6 + iVar3));
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      uVar7 = uVar7 + 1;
      iVar3 = iVar3 + 4;
      iVar6 = *(int *)(param_1 + 0x1c);
    } while (uVar7 < 5);
    *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(*(int *)(iVar6 + 0x10) + 0x60);
    uVar2 = FUN_089a4b3c(*(undefined4 *)(*(int *)(iVar6 + 0xc) + 100),
                         *(undefined4 *)(*(int *)(iVar6 + 8) + 100));
    iVar6 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x5f4) = uVar2;
    *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(*(int *)(iVar6 + 8) + 0x60);
    uVar2 = FUN_089a4b3c(*(undefined4 *)(*(int *)(iVar6 + 0xc) + 100),
                         *(undefined4 *)(*(int *)(iVar6 + 0x10) + 100));
    *(undefined4 *)(param_1 + 0x5fc) = uVar2;
    FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30));
    FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x30));
    uVar7 = 6;
    iVar3 = 0x18;
    iVar6 = param_1;
    do {
      FUN_089f46dc(*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      uVar2 = FUN_089a4b3c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + 0x30) + 0x60),
                           *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar3) + 0x60));
      iVar5 = *(int *)(param_1 + 0x1c);
      *(undefined4 *)(iVar6 + 0x600) = uVar2;
      uVar2 = FUN_089a4b3c(*(undefined4 *)(*(int *)(iVar5 + 0x30) + 100),
                           *(undefined4 *)(*(int *)(iVar5 + iVar3) + 100));
      *(undefined4 *)(iVar6 + 0x604) = uVar2;
      uVar7 = uVar7 + 1;
      iVar3 = iVar3 + 4;
      iVar6 = iVar6 + 8;
    } while (uVar7 < 0xc);
    cVar4 = *(char *)(param_1 + 0x5ee);
    break;
  case '\x05':
    local_1c0 = 0;
    memset_jak(auStack_1bf,0,0x3f);
    uVar7 = 2;
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar3 = 8;
    do {
      FUN_089f46dc(*(undefined4 *)(iVar6 + iVar3));
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      uVar7 = uVar7 + 1;
      iVar3 = iVar3 + 4;
      iVar6 = *(int *)(param_1 + 0x1c);
    } while (uVar7 < 5);
    *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(*(int *)(iVar6 + 0x10) + 0x60);
    uVar2 = FUN_089a4b3c(*(undefined4 *)(*(int *)(iVar6 + 0xc) + 100),
                         *(undefined4 *)(*(int *)(iVar6 + 8) + 100));
    iVar6 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x5f4) = uVar2;
    *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(*(int *)(iVar6 + 8) + 0x60);
    uVar2 = FUN_089a4b3c(*(undefined4 *)(*(int *)(iVar6 + 0xc) + 100),
                         *(undefined4 *)(*(int *)(iVar6 + 0x10) + 100));
    iVar6 = *(int *)(param_1 + 0x7ec);
    *(undefined4 *)(param_1 + 0x5fc) = uVar2;
    if (0xb < iVar6) {
      *(undefined4 *)(param_1 + 0x28) = 3;
      FUN_089389e8(param_1);
      return;
    }
    if (DAT_08ac19f0 == 0) {
      local_180[0] = PTR_s_00_M_Dragonoid_N_P_fencer2_gmo_08ab04f0;
      local_180[1] = PTR_s_00_M_Dragonoid_N_P_Ghound_gmo_08ab04f4;
      local_180[2] = PTR_s_00_M_Dragonoid_N_P_Dhound_gmo_08ab04ec;
      local_180[3] = PTR_s_00_M_Dragonoid_N_P_grafias_gmo_08ab04f8;
      local_170 = PTR_s_00_M_Dragonoid_N_P_brachium_gmo_08ab04e8;
      local_16c = PTR_s_00_M_Dragonoid_N_P_spitarm_gmo_08ab04fc;
      strncpy(&local_1c0,local_180[iVar6],0x40);
      iVar6 = FUN_089be054(DAT_08ac520c,&local_1c0);
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x7ec) = 0;
        strncpy(&local_1c0,local_180[0],0x40);
      }
    }
    else if (DAT_08ac19f0 == 1) {
      local_168 = PTR_s_06_M_Helios_N_P_Fencer3_gmo_08ab0500;
      local_164 = PTR_s_06_M_Helios_N_P_Foxbat_gmo_08ab0504;
      local_160 = PTR_s_06_M_Helios_N_P_Leefram_gmo_08ab0508;
      local_15c = PTR_s_06_M_Helios_N_P_Scraper_gmo_08ab050c;
      local_158 = PTR_s_06_M_Helios_N_P_Spindle_gmo_08ab0510;
      local_154 = PTR_s_06_M_Helios_N_P_Vangaurd_gmo_08ab0514;
      strncpy(&local_1c0,local_180[iVar6],0x40);
      iVar6 = FUN_089be054(DAT_08ac520c,&local_1c0);
      if (iVar6 == 0) {
        *(undefined4 *)(param_1 + 0x7ec) = 0;
        strncpy(&local_1c0,local_168,0x40);
      }
    }
    iVar6 = FUN_089be054(DAT_08ac520c,&local_1c0);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x28) = 3;
      FUN_089389e8(param_1);
      return;
    }
    local_2c = 0;
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar6 = FUN_089d7d74(0x140,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x794) = local_2c;
    }
    else {
      FUN_089de2e4(iVar6,&local_1c0,0);
      *(int *)(param_1 + 0x794) = iVar6;
    }
    cVar4 = *(char *)(param_1 + 0x5ee);
    break;
  case '\x06':
    local_150 = 0;
    memset_jak(auStack_14f,0,0x3f);
    uVar7 = 2;
    iVar6 = *(int *)(param_1 + 0x1c);
    iVar3 = 8;
    do {
      FUN_089f46dc(*(undefined4 *)(iVar6 + iVar3));
      FUN_089a51fc(0x3f800000,0x3f800000,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3));
      uVar7 = uVar7 + 1;
      iVar3 = iVar3 + 4;
      iVar6 = *(int *)(param_1 + 0x1c);
    } while (uVar7 < 5);
    *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(*(int *)(iVar6 + 0x10) + 0x60);
    uVar2 = FUN_089a4b3c(*(undefined4 *)(*(int *)(iVar6 + 0xc) + 100),
                         *(undefined4 *)(*(int *)(iVar6 + 8) + 100));
    iVar6 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(param_1 + 0x5f4) = uVar2;
    *(undefined4 *)(param_1 + 0x5f8) = *(undefined4 *)(*(int *)(iVar6 + 8) + 0x60);
    uVar2 = FUN_089a4b3c(*(undefined4 *)(*(int *)(iVar6 + 0xc) + 100),
                         *(undefined4 *)(*(int *)(iVar6 + 0x10) + 100));
    *(undefined4 *)(param_1 + 0x5fc) = uVar2;
    if (0x2b < *(int *)(param_1 + 0x7ec)) {
      *(undefined4 *)(param_1 + 0x28) = 3;
      FUN_089389e8(param_1);
      return;
    }
    memcpy_jak(auStack_110,&PTR_s_00_P_Dragonoid_N_U_figure_gmo_08ac1a70,0xb4);
    iVar6 = *(int *)(param_1 + 0x7ec) % 0x14;
    *(int *)(param_1 + 0x7ec) = iVar6;
    strncpy(&local_150,auStack_110[iVar6],0x40);
    iVar6 = FUN_089be054(DAT_08ac520c,auStack_110[*(int *)(param_1 + 0x7ec)]);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x7ec) = 0x14;
      strncpy(&local_150,local_c0,0x40);
    }
    iVar6 = FUN_089be054(DAT_08ac520c,&local_150);
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x28) = 3;
      FUN_089389e8(param_1);
      return;
    }
    local_30 = 0;
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar6 = FUN_089d7d74(0x140,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x794) = local_30;
    }
    else {
      FUN_089de2e4(iVar6,auStack_110[*(int *)(param_1 + 0x7ec)],0);
      *(int *)(param_1 + 0x794) = iVar6;
    }
    cVar4 = *(char *)(param_1 + 0x5ee);
  }
  bVar1 = false;
  if ((cVar4 != '\x05') && (bVar1 = false, cVar4 != '\x06')) {
    bVar1 = true;
  }
  if (!bVar1) {
    *(undefined *)(*(int *)(param_1 + 0x794) + 0xbc) = 1;
    iVar6 = *(int *)(param_1 + 0x794);
    if (*(char *)(param_1 + 0x5ee) == '\x06') {
      iVar3 = *(int *)(param_1 + 0x7ec);
      if (((iVar3 == 0) || (iVar3 == 0xc)) || (iVar3 == 0x14)) {
        *(undefined4 *)(iVar6 + 0x30) = 0x3fc90fdb;
        *(undefined4 *)(iVar6 + 0x34) = 0x4002b0b4;
        *(undefined4 *)(iVar6 + 0x38) = 0x3fc90fdb;
        *(undefined4 *)(iVar6 + 0x3c) = 0;
        uVar2 = *(undefined4 *)(param_1 + 0x794);
      }
      else {
        *(undefined4 *)(iVar6 + 0x30) = 0x3fc90fdb;
        *(undefined4 *)(iVar6 + 0x34) = 0x3fc90fdb;
        *(undefined4 *)(iVar6 + 0x38) = 0x3fc90fdb;
        *(undefined4 *)(iVar6 + 0x3c) = 0;
        uVar2 = *(undefined4 *)(param_1 + 0x794);
      }
      local_50 = 0x3dcccccd;
      local_4c = 0x3dcccccd;
      local_48 = 0x3dcccccd;
      local_44 = 0x3f800000;
      FUN_089e0344(0x41000000,uVar2,&local_50,0);
      iVar6 = *(int *)(param_1 + 0x794);
      *(undefined4 *)(iVar6 + 0x6c) = 0x3f800000;
      *(undefined4 *)(iVar6 + 0x60) = 0x3ee66666;
      *(undefined4 *)(iVar6 + 100) = 0x3ee66666;
      *(undefined4 *)(iVar6 + 0x68) = 0x3ee66666;
      FUN_089e0a70(*(undefined4 *)(param_1 + 0x794),&LAB_08937d54,0);
      iVar6 = *(int *)(param_1 + 0x794);
    }
    else if (*(char *)(param_1 + 0x5ee) == '\x05') {
      if (DAT_08ac19f0 == 0) {
        *(undefined4 *)(iVar6 + 0x30) = 0x3fa0d97c;
        *(undefined4 *)(iVar6 + 0x34) = 0x400cbe4c;
        *(undefined4 *)(iVar6 + 0x38) = 0x3fc90fdb;
        *(undefined4 *)(iVar6 + 0x3c) = 0;
        iVar6 = *(int *)(param_1 + 0x794);
      }
      else if (DAT_08ac19f0 == 1) {
        *(undefined4 *)(iVar6 + 0x30) = 0x3fa0d97c;
        *(undefined4 *)(iVar6 + 0x34) = 0x400cbe4c;
        *(undefined4 *)(iVar6 + 0x38) = 0x3fc90fdb;
        *(undefined4 *)(iVar6 + 0x3c) = 0;
        iVar6 = *(int *)(param_1 + 0x794);
      }
      local_40 = 0x3f19999a;
      local_3c = 0x3f19999a;
      local_38 = 0x3f19999a;
      local_34 = 0x3f800000;
      FUN_089e0344(0x41200000,iVar6,&local_40,0);
      FUN_089e0a70(*(undefined4 *)(param_1 + 0x794),&LAB_08937d28,0);
      iVar6 = *(int *)(param_1 + 0x794);
    }
    *(undefined4 *)(param_1 + 0x7e8) = *(undefined4 *)(iVar6 + 0x34);
    *(undefined4 *)(iVar6 + 0x6c) = 0;
  }
  return;
}

