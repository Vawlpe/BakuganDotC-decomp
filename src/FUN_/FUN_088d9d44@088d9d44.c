#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d9d44(int param_1)

{
  code *pcVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x16c);
  if ((-1 < (int)uVar3) && (uVar3 < 2)) {
    iVar4 = param_1 + *(short *)(&DAT_08a96c40 + uVar3 * 8);
    pcVar1 = (code *)(&PTR_LAB_08a96c44)[uVar3 * 2];
    if (*(short *)(&DAT_08a96c42 + uVar3 * 8) != 0) {
      psVar2 = (short *)(*(int *)(pcVar1 + iVar4) + *(short *)(&DAT_08a96c42 + uVar3 * 8) * 8);
      pcVar1 = *(code **)(psVar2 + 2);
      iVar4 = iVar4 + *psVar2;
    }
    (*pcVar1)(iVar4);
  }
  FUN_088d9ccc(param_1);
  return;
}

