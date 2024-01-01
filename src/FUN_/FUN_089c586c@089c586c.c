#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c586c(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_08ac5874 == 0) goto LAB_089c593c;
  iVar2 = *(int *)(DAT_08ac5874 + 8);
  if (iVar2 < 2) {
    if (iVar2 < 1) {
      iVar2 = *(int *)(DAT_08ac5874 + 8);
      goto joined_r0x089c58f8;
    }
LAB_089c58ec:
    *(undefined4 *)(DAT_08ac5874 + 8) = 6;
    iVar2 = *(int *)(DAT_08ac5874 + 8);
  }
  else if (iVar2 < 5) {
    if (iVar2 < 4) goto LAB_089c58dc;
    iVar2 = *(int *)(DAT_08ac5874 + 8);
  }
  else {
    if (iVar2 < 6) {
LAB_089c58dc:
      FUN_08a1fe30();
      goto LAB_089c58ec;
    }
    iVar2 = *(int *)(DAT_08ac5874 + 8);
  }
joined_r0x089c58f8:
  while (iVar2 != 0) {
    zz_sceKernelDelayThreadCB(100);
    FUN_089c6d14(DAT_08ac5874);
    iVar2 = *(int *)(DAT_08ac5874 + 8);
  }
  if (DAT_08ac5874 != 0) {
    FUN_089c5ae0(DAT_08ac5874,3);
    DAT_08ac5874 = 0;
  }
LAB_089c593c:
  iVar3 = 0;
  iVar2 = 0;
  do {
    uVar1 = FUN_089fce94();
    FUN_089fd4a0(uVar1,DAT_08ac5870 + iVar2 + 0xc,*(undefined4 *)(DAT_08ac5870 + iVar2 + 0xc));
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
  } while (iVar3 < 0x20);
  uVar1 = FUN_089fce94();
  FUN_089fd4a0(uVar1,DAT_08ac5870 + 0x8c,*(undefined4 *)(DAT_08ac5870 + 0x8c));
  if (DAT_08ac5870 != 0) {
    FUN_089d8634();
    FUN_089d7fd8(DAT_08ac5870,0,0);
    FUN_089d866c();
    DAT_08ac5870 = 0;
  }
  return;
}

