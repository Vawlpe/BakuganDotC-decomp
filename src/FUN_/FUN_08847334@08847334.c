#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08847334(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  code *pcVar7;
  
  if (*(int *)(param_1 + 0x2a0) == 0) {
    FUN_089d7d18("host0:../../disc/~CTBattleCamera.txt");
  }
  *(undefined **)(param_1 + 0x400) = &UNK_08a65cc0 + *(int *)(*(int *)(param_1 + 0x2a0) + 8) * 0x1c;
  iVar4 = *(int *)(param_1 + 0x2ac) * 8;
  iVar5 = param_1 + *(short *)(&DAT_08aba75c + iVar4);
  if (*(short *)(&DAT_08aba75e + iVar4) == 0) {
    pcVar7 = (code *)(&PTR_FUN_08aba760)[*(int *)(param_1 + 0x2ac) * 2];
  }
  else {
    psVar6 = (short *)(*(int *)((&PTR_FUN_08aba760)[*(int *)(param_1 + 0x2ac) * 2] + iVar5) +
                      *(short *)(&DAT_08aba75e + *(int *)(param_1 + 0x2ac) * 8) * 8);
    pcVar7 = *(code **)(psVar6 + 2);
    iVar5 = iVar5 + *psVar6;
  }
  (*pcVar7)(iVar5);
  if (*(int *)(param_1 + 0x2ac) == 2) {
    iVar4 = *(int *)(param_1 + 0x2a8);
    uVar1 = *(undefined4 *)(iVar4 + 0x24);
    uVar2 = *(undefined4 *)(iVar4 + 0x28);
    uVar3 = *(undefined4 *)(iVar4 + 0x2c);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(param_1 + 0x2f4) = uVar1;
    *(undefined4 *)(param_1 + 0x2f8) = uVar2;
    *(undefined4 *)(param_1 + 0x2fc) = uVar3;
  }
  else {
    *(undefined4 *)(param_1 + 0x158) = 0x42480000;
    iVar4 = *(int *)(param_1 + 0x2a0);
    uVar1 = *(undefined4 *)(iVar4 + 0x24);
    uVar2 = *(undefined4 *)(iVar4 + 0x28);
    uVar3 = *(undefined4 *)(iVar4 + 0x2c);
    *(undefined4 *)(param_1 + 0x2f0) = *(undefined4 *)(iVar4 + 0x20);
    *(undefined4 *)(param_1 + 0x2f4) = uVar1;
    *(undefined4 *)(param_1 + 0x2f8) = uVar2;
    *(undefined4 *)(param_1 + 0x2fc) = uVar3;
  }
  *(undefined4 *)(param_1 + 0x40) = 0x41f00000;
  FUN_0884723c(param_1);
  FUN_089e2b14(param_1,1);
  return;
}

