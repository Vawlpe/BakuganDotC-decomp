#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890f7b4(int param_1)

{
  code *pcVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((-1 < (int)uVar3) && (uVar3 < 4)) {
    iVar4 = param_1 + *(short *)(&DAT_08a9b590 + uVar3 * 8);
    pcVar1 = (code *)(&PTR_LAB_08a9b594)[uVar3 * 2];
    if (*(short *)(&DAT_08a9b592 + uVar3 * 8) != 0) {
      psVar2 = (short *)(*(int *)(pcVar1 + iVar4) + *(short *)(&DAT_08a9b592 + uVar3 * 8) * 8);
      pcVar1 = *(code **)(psVar2 + 2);
      iVar4 = iVar4 + *psVar2;
    }
    (*pcVar1)(iVar4);
  }
  FUN_08909da4(param_1);
  return;
}

