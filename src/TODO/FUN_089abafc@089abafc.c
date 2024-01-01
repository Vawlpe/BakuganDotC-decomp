#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089abafc(int param_1)

{
  char cVar1;
  code *pcVar2;
  short *psVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_1 + 0x28);
  if ((-1 < (int)uVar4) && (uVar4 < 4)) {
    iVar5 = param_1 + *(short *)(&DAT_08a9f6c8 + uVar4 * 8);
    pcVar2 = (code *)(&PTR_FUN_08a9f6cc)[uVar4 * 2];
    if (*(short *)(&DAT_08a9f6ca + uVar4 * 8) != 0) {
      psVar3 = (short *)(*(int *)(pcVar2 + iVar5) + *(short *)(&DAT_08a9f6ca + uVar4 * 8) * 8);
      pcVar2 = *(code **)(psVar3 + 2);
      iVar5 = iVar5 + *psVar3;
    }
    (*pcVar2)(iVar5);
  }
  cVar1 = *(char *)(param_1 + 0x4c);
  FUN_08909da4(param_1);
  if (cVar1 == '\0') {
    FUN_0890a4f8(param_1);
  }
  return;
}

