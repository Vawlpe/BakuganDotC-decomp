#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e5d88(int param_1)

{
  int iVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  if ((-1 < *(int *)(param_1 + 0x3a4)) && (*(int *)(param_1 + 0x3a4) < 3)) {
    *(undefined4 *)(param_1 + 0x80) = in_V72;
    *(undefined4 *)(param_1 + 0x84) = in_V76;
    *(undefined4 *)(param_1 + 0x88) = in_V7A;
    *(undefined4 *)(param_1 + 0x8c) = in_V7E;
    iVar1 = *(int *)(param_1 + 0x3a4) * 8;
    iVar4 = param_1 + *(short *)(&DAT_08a98d08 + iVar1);
    pcVar2 = (code *)(&PTR_FUN_08a98d0c)[*(int *)(param_1 + 0x3a4) * 2];
    if (*(short *)(&DAT_08a98d0a + iVar1) != 0) {
      psVar3 = (short *)(*(int *)(pcVar2 + iVar4) + *(short *)(&DAT_08a98d0a + iVar1) * 8);
      pcVar2 = *(code **)(psVar3 + 2);
      iVar4 = iVar4 + *psVar3;
    }
    (*pcVar2)(iVar4);
  }
  (**(code **)(*(int *)(param_1 + 0x14) + 0x184))
            (param_1 + *(short *)(*(int *)(param_1 + 0x14) + 0x180));
  return;
}

