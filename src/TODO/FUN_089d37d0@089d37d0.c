#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d37d0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_089bb598(0xde);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  piVar2 = (int *)FUN_089d7d74(0x1fc,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  DAT_08ac598c = piVar2;
  memset_jak((undefined *)piVar2,0,0x1fc);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x1c,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_089ffd4c(iVar3,8);
    iVar4 = iVar3;
  }
  piVar2 = DAT_08ac598c;
  DAT_08ac598c[0x7b] = iVar4;
  piVar2[1] = 0;
  memcpy_jak(piVar2 + 2,"ULUS10536",9);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x5c,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_089d3b08(iVar3);
    iVar4 = iVar3;
  }
  *DAT_08ac598c = iVar4;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x10,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_08a2e7a4(iVar3,0x20);
    iVar4 = iVar3;
  }
  DAT_08ac598c[0x7e] = iVar4;
  FUN_089d1f98();
  FUN_089cf334();
  FUN_089d013c();
  WIP_Init_LoopThingIdk_Step(0x12,0,0);
  return;
}

