#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08842654(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  int aiStack_d0 [48];
  
  iVar1 = FUN_0883f6e4(param_1,param_3);
  memcpy_jak(aiStack_d0,&DAT_08aba5b0,0xc0);
  iVar3 = 0;
  piVar2 = aiStack_d0 + param_3 * 3;
  do {
    if (iVar1 < 100) {
      pfVar4 = (float *)(*(int *)(*(int *)(param_1 + 0x60) + *piVar2 * 4) + 0x90);
      if (iVar1 < 10) {
        *pfVar4 = *pfVar4 - 12.0;
      }
      else {
        *pfVar4 = *pfVar4 - 6.0;
      }
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 3);
  return;
}

