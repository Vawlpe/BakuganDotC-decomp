#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a7360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined auStack_30 [16];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = param_3;
  local_1c = param_2;
  local_18 = param_1;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x3d0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_088a6ca8(iVar2,local_18,local_1c,local_20);
    iVar3 = iVar2;
  }
  FUN_088aca0c(iVar3);
  FUN_088a8f2c(auStack_30,iVar3 + 0x20,0x3fbf2500);
  iVar2 = FUN_08824594(DAT_08abd5b0,*(int *)(iVar3 + 0x328) + 0x3c,auStack_30,iVar3);
  uVar1 = *(undefined4 *)(iVar3 + 0x3ac);
  *(undefined4 *)(iVar2 + 0x70) = uVar1;
  *(undefined4 *)(iVar2 + 0x74) = 0x43160000;
  *(undefined4 *)(iVar2 + 0x78) = uVar1;
  *(undefined4 *)(iVar2 + 0x7c) = 0;
  *(float *)(iVar2 + 0xbc) = *(float *)(iVar3 + 0x3ac) * 0.0001;
  return iVar3;
}

