#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void _WIP_Main_EndOfFrame_WeirdBuffWrapper___(unknown_buffer *weird_buff)

{
  bool bVar1;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined3 extraout_var;
  
  if (weird_buff[1].field0_0x0[0] == uVar4) {
    iVar1 = _WIP_WeirdBuff_SetLocaleInfo(weird_buff);
    weird_buff[1].field0_0x0[0] = iVar1 != 0;
  }
  _WIP_WeirdBuff_ReadCtrl(weird_buff,true);
  iVar1 = _DONE_NotZero_DAT_08AAC9E0();
  if (iVar1 != 0) {
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880d6a0(uVar2);
  }
  iVar3 = _DONE_NotZero_DAT_08AC5258();
  iVar1 = DAT_08ac5c90;
  if (iVar3 != 0) {
    if (DAT_08ac5c90 != 0) {
      uVar2 = _DONE_Get_DAT_08AC5258();
      FUN_089c004c(*(undefined4 *)(iVar1 + 0x150),uVar2,0,0);
    }
    bVar1 = _DONE_NotZero_DAT_08AC5278();
    if (CONCAT31(extraout_var,bVar1) != 0) {
      uVar2 = _DONE_GetPtr_DAT_08AC5278();
      FUN_089c2668(uVar2);
    }
    uVar2 = _DONE_Get_DAT_08AC5258();
    FUN_089c0a80(uVar2);
  }
  return;
}

