#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a8cf8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

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
  iVar2 = FUN_089d7d74(0x340,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_088a8a64(iVar2,local_18,local_1c,local_20);
    iVar3 = iVar2;
  }
  FUN_088aca0c(iVar3);
  FUN_088a8f2c(auStack_30,iVar3 + 0x20,0x3fbf2500);
  iVar2 = FUN_08823f5c(DAT_08abd5b0,0x12d,auStack_30);
  *(int *)(iVar2 + 0x1fc) = iVar3;
  if (iVar3 != 0) {
    *(undefined4 *)(iVar2 + 0x200) = *(undefined4 *)(iVar3 + 0xc);
  }
  return iVar3;
}

