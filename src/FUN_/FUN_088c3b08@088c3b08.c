#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c3b08(undefined4 *param_1,uint param_2)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_08af2cfc;
    FUN_089cec00(DAT_08ac5934);
    FUN_088bf1e0(param_1);
    FUN_088660d4(0);
    FUN_088dfa3c();
    FUN_089bf850(0x1e2);
    iVar3 = param_1[0x17f];
    if (iVar3 != 0) {
      (**(code **)(*(int *)(iVar3 + 0x74) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0x74) + 8),3);
      param_1[0x17f] = 0;
    }
    iVar3 = param_1[0x17e];
    if (iVar3 == 0) {
      iVar3 = param_1[0x17d];
    }
    else {
      (**(code **)(*(int *)(iVar3 + 0x74) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0x74) + 8),3);
      param_1[0x17e] = 0;
      iVar3 = param_1[0x17d];
    }
    if (iVar3 == 0) {
      iVar3 = param_1[0x184];
    }
    else {
      (**(code **)(*(int *)(iVar3 + 0x74) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0x74) + 8),3);
      param_1[0x17d] = 0;
      iVar3 = param_1[0x184];
    }
    if (iVar3 != 0) {
      FUN_088c72d4(iVar3,3);
      param_1[0x184] = 0;
    }
    FUN_089e0c90(param_1[0x18a]);
    FUN_089e0c90(param_1[0x18d]);
    FUN_089e0c90(param_1[400]);
    FUN_089e0c90(param_1[0x193]);
    FUN_089e0c90(param_1[0x196]);
    FUN_089e0c90(param_1[0x19c]);
    FUN_088a9274();
    FUN_0882531c();
    iVar3 = param_1[0x181];
    if (iVar3 == 0) {
      iVar3 = param_1[0x182];
    }
    else {
      (**(code **)(*(int *)(iVar3 + 0x74) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0x74) + 8),3);
      param_1[0x181] = 0;
      iVar3 = param_1[0x182];
    }
    if (iVar3 == 0) {
      iVar3 = param_1[0x180];
    }
    else {
      (**(code **)(*(int *)(iVar3 + 0x74) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0x74) + 8),3);
      param_1[0x182] = 0;
      iVar3 = param_1[0x180];
    }
    if (iVar3 != 0) {
      (**(code **)(*(int *)(iVar3 + 0x74) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0x74) + 8),3);
      param_1[0x180] = 0;
    }
    DAT_08ac5c70 = 0;
    FUN_089d88d4(DAT_08b00200);
    FUN_089d88d4(DAT_08b00210);
    FUN_089d88d4(DAT_08b00220);
    FUN_089d88d4(DAT_08b00230);
    FUN_089d88d4(DAT_08b00240);
    FUN_089d88d4(DAT_08b00250);
    FUN_0881a9fc();
    uVar2 = FUN_089d9674();
    FUN_089d9740(uVar2,0);
    iVar3 = param_1[4];
    if (iVar3 != 0) {
      (**(code **)(*(int *)(iVar3 + 0x20) + 0xc))(iVar3 + *(short *)(*(int *)(iVar3 + 0x20) + 8),3);
      param_1[4] = 0;
    }
    FUN_088d8d24();
    if (param_1[0x1b2] == 0) {
      iVar3 = param_1[0x1e4];
    }
    else {
      FUN_089bf850(0x189);
      iVar3 = param_1[0x1e4];
    }
    if (iVar3 == 0) {
      iVar3 = param_1[0x1e3];
    }
    else {
      FUN_088efd88();
      FUN_088ef534(param_1[0x1e4]);
      param_1[0x1e4] = 0;
      iVar3 = param_1[0x1e3];
    }
    if (iVar3 != 0) {
      FUN_088f47a8();
      if (param_1[0x1e3] != 0) {
        FUN_088f4064(param_1[0x1e3],3);
        param_1[0x1e3] = 0;
      }
    }
    uVar2 = FUN_0880cc48();
    FUN_0880cd9c(uVar2,0x1d,*param_1);
    DAT_08ac601e = 0;
    FUN_088c17f8();
    if (DAT_08abe906 == '\x03') {
      iVar3 = 0;
      do {
        uVar1 = FUN_089c9b48(iVar3 + 6,DAT_08ac58c8);
        puVar4 = &DAT_08abd90c + iVar3;
        iVar3 = iVar3 + 1;
        *puVar4 = uVar1;
      } while (iVar3 < 0x19);
    }
    FUN_088e9f84(param_1 + 0x1e0,2);
    FUN_088b9a0c(param_1 + 8,2);
    FUN_089bf25c(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

