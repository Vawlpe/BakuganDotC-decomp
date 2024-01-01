#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882c178(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  uint uVar4;
  code *pcVar5;
  
  iVar1 = FUN_0880d354();
  if (iVar1 == 0) {
    uVar4 = *(uint *)(param_1 + 0xb0);
  }
  else {
    iVar1 = FUN_0884b248();
    if (iVar1 == 0) {
      uVar4 = *(uint *)(param_1 + 0xb0);
    }
    else {
      uVar2 = FUN_0884b268();
      FUN_0884f098(uVar2);
      uVar4 = *(uint *)(param_1 + 0xb0);
    }
  }
  if ((-1 < (int)uVar4) && (uVar4 < 10)) {
    param_1 = param_1 + *(short *)(&DAT_08a64bcc + uVar4 * 8);
    pcVar5 = (code *)(&PTR_FUN_08a64bd0)[uVar4 * 2];
    if (*(short *)(&DAT_08a64bce + uVar4 * 8) != 0) {
      psVar3 = (short *)(*(int *)(pcVar5 + param_1) + *(short *)(&DAT_08a64bce + uVar4 * 8) * 8);
      pcVar5 = *(code **)(psVar3 + 2);
      param_1 = param_1 + *psVar3;
    }
    (*pcVar5)(param_1);
  }
  return;
}

