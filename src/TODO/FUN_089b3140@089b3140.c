#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b3140(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined auStack_a0 [128];
  int local_20;
  
  iVar3 = *(int *)(param_1 + 0x74);
  if (iVar3 < 1) {
    if ((-1 < iVar3) && (iVar3 = FUN_088660e0(), iVar3 != 0)) {
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar3 + 8);
      DONE_Get_DAT_08AAC9E0();
      uVar1 = FUN_0880dc94();
      FUN_089b4c84(auStack_a0,"data/2d/%s/combolist/%s.lzs",uVar1,
                   *(undefined4 *)(&DAT_08ac439c + *(int *)(param_1 + 0x70) * 4));
      if (*(int *)(param_1 + 0x6c) == 0) {
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
        *(int *)(param_1 + 0x6c) = iVar3;
      }
      iVar3 = FUN_089bda88(*(undefined4 *)(param_1 + 0x6c),auStack_a0,10,1,1);
      if (iVar3 != 0) {
        *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
      }
    }
  }
  else if ((iVar3 < 2) && (iVar3 = FUN_089bdb90(*(undefined4 *)(param_1 + 0x6c),1), iVar3 != 0)) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  }
  return;
}

