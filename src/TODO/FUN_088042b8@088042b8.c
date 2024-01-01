#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088042b8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined **ppuVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar7 = 0;
  iVar5 = 0;
  ppuVar4 = &PTR_DAT_08aac764;
  ppuVar6 = ppuVar4;
  do {
    iVar1 = FUN_089be500(*ppuVar6);
    iVar7 = iVar7 + 1;
    iVar5 = iVar5 + iVar1;
    ppuVar6 = ppuVar6 + 2;
  } while (iVar7 < 0xe);
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar5 = FUN_089d7d74(iVar5,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  iVar1 = 0;
  DAT_08aac7d4 = iVar5;
  FUN_089d8634();
  uVar2 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar7 = FUN_089d7d74(0x1190,0,0);
  FUN_089d816c(uVar2);
  FUN_089d866c();
  if (iVar7 != 0) {
    iVar1 = FUN_08a02cb4(iVar7 + DAT_08af1178,0xe,0x140,FUN_08a294e4,0);
  }
  iVar7 = 0;
  iVar8 = 0;
  do {
    iVar3 = FUN_089be500(*ppuVar4);
    iVar9 = iVar7 + iVar5;
    FUN_089be538(*ppuVar4,iVar9);
    zz_sceKernelDcacheWritebackInvalidateRange(iVar9,iVar3);
    FUN_089f6e78(iVar1,ppuVar4[1],iVar9,1);
    iVar8 = iVar8 + 1;
    iVar7 = iVar3 + iVar7;
    ppuVar4 = ppuVar4 + 2;
    iVar1 = iVar1 + 0x140;
  } while (iVar8 < 0xe);
  FUN_0890a5b8();
  FUN_08804000(0xffffffff);
  FUN_0880908c();
  FUN_08809148();
  return;
}

