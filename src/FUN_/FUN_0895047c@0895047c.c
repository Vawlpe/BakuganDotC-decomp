#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895047c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 < 1) {
    if (-1 < iVar3) {
      if (*(int *)(param_1 + 0x6c) == 0) {
        FUN_089d8634();
        uVar1 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar2 = FUN_089d7d74(0x44,0,0);
        FUN_089d816c(uVar1);
        FUN_089d866c();
        iVar3 = 0;
        if (iVar2 != 0) {
          FUN_089bd9b4(iVar2);
          iVar3 = iVar2;
        }
        *(int *)(param_1 + 0x6c) = iVar3;
      }
      iVar3 = FUN_089bda88(*(undefined4 *)(param_1 + 0x6c),"data/sysmenu.lzs",10,1,0);
      if (iVar3 == 0) {
        return;
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
    iVar3 = *(int *)(param_1 + 0x28);
  }
  else {
    if (iVar3 < 2) {
      iVar3 = FUN_089bdb90(*(undefined4 *)(param_1 + 0x6c),1);
      if (iVar3 == 0) {
        return;
      }
      FUN_08909e8c(param_1,"title.fab",0);
      *(undefined *)(**(int **)(param_1 + 0x50) + 0x9c) = 1;
      *(undefined4 *)(**(int **)(param_1 + 0x50) + 0x98) = 0x41200000;
      FUN_089f8a28(param_1 + 0x54);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
      return;
    }
    iVar3 = *(int *)(param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(int *)(param_1 + 0x28) = iVar3 + 1;
  return;
}

