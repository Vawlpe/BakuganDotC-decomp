#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a743c(int param_1,char param_2)

{
  int iVar1;
  float fVar2;
  
  memset_jak((undefined *)(param_1 + 0x168),0,0x28);
  iVar1 = *(int *)(param_1 + 0x1c);
  if (param_2 == '\0') {
    *(short *)(param_1 + 0x17e) = (short)(int)(*(float *)(*(int *)(iVar1 + 0x18) + 100) + 20.0);
    *(short *)(param_1 + 0x17c) = (short)(int)*(float *)(*(int *)(iVar1 + 0x18) + 100);
    fVar2 = (float)FUN_089a4b3c((float)(int)*(short *)(param_1 + 0x17e),
                                (float)(int)*(short *)(param_1 + 0x17c));
    *(short *)(param_1 + 0x180) = (short)(int)fVar2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x90);
  }
  else {
    *(short *)(param_1 + 0x17e) = (short)(int)(*(float *)(*(int *)(iVar1 + 0x18) + 100) - 20.0);
    *(short *)(param_1 + 0x17c) = (short)(int)*(float *)(*(int *)(iVar1 + 0x18) + 100);
    fVar2 = (float)FUN_089a4b3c((float)(int)*(short *)(param_1 + 0x17e),
                                (float)(int)*(short *)(param_1 + 0x17c));
    *(short *)(param_1 + 0x180) = (short)(int)fVar2;
    *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x90);
  }
  return;
}

