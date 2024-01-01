#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088b9eac(int param_1,undefined4 param_2)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x2ac);
  iVar1 = iVar5 * 8;
  iVar4 = (int)*(short *)(&DAT_08a91ae6 + iVar1);
  pcVar2 = *(code **)(&DAT_08a91ae8 + iVar1);
  if (((iVar4 == 0) && (*(short *)(&DAT_08a91ae4 + iVar1) == 0)) && (pcVar2 == (code *)0x0)) {
    iVar1 = *(int *)(param_1 + 0x2a8);
  }
  else {
    iVar1 = param_1 + *(short *)(&DAT_08a91ae4 + iVar1);
    if (iVar4 != 0) {
      psVar3 = (short *)(*(int *)(pcVar2 + iVar1) + iVar4 * 8);
      pcVar2 = *(code **)(psVar3 + 2);
      iVar1 = iVar1 + *psVar3;
    }
    (*pcVar2)(iVar1);
    iVar5 = *(int *)(param_1 + 0x2ac);
    iVar1 = *(int *)(param_1 + 0x2a8);
  }
  if (iVar5 != iVar1) {
    *(int *)(param_1 + 0x2a8) = iVar5;
  }
  *(undefined4 *)(param_1 + 0x2ac) = param_2;
  return;
}

