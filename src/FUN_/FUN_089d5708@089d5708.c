#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d5708(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (DAT_08ac5b80 != 0) {
    FUN_089d583c(DAT_08ac5b80,3);
    DAT_08ac5b80 = 0;
  }
  if (DAT_08ac5b7c != 0) {
    FUN_089d8634();
    FUN_089d7fd8(DAT_08ac5b7c,0,0);
    FUN_089d866c();
    DAT_08ac5b7c = 0;
  }
  iVar5 = 2;
  puVar4 = &DAT_08aa2d44;
  do {
    while( true ) {
      uVar1 = FUN_089cd83c();
      iVar2 = FUN_089cda14(uVar1,*puVar4);
      if (iVar2 != 0) break;
      zz_sceKernelDelayThreadCB(200);
    }
    iVar5 = iVar5 + -1;
    puVar4 = puVar4 + -1;
  } while (-1 < iVar5);
  do {
    zz_sceKernelDelayThreadCB(200);
    iVar5 = 0;
    iVar2 = 0;
    puVar4 = &DAT_08aa2d3c;
    do {
      uVar1 = FUN_089cd83c();
      iVar3 = FUN_089cdb50(uVar1,*puVar4);
      if (iVar3 == 0) {
        iVar5 = iVar5 + 1;
      }
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 1;
    } while (iVar2 < 3);
  } while (iVar5 != 0);
  return;
}

