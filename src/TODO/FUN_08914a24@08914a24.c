#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08914a24(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined auStack_220 [512];
  
  iVar2 = *(int *)(param_1 + 0x16a4);
  if (0 < iVar2) {
    if (1 < iVar2) {
      return 1;
    }
    DAT_08ac0e70 = 1;
    iVar2 = FUN_089bf93c(0x1fe,1);
    if (iVar2 != 0) {
      return 0;
    }
    iVar2 = FUN_0890e868();
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 0x16a0) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x16a0) = 0;
    }
    *(undefined4 *)(param_1 + 0x16a4) = 2;
    return 0;
  }
  if (iVar2 < 0) {
    return 1;
  }
  DAT_08ac0e70 = 1;
  iVar2 = FUN_089bf6e8(0x1fe,100);
  iVar1 = FUN_0880dc00("DMUpgrade");
  FUN_088cc354(iVar1);
  if (param_2 < 1) {
    if (param_2 < 0) {
      iVar2 = *(int *)(param_1 + 0x16a4);
      goto LAB_08914b78;
    }
    FUN_0890e844(*(undefined4 *)(iVar1 + 0x6c));
    *(undefined4 *)(iVar2 + 0x7c) = 0;
    *(undefined4 *)(iVar2 + 0x84) = 1;
  }
  else {
    if (1 < param_2) {
      iVar2 = *(int *)(param_1 + 0x16a4);
      goto LAB_08914b78;
    }
    uVar3 = *(undefined4 *)(PTR_PTR_DAT_08aae714 + 100);
    iVar1 = FUN_08913084(*(undefined4 *)(param_1 + 0x16a8),*(undefined4 *)(param_1 + 0x1698),
                         PTR_PTR_DAT_08aae714,uVar3);
    FUN_089b4c84(auStack_220,uVar3,(int)*(short *)(&DAT_08a9bbcc + iVar1 * 4));
    uVar3 = FUN_08816aac();
    FUN_08816ba4(uVar3,auStack_220);
    iVar1 = FUN_08816aac();
    FUN_0890e844(*(undefined4 *)(iVar1 + 0xc));
    *(undefined4 *)(iVar2 + 0x7c) = 1;
    *(undefined4 *)(iVar2 + 0x84) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x16a4);
LAB_08914b78:
  *(int *)(param_1 + 0x16a4) = iVar2 + 1;
  return 0;
}

