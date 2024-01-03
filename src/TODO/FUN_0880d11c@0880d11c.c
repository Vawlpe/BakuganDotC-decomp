#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880d11c(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = FUN_0880d0cc(param_1);
    memset_jak(*(undefined **)(param_1 + 4),0,300);
    uVar7 = 0xff;
    if (param_2 != '\0') {
      FUN_0880d0e8(param_1,uVar1 & 0x40000000);
    }
    iVar6 = 0;
    iVar4 = 0;
    do {
      iVar5 = 0;
      iVar3 = 0;
      do {
        iVar2 = DONE_Get_DAT_08AAC9E0();
        if (*(int *)(iVar2 + 4) != 0) {
          *(undefined4 *)(*(int *)(iVar2 + 4) + iVar4 + iVar3 + 0xd8) = uVar7;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar5 < 2);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar6 < 4);
    iVar6 = 0;
    iVar4 = 0;
    do {
      iVar5 = 0;
      iVar3 = 0;
      do {
        iVar2 = DONE_Get_DAT_08AAC9E0();
        if (*(int *)(iVar2 + 4) != 0) {
          *(undefined4 *)(*(int *)(iVar2 + 4) + iVar4 + iVar3 + 0xf8) = uVar7;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar5 < 2);
      iVar6 = iVar6 + 1;
      iVar4 = iVar4 + 8;
    } while (iVar6 < 4);
  }
  return;
}

