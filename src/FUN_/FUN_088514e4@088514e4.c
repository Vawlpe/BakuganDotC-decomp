#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088514e4(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return;
  }
  *(undefined **)(param_1 + 0xc) = &DAT_08af18f4;
  FUN_089cec00(DAT_08ac5934);
  FUN_0887065c();
  FUN_089f7564("ofx_14p_03_01");
  FUN_089f7564("bfx_151p_01");
  FUN_089f7564("afx_101p_01");
  FUN_089f7564("smoke");
  FUN_089f7564("kemuri1");
  FUN_089f7564("StopWall");
  FUN_089bf8c8(0x14a);
  FUN_089bf8c8(0x14b);
  FUN_089bf8c8(0x1e1);
  FUN_089bf8c8(0x1e0);
  FUN_089bf8c8(0x6b);
  FUN_089bf8c8(0x69);
  FUN_089bf8c8(0x68);
  FUN_089bf8c8(0x65);
  FUN_089bf8c8(0x67);
  FUN_089bf850(0x1e2);
  FUN_088660d4(0);
  FUN_0889d974();
  FUN_08878d74();
  FUN_088b6a20();
  iVar2 = *(int *)(param_1 + 0x434);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
    *(undefined4 *)(param_1 + 0x434) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x430);
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
    *(undefined4 *)(param_1 + 0x430) = 0;
  }
  FUN_089e0c90(*(undefined4 *)(param_1 + 0x45c));
  FUN_089e0c90(*(undefined4 *)(param_1 + 0x468));
  FUN_089e0c90(*(undefined4 *)(param_1 + 0x474));
  FUN_088a9274();
  FUN_089d8928(param_1 + 0x488);
  FUN_0882531c();
  FUN_0885b5a8();
  iVar2 = *(int *)(param_1 + 0x4d4);
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x4d8);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
    *(undefined4 *)(param_1 + 0x4d4) = 0;
    iVar2 = *(int *)(param_1 + 0x4d8);
  }
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x438);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
    *(undefined4 *)(param_1 + 0x4d8) = 0;
    iVar2 = *(int *)(param_1 + 0x438);
  }
  if (iVar2 == 0) {
    DAT_08ac5c70 = *(undefined4 *)(param_1 + 0x4d4);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
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
  uVar1 = FUN_089d9674();
  FUN_089d9740(uVar1,0);
  FUN_089d8da8(DAT_08b00890);
  FUN_088660d4(0);
  FUN_089e10cc(0x3f800000);
  FUN_08854aec();
  DAT_08aba780 = 1;
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(iVar2,0,0);
    FUN_089d866c();
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  FUN_089e1004();
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    if (DAT_08aba778 != 1) {
      iVar2 = *(int *)(param_1 + 0x10);
      goto LAB_08851838;
    }
    uVar1 = FUN_0880cc48();
    FUN_0880d0ac(uVar1,0x2e);
    uVar1 = FUN_0880cc48();
    uVar1 = FUN_0880d0ac(uVar1,0x31);
    *(undefined4 *)(DAT_08ac58c4 + 4) = uVar1;
  }
  iVar2 = *(int *)(param_1 + 0x10);
LAB_08851838:
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0x20) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 8),3);
    *(undefined4 *)(param_1 + 0x10) = 0;
    iVar2 = *(int *)(param_1 + 0x14);
  }
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x18);
  }
  else {
    (**(code **)(*(int *)(iVar2 + 0x20) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 8),3);
    *(undefined4 *)(param_1 + 0x14) = 0;
    iVar2 = *(int *)(param_1 + 0x18);
  }
  if (iVar2 != 0) {
    (**(code **)(*(int *)(iVar2 + 0x20) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x20) + 8),3);
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar2 = FUN_089bffd4();
  if (iVar2 != 0) {
    uVar1 = FUN_089bfff0(param_1 + 0x20);
    FUN_089c0570(uVar1,0);
  }
  FUN_088471c8(param_1 + 0x20,2);
  FUN_089bf25c(param_1,0);
  if ((param_2 & 1) != 0) {
    FUN_089d8634();
    FUN_089d7fd8(param_1,0,0);
    FUN_089d866c();
  }
  return;
}

