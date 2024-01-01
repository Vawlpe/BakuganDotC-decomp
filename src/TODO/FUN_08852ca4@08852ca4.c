#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08852ca4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_089cec00(DAT_08ac5934);
  FUN_089bf8c8(0x14a);
  FUN_089bf8c8(0x14b);
  FUN_089bf8c8(0x1e1);
  FUN_089bf8c8(0x1e0);
  FUN_089bf8c8(0x6b);
  FUN_089bf850(0x6e);
  FUN_089bf850(0x6c);
  FUN_089bf850(0x69);
  FUN_089bf850(0x1e2);
  FUN_089c9b74(0x22,DAT_08ac58c8);
  FUN_089c9b9c(0x1f,DAT_08ac58c8);
  FUN_088660d4(0);
  iVar1 = _DONE_NotZero_DAT_08AC5258();
  if (iVar1 != 0) {
    uVar2 = _DONE_Get_DAT_08AC5258();
    FUN_089c0584(uVar2);
  }
  FUN_0889d974();
  FUN_08878d74();
  FUN_088b6a20();
  iVar1 = *(int *)(param_1 + 0x434);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x430);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
    *(undefined4 *)(param_1 + 0x434) = 0;
    iVar1 = *(int *)(param_1 + 0x430);
  }
  if (iVar1 != 0) {
    (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  FUN_089e0c90(*(undefined4 *)(param_1 + 0x45c));
  FUN_089e0c90(*(undefined4 *)(param_1 + 0x468));
  FUN_089e0c90(*(undefined4 *)(param_1 + 0x474));
  FUN_088a9274();
  FUN_089d8928(param_1 + 0x488);
  FUN_0882531c();
  iVar1 = *(int *)(param_1 + 0x4d4);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x4d8);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
    *(undefined4 *)(param_1 + 0x4d4) = 0;
    iVar1 = *(int *)(param_1 + 0x4d8);
  }
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x438);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
    *(undefined4 *)(param_1 + 0x4d8) = 0;
    iVar1 = *(int *)(param_1 + 0x438);
  }
  if (iVar1 == 0) {
    DAT_08ac5c70 = *(undefined4 *)(param_1 + 0x4d4);
  }
  else {
    (**(code **)(*(int *)(iVar1 + 0x74) + 0xc))(iVar1 + *(short *)(*(int *)(iVar1 + 0x74) + 8),3);
    *(undefined4 *)(param_1 + 0x438) = 0;
    DAT_08ac5c70 = *(undefined4 *)(param_1 + 0x4d4);
  }
  DAT_08abd5b0 = *(undefined4 *)(param_1 + 0x4d8);
  FUN_089d88d4(DAT_08b00200);
  FUN_089d88d4(DAT_08b00210);
  FUN_089d88d4(DAT_08b00220);
  FUN_089d88d4(DAT_08b00230);
  FUN_089d88d4(DAT_08b00240);
  FUN_089d88d4(DAT_08b00250);
  FUN_0881a9fc();
  FUN_089d8da8(DAT_08b00890);
  FUN_088660d4(0);
  FUN_089e10cc(0x3f800000);
  FUN_08854aec();
  FUN_089e1004();
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar1 = 0;
  if (iVar3 != 0) {
    FUN_089f4f54(iVar3,0);
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0x430) = iVar1;
  *(undefined *)(iVar1 + 4) = 1;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar1 = 0;
  if (iVar3 != 0) {
    FUN_089f4f54(iVar3,1);
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0x434) = iVar1;
  *(undefined *)(iVar1 + 4) = 1;
  DAT_08ac5c68 = *(undefined4 *)(param_1 + 0x434);
  DAT_08b00830 = *(undefined4 *)(param_1 + 0x434);
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x80,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar1 = 0;
  if (iVar3 != 0) {
    FUN_089f4f54(iVar3,1);
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0x438) = iVar1;
  DAT_08b00834 = *(undefined4 *)(param_1 + 0x438);
  DAT_08ac5c6c = iVar1;
  FUN_088549dc(10);
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
  iVar1 = WeirdBuff;
  DAT_08aba77d = 0;
  DAT_08aba77e = 0;
  *(int *)(param_1 + 0x43c) = WeirdBuff;
  *(undefined *)(iVar1 + 0x39) = 0;
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
  *(undefined4 *)(param_1 + 0x540) = 0;
  *(undefined4 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x538) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x568) = 0;
  *(undefined4 *)(param_1 + 0x56c) = 0;
  *(undefined4 *)(param_1 + 0x570) = 0;
  *(undefined4 *)(param_1 + 0x574) = 0;
  *(undefined4 *)(param_1 + 0x578) = 0;
  *(undefined4 *)(param_1 + 0x58c) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d8) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0x4dc) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x4fc) = 0x3f800000;
  iVar1 = FUN_089edb80();
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0x3f800000;
  iVar1 = FUN_089edb80();
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  uVar2 = FUN_089edb80();
  FUN_089edf24(uVar2,1);
  iVar1 = FUN_0880d354();
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x54c) = 0;
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
  FUN_089bf6e8(0x6e,0xfa);
  *(undefined4 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x444) = 0;
  *(undefined4 *)(param_1 + 0x448) = 0xf;
  DAT_08aba780 = 1;
  DAT_08ac601c = 1;
  iVar3 = 0;
  iVar1 = param_1;
  do {
    *(undefined4 *)(iVar1 + 0x57c) = 0;
    iVar3 = iVar3 + 1;
    iVar1 = iVar1 + 4;
  } while (iVar3 < 3);
  *(undefined4 *)(param_1 + 0x588) = 0;
  *(undefined *)(param_1 + 0x55d) = 0;
  *(undefined4 *)(DAT_08ac58c4 + 0x38) = 0;
  *(undefined4 *)(DAT_08ac58c4 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x534) = 0;
  *(undefined4 *)(param_1 + 0x564) = 0;
  iVar1 = _DONE_NotZero_DAT_08AC5258();
  if (iVar1 != 0) {
    uVar2 = _DONE_Get_DAT_08AC5258();
    FUN_089c0570(uVar2,0);
  }
  return;
}

