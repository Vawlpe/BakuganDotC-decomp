#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d39c0(void)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_08ac598c != (int *)0x0) {
    if (DAT_08ac598c[0x7e] == 0) {
      iVar2 = DAT_08ac598c[0x7b];
      piVar1 = DAT_08ac598c;
    }
    else {
      FUN_08a2e8ec(DAT_08ac598c[0x7e],3);
      piVar1 = DAT_08ac598c;
      DAT_08ac598c[0x7e] = 0;
      iVar2 = piVar1[0x7b];
    }
    if (iVar2 == 0) {
      iVar2 = *piVar1;
    }
    else {
      (**(code **)(*(int *)(iVar2 + 0x18) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x18) + 8),3);
      piVar1 = DAT_08ac598c;
      DAT_08ac598c[0x7b] = 0;
      iVar2 = *piVar1;
    }
    if (iVar2 != 0) {
      FUN_089d3c24(iVar2,3);
      piVar1 = DAT_08ac598c;
      *DAT_08ac598c = 0;
    }
    if (piVar1 != (int *)0x0) {
      FUN_089d8634();
      FUN_089d7fd8(DAT_08ac598c,0,0);
      FUN_089d866c();
      DAT_08ac598c = (int *)0x0;
    }
  }
  FUN_089cf530();
  FUN_089d20e4();
  FUN_089bb598(0x14d);
  FUN_089bbd80(0x12);
  return;
}

