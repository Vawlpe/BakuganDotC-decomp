#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08917730(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *ptr;
  int iVar5;
  uint uVar6;
  
  FUN_0890990c();
  *(undefined **)(param_1 + 0xc) = &DAT_08af49d4;
  uVar6 = 0;
  do {
    piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
    uVar2 = FUN_089174a8(param_1,1,uVar6 & 0xff);
    iVar5 = *piVar1 + ((int)(uVar2 + ((uint)((int)uVar2 >> 3) >> 0x1d)) >> 3);
    if ((int)uVar2 < 0) {
      uVar2 = -(-uVar2 & 7) & 0x1f;
    }
    else {
      uVar2 = uVar2 & 7;
    }
    uVar6 = uVar6 + 1;
    *(byte *)(iVar5 + 0x50e) = *(byte *)(iVar5 + 0x50e) | (byte)(1 << uVar2);
  } while ((int)uVar6 < 6);
  FUN_089176e4(param_1);
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  uVar4 = FUN_089d7d74(0xa0,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  ptr = (undefined *)FUN_089d7d74(4,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  DAT_08ac0e60 = ptr;
  memset_jak(ptr,0,4);
  FUN_08909df4(param_1,0);
  *(undefined4 *)(param_1 + 0x6c) = 0;
  iVar5 = FUN_089edb58();
  if (iVar5 == 0) {
    FUN_089eda24(0);
    iVar5 = FUN_089edb80();
    *(undefined4 *)(iVar5 + 0x10) = 0x469c4000;
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *DAT_08ac5934 = 0;
  DAT_08ac5934[1] = 0;
  DAT_08ac5934[2] = 0;
  DAT_08ac5934[3] = 0x3f800000;
  *(undefined *)(param_1 + 0x899) = *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c);
  *(undefined *)(*(int *)(param_1 + 0x20) + 0x3c) = 1;
  FUN_0890a560(param_1);
  return param_1;
}

