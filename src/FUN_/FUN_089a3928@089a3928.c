#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a3928(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  memset_jak(&DAT_08b01098,0,100);
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0xf0,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_08817708(iVar2,0,0);
    iVar3 = iVar2;
  }
  DAT_08b01098 = iVar3;
  FUN_08817a90(iVar3,1);
  *(undefined4 *)(DAT_08b01098 + 0xa8) = 0x3f4ccccd;
  *(undefined4 *)(DAT_08b01098 + 0xe0) = 0x447a0000;
  *(undefined4 *)(DAT_08b01098 + 0xdc) = 0x3f088889;
  strcpy(&DAT_08b010bc,&DAT_08a9f524);
  DAT_08b0109c = 0;
  DAT_08b010a0 = 0x3f800000;
  return;
}

