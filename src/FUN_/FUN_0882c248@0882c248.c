#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0882c248(int param_1)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  code *pcVar4;
  
  iVar1 = FUN_0882c220(0);
  if (iVar1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xb0);
    if ((-1 < (int)uVar3) && (uVar3 < 10)) {
      param_1 = param_1 + *(short *)(&DAT_08a64c1c + uVar3 * 8);
      pcVar4 = (code *)(&PTR_FUN_08a64c20)[uVar3 * 2];
      if (*(short *)(&DAT_08a64c1e + uVar3 * 8) != 0) {
        psVar2 = (short *)(*(int *)(pcVar4 + param_1) + *(short *)(&DAT_08a64c1e + uVar3 * 8) * 8);
        param_1 = param_1 + *psVar2;
        pcVar4 = *(code **)(psVar2 + 2);
      }
      (*pcVar4)(param_1);
    }
  }
  return;
}

