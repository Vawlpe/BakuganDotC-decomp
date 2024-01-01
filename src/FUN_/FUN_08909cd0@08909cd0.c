#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08909cd0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 in_V7C;
  
  uVar3 = vmul_s((float)(*(int *)(param_1 + 0x48) * 3) * 0.01745329,in_V7C);
  fVar4 = (float)vcos_s(uVar3);
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_089ed1d8(1.0 - ABS(fVar4),*(int *)(param_1 + 0x34),*(undefined4 *)(param_1 + 0x3c),
                 *(undefined4 *)(param_1 + 0x40));
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar2 = *(int *)(param_1 + 0x48);
  }
  else {
    FUN_089ed1d8(1.0 - ABS(fVar4),*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x44),
                 *(undefined4 *)(param_1 + 0x40));
    iVar2 = *(int *)(param_1 + 0x48);
  }
  iVar1 = 0;
  if (iVar2 < 0x3c) {
    iVar1 = *(int *)(DAT_08ac5934 + 0x1c) + iVar2 + 1;
  }
  *(int *)(param_1 + 0x48) = iVar1;
  return;
}

