#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0895266c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  code *pcVar3;
  short *psVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 0x28);
  if ((-1 < (int)uVar5) && (uVar5 < 5)) {
    iVar6 = param_1 + *(short *)(&DAT_08a9d510 + uVar5 * 8);
    pcVar3 = (code *)(&PTR_LAB_08a9d514)[uVar5 * 2];
    if (*(short *)(&DAT_08a9d512 + uVar5 * 8) != 0) {
      psVar4 = (short *)(*(int *)(pcVar3 + iVar6) + *(short *)(&DAT_08a9d512 + uVar5 * 8) * 8);
      pcVar3 = *(code **)(psVar4 + 2);
      iVar6 = iVar6 + *psVar4;
    }
    (*pcVar3)(iVar6);
  }
  cVar1 = *(char *)(param_1 + 0x4c);
  FUN_08909da4(param_1);
  if (cVar1 == '\0') {
    FUN_0890a4f8(param_1);
  }
  else {
    iVar6 = FUN_0881b22c();
    if (iVar6 != 0) {
      uVar2 = _DONE_GetPtr_DAT_08AB0300();
      FUN_0881b634(uVar2,0x8000000);
      uVar2 = _DONE_GetPtr_DAT_08AB0300();
      FUN_0881b620(uVar2,0x1000000);
    }
  }
  return;
}

