#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089ce6dc(unkown_buffer *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1[1].field_0x10 == '\0') {
    iVar1 = FUN_089ce634(param_1);
    param_1[1].field_0x10 = iVar1 != 0;
  }
  _WIP_CtrlBuff_Read(param_1,true);
  iVar1 = FUN_0880d2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_0880cc48();
    FUN_0880d6a0(uVar2);
  }
  iVar3 = FUN_089bffd4();
  iVar1 = DAT_08ac5c90;
  if (iVar3 != 0) {
    if (DAT_08ac5c90 != 0) {
      uVar2 = FUN_089bfff0();
      FUN_089c004c(*(undefined4 *)(iVar1 + 0x150),uVar2,0,0);
    }
    iVar1 = FUN_089c263c();
    if (iVar1 != 0) {
      uVar2 = FUN_089c2658();
      FUN_089c2668(uVar2);
    }
    uVar2 = FUN_089bfff0();
    FUN_089c0a80(uVar2);
  }
  return;
}
