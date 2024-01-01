#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d03c0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined local_60;
  undefined auStack_5f [63];
  int local_20;
  
  local_20 = 0;
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0xf0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = local_20;
  if (iVar2 != 0) {
    FUN_08817708(iVar2,0,0);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0xd8) = iVar3;
  FUN_08817a90(iVar3,3);
  *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0xa8) = 0x3f333333;
  *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0xdc) = 0x3f333333;
  *(undefined4 *)(*(int *)(param_1 + 0xd8) + 0xe0) = 0x43480000;
  *(undefined4 *)(*(int *)(param_1 + 0xd8) + 100) = *(undefined4 *)(param_1 + 0xe0);
  local_60 = 0;
  memset_jak(auStack_5f,0,0x3f);
  FUN_0880cc48();
  uVar1 = FUN_0880dd54();
  FUN_089b4c84(&local_60,"mes_Adventure_hint_%s.bin",uVar1);
  uVar1 = FUN_089be054(DAT_08ac520c,&local_60);
  *(undefined4 *)(param_1 + 0xdc) = uVar1;
  FUN_088cc354(uVar1);
  return;
}

