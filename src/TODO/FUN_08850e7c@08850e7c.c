#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08850e7c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af18f4;
  FUN_08846ff8(param_1 + 0x20);
  DAT_08ac0e78 = 100;
  FUN_089c9b74(0x22,DAT_08ac58c8);
  FUN_089c9b9c(0x1f,DAT_08ac58c8);
  FUN_089c9b9c(0x23,DAT_08ac58c8);
  DAT_08abd598 = 0;
  iVar3 = FUN_0880d354();
  if (iVar3 == 0) {
    uVar4 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar4,0x13,0);
    FUN_089bb598(0x14d);
    DAT_08ab9f70 = 1;
  }
  else {
    FUN_089cff94();
  }
  DAT_08aba77c = 1;
  *(undefined4 *)(param_1 + 0x564) = 0;
  DAT_08ac5934[7] = 0;
  FUN_089e54f8();
  FUN_089d8634();
  uVar4 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar5 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar4);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar5 != 0) {
    FUN_089f4f54(iVar5,0);
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x430) = iVar3;
  *(undefined *)(iVar3 + 4) = 1;
  FUN_089d8634();
  uVar4 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar5 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar4);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar5 != 0) {
    FUN_089f4f54(iVar5,1);
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x434) = iVar3;
  *(undefined *)(iVar3 + 4) = 1;
  DAT_08ac5c68 = *(undefined4 *)(param_1 + 0x434);
  DAT_08b00830 = *(undefined4 *)(param_1 + 0x434);
  FUN_089d8634();
  uVar4 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar5 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar4);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar5 != 0) {
    FUN_089f4f54(iVar5,1);
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x438) = iVar3;
  DAT_08b00834 = *(undefined4 *)(param_1 + 0x438);
  DAT_08ac5c6c = iVar3;
  FUN_088549dc(10);
  FUN_089f74b4("ofx_14p_03_01");
  FUN_089f74b4("bfx_151p_01");
  FUN_089f74b4("afx_101p_01");
  FUN_089f74b4("smoke");
  FUN_089f74b4("kemuri1");
  FUN_089f74b4("StopWall");
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x444) = 0;
  DAT_08b0087c = 0;
  *(undefined4 *)(param_1 + 0x448) = 0;
  *(undefined4 *)(param_1 + 0x44c) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  *(undefined4 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x454) = 0;
  *(undefined4 *)(param_1 + 0x500) = in_V72;
  *(undefined4 *)(param_1 + 0x504) = in_V76;
  *(undefined4 *)(param_1 + 0x508) = in_V7A;
  *(undefined4 *)(param_1 + 0x50c) = in_V7E;
  *(undefined4 *)(param_1 + 0x510) = in_V72;
  *(undefined4 *)(param_1 + 0x514) = in_V76;
  *(undefined4 *)(param_1 + 0x518) = in_V7A;
  *(undefined4 *)(param_1 + 0x51c) = in_V7E;
  *(undefined4 *)(param_1 + 0x51c) = 0x3f19999a;
  *(undefined4 *)(param_1 + 0x524) = 0;
  *(undefined4 *)(param_1 + 0x520) = 0;
  DAT_08aba780 = 1;
  DAT_08aba778 = 0;
  *(undefined4 *)(param_1 + 0x53c) = 0;
  iVar3 = WeirdBuff;
  DAT_08aba77d = 0;
  DAT_08aba77e = 0;
  *(int *)(param_1 + 0x43c) = WeirdBuff;
  *(undefined *)(iVar3 + 0x39) = 0;
  *(undefined *)(*(int *)(param_1 + 0x43c) + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0;
  *(undefined4 *)(param_1 + 0x45c) = 0;
  *(undefined4 *)(param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x478) = 0;
  *(undefined4 *)(param_1 + 0x474) = 0;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x48c) = 0;
  *(undefined4 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x490) = 0;
  *(undefined *)(param_1 + 0x52c) = 0;
  *(undefined *)(param_1 + 0x52d) = 1;
  *(undefined *)(param_1 + 0x52e) = 0;
  *(undefined *)(param_1 + 0x52f) = 0;
  *(undefined *)(param_1 + 0x530) = 0;
  *(undefined *)(param_1 + 0x531) = 0;
  *(undefined *)(param_1 + 0x55a) = 0;
  DAT_08aba77f = 1;
  *(undefined *)(param_1 + 0x532) = 0;
  *(undefined4 *)(param_1 + 0x534) = 0;
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x538) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x568) = 0;
  *(undefined4 *)(param_1 + 0x56c) = 0;
  *(undefined4 *)(param_1 + 0x570) = 0;
  *(undefined4 *)(param_1 + 0x574) = 0;
  *(undefined4 *)(param_1 + 0x578) = 0;
  *(undefined4 *)(param_1 + 0x58c) = 0;
  uVar2 = DAT_08b001bc;
  uVar7 = DAT_08b001b8;
  uVar4 = DAT_08b001b4;
  puVar1 = DAT_08ac5934;
  *DAT_08ac5934 = DAT_08b001b0;
  puVar1[1] = uVar4;
  puVar1[2] = uVar7;
  puVar1[3] = uVar2;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x4fc) = 0x3f800000;
  iVar3 = FUN_0880d354();
  if (iVar3 == 0) {
    uVar6 = FUN_089be994();
    iVar3 = 0;
    if ((uVar6 & 0xff) == 0) {
      *(undefined4 *)(param_1 + 0x54c) = 0;
    }
    else {
      do {
        FUN_089bed14(0);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)(uVar6 & 0xff));
      *(undefined4 *)(param_1 + 0x54c) = 0;
    }
  }
  else {
    FUN_089becd8();
    FUN_089bec88();
    *(undefined4 *)(param_1 + 0x54c) = 0;
  }
  FUN_08850b48(param_1);
  FUN_0884f010(param_1,0);
  FUN_089cff94();
  FUN_089d014c();
  DAT_08aba784 = 0;
  DAT_08aba77c = 0;
  *(undefined *)(param_1 + 0x558) = 0;
  *(undefined *)(param_1 + 0x559) = 0;
  *(undefined *)(param_1 + 0x55b) = 0;
  *(undefined *)(param_1 + 0x55c) = 0;
  FUN_088663d8(0);
  FUN_089e10cc(0x3f800000);
  FUN_089bf6e8(0x6e,0xfa);
  DAT_08aba780 = 1;
  iVar5 = 0;
  iVar3 = param_1;
  do {
    *(undefined4 *)(iVar3 + 0x57c) = 0;
    iVar5 = iVar5 + 1;
    iVar3 = iVar3 + 4;
  } while (iVar5 < 3);
  *(undefined4 *)(param_1 + 0x588) = 0;
  FUN_089d8634();
  uVar4 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar7 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar4);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 0x590) = 0;
  *(undefined *)(param_1 + 0x55d) = 0;
  *(undefined *)(param_1 + 0x55e) = 0;
  *(undefined *)(param_1 + 0x55f) = 0;
  *(undefined *)(param_1 + 0x560) = 0;
  *(undefined4 *)(DAT_08ac58c4 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  FUN_0888df74();
  FUN_089d8634();
  uVar4 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar5 = FUN_089d7d74(0x44,0,0);
  FUN_089d816c(uVar4);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar5 != 0) {
    FUN_089bd9b4(iVar5);
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  FUN_089d8634();
  uVar4 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar5 = FUN_089d7d74(0x44,0,0);
  FUN_089d816c(uVar4);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar5 != 0) {
    FUN_089bd9b4(iVar5);
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x14) = iVar3;
  FUN_089d8634();
  uVar4 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar5 = FUN_089d7d74(0x44,0,0);
  FUN_089d816c(uVar4);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar5 != 0) {
    FUN_089bd9b4(iVar5);
    iVar3 = iVar5;
  }
  *(int *)(param_1 + 0x18) = iVar3;
  *(undefined4 *)(param_1 + 0x550) = 0;
  return param_1;
}

