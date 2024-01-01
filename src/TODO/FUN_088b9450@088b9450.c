#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088b9450(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined auVar1 [12];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_V7D;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_28;
  
  local_28 = param_2;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar3 = FUN_089d7d74(0x200,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar4 = 0;
  if (iVar3 != 0) {
    FUN_088b8078(iVar3,local_28);
    iVar4 = iVar3;
  }
  if (iVar4 != 0) {
    auVar1 = vscl_t(*(undefined (*) [12])(iVar4 + 0x40),param_1);
    *(int *)*(undefined (*) [12])(iVar4 + 0x40) = auVar1._0_4_;
    *(int *)(iVar4 + 0x44) = auVar1._4_4_;
    *(int *)(iVar4 + 0x48) = auVar1._8_4_;
    *(undefined4 *)(iVar4 + 0x4c) = in_V7D;
    if (param_4 != 0) {
      FUN_0889d57c(param_4,iVar4 + 0x20);
      FUN_088b87bc(*(undefined4 *)(param_4 + 0xc),iVar4);
    }
    iVar3 = FUN_0889da6c();
    if (iVar3 == 0) {
      *(undefined4 *)(iVar4 + 0x6c) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x60) = 0x3f333333;
      *(undefined4 *)(iVar4 + 100) = 0x3f333333;
      *(undefined4 *)(iVar4 + 0x68) = 0x3f333333;
    }
    else {
      *(undefined4 *)(iVar4 + 0x70) = 0x3ee66666;
      *(undefined4 *)(iVar4 + 0x74) = 0x3ee66666;
      *(undefined4 *)(iVar4 + 0x78) = 0x3f0ccccd;
      *(undefined4 *)(iVar4 + 0x7c) = 0x3f800000;
      *(undefined4 *)(iVar4 + 0x60) = 0x3ecccccd;
      *(undefined4 *)(iVar4 + 100) = 0x3ecccccd;
      *(undefined4 *)(iVar4 + 0x68) = 0x3ecccccd;
      *(undefined4 *)(iVar4 + 0x6c) = 0x3f800000;
      local_40 = 0x3e99999a;
      local_3c = 0x3e99999a;
      local_38 = 0x3e99999a;
      local_34 = 0x3f800000;
      FUN_089e0344(0x41200000,iVar4,&local_40,0);
    }
  }
  return iVar4;
}

