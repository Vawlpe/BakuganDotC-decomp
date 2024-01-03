#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088c3600(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  FUN_089bf238(param_1,0);
  *(undefined **)(param_1 + 0xc) = &DAT_08af2cfc;
  FUN_088b9860(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x6f0) = 0;
  *(undefined4 *)(param_1 + 0x6f4) = 0;
  *(undefined *)(param_1 + 0x6f9) = 0;
  FUN_088e9f70(param_1 + 0x780);
  *(undefined *)(param_1 + 0x79b) = 0xff;
  if (DAT_08abe906 == '\x03') {
    pcVar8 = &DAT_08abd90c;
    iVar7 = 0;
    do {
      if (*pcVar8 == '\0') {
        FUN_089c9b9c(iVar7 + 6,DAT_08ac58c8);
      }
      else {
        FUN_089c9b74(iVar7 + 6,DAT_08ac58c8);
      }
      iVar9 = iVar7 + 1;
      pcVar8 = &DAT_08abd90d + iVar7;
      iVar7 = iVar9;
    } while (iVar9 < 0x19);
  }
  DAT_08ac5934[7] = 0;
  FUN_089e54f8();
  *(undefined4 *)(param_1 + 0x610) = 0;
  local_28 = 0;
  FUN_089d8634();
  uVar5 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar9 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar5);
  FUN_089d866c();
  iVar7 = local_28;
  if (iVar9 != 0) {
    FUN_089f4f54(iVar9,0);
    iVar7 = iVar9;
  }
  *(int *)(param_1 + 0x5f4) = iVar7;
  *(undefined *)(iVar7 + 4) = 1;
  local_2c = 0;
  FUN_089d8634();
  uVar5 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar9 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar5);
  FUN_089d866c();
  iVar7 = local_2c;
  if (iVar9 != 0) {
    FUN_089f4f54(iVar9,1);
    iVar7 = iVar9;
  }
  *(int *)(param_1 + 0x5f8) = iVar7;
  *(undefined *)(iVar7 + 4) = 1;
  DAT_08ac5c68 = *(undefined4 *)(param_1 + 0x5f8);
  DAT_08b00830 = *(undefined4 *)(param_1 + 0x5f8);
  local_30 = 0;
  FUN_089d8634();
  uVar5 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar9 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar5);
  FUN_089d866c();
  iVar7 = local_30;
  if (iVar9 != 0) {
    FUN_089f4f54(iVar9,1);
    iVar7 = iVar9;
  }
  *(int *)(param_1 + 0x5fc) = iVar7;
  local_34 = 0;
  FUN_089d8634();
  uVar5 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar9 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar5);
  FUN_089d866c();
  iVar7 = local_34;
  if (iVar9 != 0) {
    FUN_089f4f54(iVar9,1);
    iVar7 = iVar9;
  }
  *(int *)(param_1 + 0x600) = iVar7;
  DAT_08b00834 = *(undefined4 *)(param_1 + 0x600);
  DAT_08ac5c6c = iVar7;
  *(undefined4 *)(param_1 + 0x618) = 0;
  *(undefined4 *)(param_1 + 0x614) = 0;
  *(undefined4 *)(param_1 + 0x61c) = 0;
  *(undefined4 *)(param_1 + 0x67c) = 0;
  *(undefined4 *)(param_1 + 0x680) = 0;
  *(undefined4 *)(param_1 + 0x684) = 0;
  *(undefined *)(param_1 + 0x6a0) = 0;
  *(undefined *)(param_1 + 0x6a1) = 0;
  *(undefined4 *)(param_1 + 0x620) = 0;
  *(undefined4 *)(param_1 + 0x624) = 0;
  *(undefined4 *)(param_1 + 0x6c8) = 0;
  *(undefined *)(param_1 + 0x6a2) = 0;
  *(undefined4 *)(param_1 + 0x6a4) = 0;
  iVar7 = WeirdBuff;
  *(int *)(param_1 + 0x5f0) = WeirdBuff;
  *(undefined *)(iVar7 + 0x39) = 0;
  *(undefined4 *)(param_1 + 0x644) = 0;
  *(undefined4 *)(param_1 + 0x640) = 0;
  *(undefined4 *)(param_1 + 0x648) = 0;
  *(undefined4 *)(param_1 + 0x62c) = 0;
  *(undefined4 *)(param_1 + 0x628) = 0;
  *(undefined4 *)(param_1 + 0x630) = 0;
  *(undefined4 *)(param_1 + 0x638) = 0;
  *(undefined4 *)(param_1 + 0x634) = 0;
  *(undefined4 *)(param_1 + 0x63c) = 0;
  *(undefined4 *)(param_1 + 0x650) = 0;
  *(undefined4 *)(param_1 + 0x64c) = 0;
  *(undefined4 *)(param_1 + 0x654) = 0;
  *(undefined4 *)(param_1 + 0x65c) = 0;
  *(undefined4 *)(param_1 + 0x658) = 0;
  *(undefined4 *)(param_1 + 0x660) = 0;
  *(undefined4 *)(param_1 + 0x668) = 0;
  *(undefined4 *)(param_1 + 0x664) = 0;
  *(undefined4 *)(param_1 + 0x66c) = 0;
  *(undefined4 *)(param_1 + 0x674) = 0;
  *(undefined4 *)(param_1 + 0x670) = 0;
  *(undefined4 *)(param_1 + 0x678) = 0;
  *(undefined4 *)(param_1 + 0x604) = 0;
  *(undefined4 *)(param_1 + 0x608) = 0;
  *(undefined4 *)(param_1 + 0x60c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x790) = 0;
  *(undefined2 *)(param_1 + 0x794) = 0;
  *(undefined2 *)(param_1 + 0x796) = 0;
  memset_jak((undefined *)(param_1 + 0x708),0,0x78);
  *(undefined *)(param_1 + 0x6ac) = 0;
  *(undefined4 *)(param_1 + 0x6bc) = 0xffffffff;
  *(undefined *)(param_1 + 0x6c0) = 0;
  *(undefined4 *)(param_1 + 0x6c4) = 0;
  uVar2 = DAT_08b001bc;
  uVar1 = DAT_08b001b8;
  uVar5 = DAT_08b001b4;
  *(undefined4 *)(param_1 + 0x690) = DAT_08b001b0;
  *(undefined4 *)(param_1 + 0x694) = uVar5;
  *(undefined4 *)(param_1 + 0x698) = uVar1;
  *(undefined4 *)(param_1 + 0x69c) = uVar2;
  puVar4 = DAT_08ac5934;
  uVar5 = *(undefined4 *)(param_1 + 0x694);
  uVar1 = *(undefined4 *)(param_1 + 0x698);
  uVar2 = *(undefined4 *)(param_1 + 0x69c);
  *DAT_08ac5934 = *(undefined4 *)(param_1 + 0x690);
  puVar4[1] = uVar5;
  puVar4[2] = uVar1;
  puVar4[3] = uVar2;
  FUN_089e10cc(0x3f800000);
  piVar6 = (int *)DONE_Get_DAT_08AAC9E0();
  if (*(int *)(*piVar6 + 0x48c) == 0) {
    piVar6 = (int *)DONE_Get_DAT_08AAC9E0();
    *(undefined4 *)(*piVar6 + 0x48c) = 1;
  }
  DAT_08b00bd4 = (undefined)
                 ((int)(*(int *)(DAT_08ac58c4 + 4) +
                       ((uint)(*(int *)(DAT_08ac58c4 + 4) >> 2) >> 0x1e)) >> 2);
  bVar3 = (byte)*(int *)(DAT_08ac58c4 + 4);
  if (*(int *)(DAT_08ac58c4 + 4) < 0) {
    DAT_08b00bd6 = -(-bVar3 & 3);
  }
  else {
    DAT_08b00bd6 = bVar3 & 3;
  }
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_44 = 0;
  iVar7 = FUN_089f5484(*(undefined4 *)(param_1 + 0x5f4),"tuto_000",&local_50,0);
  *(int *)(param_1 + 0x6b0) = iVar7;
  *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
  uVar5 = FUN_0881a300(0xc,0x40);
  iVar7 = FUN_088c1680(param_1,uVar5);
  *(int *)(param_1 + 0x6b4) = iVar7;
  *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
  iVar7 = FUN_088c1680(param_1,uVar5);
  *(int *)(param_1 + 0x6b8) = iVar7;
  *(uint *)(iVar7 + 0xd0) = *(uint *)(iVar7 + 0xd0) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x6d0) = in_V72;
  *(undefined4 *)(param_1 + 0x6d4) = in_V76;
  *(undefined4 *)(param_1 + 0x6d8) = in_V7A;
  *(undefined4 *)(param_1 + 0x6dc) = in_V7E;
  *(undefined *)(param_1 + 0x6e0) = 0;
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  *(undefined *)(param_1 + 0x6e8) = 0;
  uVar5 = DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar5,0x2f,0);
  *(undefined4 *)(param_1 + 0x6ec) = 0;
  *(undefined *)(param_1 + 0x6f8) = 0;
  *(undefined2 *)(param_1 + 0x798) = 0;
  *(undefined4 *)(param_1 + 0x6fc) = 0;
  *(undefined *)(param_1 + 0x700) = 0;
  *(undefined *)(param_1 + 0x701) = 0;
  *(undefined4 *)(param_1 + 0x704) = 0x3c23d70a;
  return param_1;
}

