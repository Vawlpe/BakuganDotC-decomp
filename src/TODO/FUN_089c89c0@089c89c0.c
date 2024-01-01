#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089c89c0(int param_1)

{
  code *pcVar1;
  short *psVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar3 = *(int *)(param_1 + 0x10) * 8;
    param_1 = param_1 + *(short *)(&DAT_08ac5884 + iVar3);
    pcVar1 = *(code **)(&DAT_08ac5888 + iVar3);
    if (*(short *)(&DAT_08ac5886 + iVar3) != 0) {
      psVar2 = (short *)(*(int *)(pcVar1 + param_1) + *(short *)(&DAT_08ac5886 + iVar3) * 8);
      pcVar1 = *(code **)(psVar2 + 2);
      param_1 = param_1 + *psVar2;
    }
    (*pcVar1)(param_1);
    return;
  }
  FUN_089bf7a8(param_1,1);
  return;
}

