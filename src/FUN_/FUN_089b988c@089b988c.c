#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089b988c(undefined4 param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  FUN_089b9a68();
  uVar4 = *(uint *)(PTR_DAT_08ac4720 + 4) & 0xfffffffc;
  iVar3 = ((uVar4 - param_2) + 0xfef) / 0x1000 - 1;
  if (iVar3 * 0x1000 < 0x1000) {
    FUN_089b9aa4(param_1);
    return 0;
  }
  puVar1 = (undefined *)FUN_089bacc4(param_1,0);
  if (puVar1 != PTR_DAT_08ac4720 + uVar4) {
    FUN_089b9aa4(param_1,iVar3 * -0x1000);
    return 0;
  }
  iVar2 = FUN_089bacc4(param_1);
  if (iVar2 != -1) {
    *(uint *)(PTR_DAT_08ac4720 + 4) = uVar4 + iVar3 * -0x1000 | 1;
    DAT_08ac4b34 = DAT_08ac4b34 + iVar3 * -0x1000;
    FUN_089b9aa4(param_1);
    return 1;
  }
  iVar3 = FUN_089bacc4(param_1,0);
  if (0xf < iVar3 - (int)PTR_DAT_08ac4720) {
    DAT_08ac4b34 = iVar3 - DAT_08ac4b28;
    *(uint *)(PTR_DAT_08ac4720 + 4) = iVar3 - (int)PTR_DAT_08ac4720 | 1;
  }
  FUN_089b9aa4(param_1);
  return 0;
}

