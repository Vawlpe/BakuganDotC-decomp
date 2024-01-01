#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088e5a50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  FUN_088dc684();
  *(undefined **)(param_1 + 0x14) = &DAT_08af3b74;
  *(undefined4 *)(param_1 + 0x428) = 0;
  *(undefined2 *)(param_1 + 0x430) = 0xffff;
  *(undefined4 *)(param_1 + 0x3ac) = DAT_08ac520c;
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  *(undefined4 *)(param_1 + 0x35c) = 0;
  *(undefined4 *)(param_1 + 0x360) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  *(undefined4 *)(param_1 + 0x370) = in_V72;
  *(undefined4 *)(param_1 + 0x374) = in_V76;
  *(undefined4 *)(param_1 + 0x378) = in_V7A;
  *(undefined4 *)(param_1 + 0x37c) = in_V7E;
  *(undefined4 *)(param_1 + 0x3c0) = in_V72;
  *(undefined4 *)(param_1 + 0x3c4) = in_V76;
  *(undefined4 *)(param_1 + 0x3c8) = in_V7A;
  *(undefined4 *)(param_1 + 0x3cc) = in_V7E;
  *(undefined4 *)(param_1 + 0x3d0) = in_V72;
  *(undefined4 *)(param_1 + 0x3d4) = in_V76;
  *(undefined4 *)(param_1 + 0x3d8) = in_V7A;
  *(undefined4 *)(param_1 + 0x3dc) = in_V7E;
  *(undefined4 *)(param_1 + 0x380) = in_V72;
  *(undefined4 *)(param_1 + 900) = in_V76;
  *(undefined4 *)(param_1 + 0x388) = in_V7A;
  *(undefined4 *)(param_1 + 0x38c) = in_V7E;
  *(undefined4 *)(param_1 + 0x364) = 0;
  *(undefined4 *)(param_1 + 0x404) = 0x43480000;
  *(undefined4 *)(param_1 + 0x408) = 0x428c0000;
  *(undefined4 *)(param_1 + 0x40c) = 0x3e860a92;
  *(undefined4 *)(param_1 + 0x410) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3e0) = 0;
  *(undefined4 *)(param_1 + 0x3f0) = in_V72;
  *(undefined4 *)(param_1 + 0x3f4) = in_V76;
  *(undefined4 *)(param_1 + 0x3f8) = in_V7A;
  *(undefined4 *)(param_1 + 0x3fc) = in_V7E;
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined *)(param_1 + 0x400) = 0;
  iVar1 = FUN_088be274();
  uVar4 = *(undefined4 *)(iVar1 + 0x610);
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x28,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar1 = 0;
  if (iVar3 != 0) {
    FUN_088e9a28(iVar3);
    iVar1 = iVar3;
  }
  *(int *)(param_1 + 0x418) = iVar1;
  uVar2 = FUN_088c7598(uVar4);
  FUN_088e9b08(iVar1,uVar2,param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x414) = 0;
  *(undefined4 *)(param_1 + 0x424) = 0x3d0efa35;
  *(undefined4 *)(param_1 + 0x42c) = *(undefined4 *)(param_1 + 0x3a0);
  *(undefined *)(param_1 + 0x432) = 0;
  *(undefined *)(param_1 + 0x433) = 0;
  *(undefined *)(param_1 + 0x434) = 0;
  return param_1;
}

