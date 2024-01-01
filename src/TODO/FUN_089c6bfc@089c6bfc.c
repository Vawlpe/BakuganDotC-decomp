#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c6bfc(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = _DONE_Get_DAT_08AC5874();
  if (*(int *)(iVar1 + 0x18) == 0) {
    uVar2 = _DONE_GetPtr_DAT_08AC51F8();
    iVar3 = FUN_089bcb80(uVar2,0x1a0000,"c:/bullets/bkn2pspsys/src/pspsys/sys/Sound/COSoundSndp.cpp"
                         ,0x8f9);
    uVar2 = _DONE_GetPtr_DAT_08AC51F8();
    iVar4 = FUN_089bcb80(uVar2,0x1a0000,"c:/bullets/bkn2pspsys/src/pspsys/sys/Sound/COSoundSndp.cpp"
                         ,0x8fa);
    *(int *)(iVar1 + 0x18) = iVar3;
    iVar5 = FUN_089c2b10(0);
    if (iVar5 != 0) {
      uVar2 = FUN_089c2b48(0);
      FUN_089c323c(uVar2,iVar3);
      uVar2 = FUN_089c2b48(0);
      FUN_089c38d8(uVar2);
    }
    iVar5 = FUN_089c2b10(1);
    if (iVar5 != 0) {
      uVar2 = FUN_089c2b48(1);
      FUN_089c323c(uVar2,iVar4);
      uVar2 = FUN_089c2b48(1);
      FUN_089c38d8(uVar2);
    }
    if ((iVar3 != 0) && (iVar4 != 0)) {
      *(undefined *)(iVar1 + 0x1d) = 1;
      *(undefined *)(iVar1 + 0x1c) = 0;
    }
  }
  return;
}

