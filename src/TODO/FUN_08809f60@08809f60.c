#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08809f60(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined auStack_a0 [128];
  int local_20;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 < 1) {
    if (-1 < iVar3) {
      if (*(int *)(param_1 + 0x18) == 0) {
        local_20 = 0;
        FUN_089d8634();
        uVar1 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar2 = FUN_089d7d74(0x44,0,0);
        FUN_089d816c(uVar1);
        FUN_089d866c();
        iVar3 = local_20;
        if (iVar2 != 0) {
          FUN_089bd9b4(iVar2);
          iVar3 = iVar2;
        }
        *(int *)(param_1 + 0x18) = iVar3;
      }
      uVar1 = FUN_0880dc94();
      FUN_089b4c84(auStack_a0,"data/2d/%s/LanguageSetting.lzs",uVar1);
      iVar3 = FUN_089bda88(*(undefined4 *)(param_1 + 0x18),auStack_a0,10,1,1);
      if (iVar3 == 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x14) = 1;
      return;
    }
  }
  else if (iVar3 < 2) {
    if (*(int *)(param_1 + 0x18) == 0) {
      return;
    }
    iVar3 = FUN_089bdb90(*(int *)(param_1 + 0x18),1);
    if (iVar3 == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 2;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

