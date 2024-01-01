#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08941e18(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  bVar1 = true;
  iVar2 = FUN_0880d2e0();
  if (iVar2 != 0) {
    uVar3 = FUN_0880cc48();
    iVar2 = FUN_0880d7e0(uVar3,0x80);
    if (iVar2 != 0) {
      uVar3 = FUN_0880cc48();
      FUN_0880d808(uVar3,0x80);
      iVar2 = FUN_08816a90();
      if (iVar2 == 0) {
        FUN_08816868();
      }
      iVar2 = FUN_08816aac();
      *(undefined4 *)(iVar2 + 0x40) = 1;
      uVar3 = FUN_08816aac();
      FUN_08816c28(uVar3,0,0xe);
      return;
    }
  }
  iVar2 = FUN_08816a90();
  if (iVar2 != 0) {
    uVar3 = FUN_08816aac();
    iVar2 = FUN_08816e58(uVar3);
    if (iVar2 == 0) {
      bVar1 = false;
    }
  }
  if (bVar1) {
    *(undefined4 *)(param_1 + 0x28) = 4;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}

