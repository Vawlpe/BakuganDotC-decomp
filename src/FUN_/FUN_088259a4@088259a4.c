#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088259a4(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_08b00200;
  while (iVar2 = DAT_08b00210, iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    FUN_088255fc();
  }
  while (iVar1 = DAT_08b00220, iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 4);
    FUN_088255fc();
  }
  while (iVar2 = DAT_08b00230, iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    FUN_088255fc();
  }
  while (iVar1 = DAT_08b00240, iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 4);
    FUN_088255fc();
  }
  while (iVar2 = DAT_08b00250, iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 4);
    FUN_088255fc();
  }
  while (iVar2 != 0) {
    iVar2 = *(int *)(iVar2 + 4);
    FUN_088255fc();
  }
  return;
}

