#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 _WIP_Main(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  zz_sceKernelChangeCurrentThreadAttr(0,0x4000);
  while (iVar2 = _DONE_NotZero_DAT_08AC61E8(), iVar2 == 0) {
    zz_sceDisplayWaitVblankStartCB();
  }
  while (iVar2 = _DONE_NotZero_DAT_08AC61F8(), iVar2 == 0) {
    zz_sceDisplayWaitVblankStartCB();
  }
  viim_s(0xff);
  vcst_s(9);
  vcst_s(5);
  vzero_s();
  vzero_q();
  vidt_q();
  FUN_089ce7a8();
  FUN_089ce9b0();
  FUN_089cb844();
  FUN_089bfb34();
  FUN_089cbe1c();
  FUN_088042b8();
  FUN_089bec88();
  FUN_089becd8();
  bVar1 = false;
  do {
    if (!bVar1) {
      uVar3 = _DONE_Get_DAT_08AC58D0();
      iVar2 = FUN_089cba7c(uVar3);
      if (iVar2 == 0) {
        FUN_089cbf64();
        FUN_089bfbb8();
        FUN_089cb8d8();
        FUN_089ce82c();
        return 0;
      }
      iVar2 = FUN_089cc058();
      if (iVar2 != 0) {
        uVar3 = _DONE_GetPtr_DAT_08AC58E0();
        FUN_089cc0ec(uVar3);
      }
    }
    iVar2 = FUN_0881b22c();
    if (iVar2 != 0) {
      uVar3 = _DONE_GetPtr_DAT_08AB0300();
      FUN_0881bbe4(uVar3);
    }
    FUN_089bf518(DAT_08ac524c);
    iVar2 = FUN_0881b22c();
    if (iVar2 != 0) {
      uVar3 = _DONE_GetPtr_DAT_08AB0300();
      FUN_0881bd80(uVar3);
    }
    bVar1 = false;
    iVar2 = FUN_089bc814();
    if (iVar2 != 0) {
      uVar3 = _DONE_GetPtr_DAT_08AC51F8();
      iVar2 = FUN_089bc984(uVar3);
      if (iVar2 == 0) {
        bVar1 = true;
      }
    }
    FUN_089bf624(DAT_08ac524c);
    FUN_089cea60();
    while (iVar2 = _DONE_Get_DAT_08AC4ED0(), iVar2 != 0) {
      zz_sceDisplayWaitVblankStartCB();
    }
    _WIP_Main_EndOfFrame_WeirdBuffWrapper___(WeirdBuff);
  } while( true );
}

