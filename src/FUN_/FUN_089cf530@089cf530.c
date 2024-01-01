#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089cf530(void)

{
  int *piVar1;
  int iVar2;
  
  DAT_08ac593c = 0;
  if (DAT_08ac5938 != (int *)0x0) {
    FUN_089bb728(DAT_08ac5938[1]);
    iVar2 = *DAT_08ac5938;
    if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 4))) {
      piVar1 = (int *)FUN_08a31570(iVar2);
      if (piVar1 != (int *)0x0) {
        iVar2 = piVar1[3];
        while( true ) {
          piVar1 = (int *)*piVar1;
          if (iVar2 != 0) {
            FUN_089d03c4(iVar2,3);
          }
          if (piVar1 == (int *)0x0) break;
          iVar2 = piVar1[3];
        }
      }
      FUN_08a313f8(*DAT_08ac5938);
    }
    iVar2 = DAT_08ac5940;
    if (DAT_08ac5940 != 0) {
      FUN_089d8634();
      FUN_089d7fd8(iVar2,0,0);
      FUN_089d866c();
      DAT_08ac5940 = 0;
    }
    FUN_089bb790(DAT_08ac5938[1]);
    if (DAT_08ac5938[1] == 0) {
      iVar2 = *DAT_08ac5938;
      piVar1 = DAT_08ac5938;
    }
    else {
      FUN_089bb668(DAT_08ac5938[1],3);
      piVar1 = DAT_08ac5938;
      DAT_08ac5938[1] = 0;
      iVar2 = *piVar1;
    }
    if (iVar2 != 0) {
      FUN_08a310b8(iVar2,3);
      piVar1 = DAT_08ac5938;
      *DAT_08ac5938 = 0;
    }
    if (piVar1 != (int *)0x0) {
      FUN_089d8634();
      FUN_089d7fd8(DAT_08ac5938,0,0);
      FUN_089d866c();
      DAT_08ac5938 = (int *)0x0;
    }
  }
  FUN_089d29c0();
  return;
}

