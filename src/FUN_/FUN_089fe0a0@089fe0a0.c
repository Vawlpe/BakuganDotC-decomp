#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089fe0a0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_089d8634();
  uVar1 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar2 = FUN_089d7d74(0x34,0,0);
  FUN_089d816c(uVar1);
  FUN_089d866c();
  iVar3 = 0;
  if (iVar2 != 0) {
    FUN_089fe188(iVar2);
    iVar3 = iVar2;
  }
  DAT_08ac61f8 = iVar3;
  *(undefined **)(iVar3 + 0x2c) = PTR_s_CODecodeMng_m_pcListMng_08ac61fc;
  FUN_089d8ff0(iVar3);
  return DAT_08ac61f8;
}

