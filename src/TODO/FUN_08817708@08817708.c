#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08817708(int param_1,int param_2,undefined **param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int iVar5;
  
  FUN_089f4f54(param_1,0);
  *(undefined **)(param_1 + 0x74) = &DAT_08af1654;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar3 = FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  if (param_3 == (undefined **)0x0) {
    param_3 = &PTR_s_wd_font16_08ab0128;
  }
  if (param_2 == 0) {
    iVar5 = 0;
    puVar4 = *param_3;
    while (puVar4 != (undefined *)0x0) {
      uVar2 = FUN_089f7720(*param_3);
      param_3 = param_3 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x80) + iVar5) = uVar2;
      iVar5 = iVar5 + 4;
      puVar4 = *param_3;
    }
    *(undefined *)(param_1 + 0x8c) = 0;
  }
  else {
    uVar2 = FUN_089f7950(param_2);
    iVar5 = 0;
    puVar4 = *param_3;
    while (puVar4 != (undefined *)0x0) {
      uVar3 = FUN_089f7720(*param_3);
      param_3 = param_3 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x80) + iVar5) = uVar3;
      iVar5 = iVar5 + 4;
      puVar4 = *param_3;
    }
    FUN_089f7950(uVar2);
    *(undefined *)(param_1 + 0x8c) = 0;
  }
  iVar5 = FUN_089f70fc(**(undefined4 **)(param_1 + 0x80));
  *(int *)(param_1 + 0x90) = (int)(iVar5 + ((uint)(iVar5 >> 4) >> 0x1c)) >> 4;
  *(undefined4 *)(param_1 + 0x94) = 0x41880000;
  *(undefined4 *)(param_1 + 0x98) = 0x41880000;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0x41800000;
  *(undefined4 *)(param_1 + 0xa4) = 0x41800000;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  uVar1 = DAT_08b0019c;
  uVar3 = DAT_08b00198;
  uVar2 = DAT_08b00194;
  *(undefined4 *)(param_1 + 0xb0) = DAT_08b00190;
  *(undefined4 *)(param_1 + 0xb4) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = uVar3;
  *(undefined4 *)(param_1 + 0xbc) = uVar1;
  uVar1 = DAT_08b0019c;
  uVar3 = DAT_08b00198;
  uVar2 = DAT_08b00194;
  *(undefined4 *)(param_1 + 0xc0) = DAT_08b00190;
  *(undefined4 *)(param_1 + 0xc4) = uVar2;
  *(undefined4 *)(param_1 + 200) = uVar3;
  *(undefined4 *)(param_1 + 0xcc) = uVar1;
  *(undefined *)(param_1 + 0xd0) = 0;
  *(undefined *)(param_1 + 0xd1) = 0;
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe0) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  return param_1;
}

