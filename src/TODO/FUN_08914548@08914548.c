#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08914548(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x1698);
  if (iVar2 == 6) {
    FUN_089a52a0(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0xcc));
  }
  else {
    if (iVar2 < 1) {
      iVar3 = *(int *)(param_1 + 0x1c);
    }
    else if ((&DAT_08a9bb4c)[*(int *)(&DAT_08a9baf8 + *(int *)(param_1 + 0x16a8) * 4) * 6 + iVar2]
             == '\0') {
      iVar3 = *(int *)(param_1 + 0x1c);
    }
    else {
      piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
      iVar2 = *(int *)(param_1 + 0x1698);
      if (*(char *)(*piVar1 + *(int *)(param_1 + 0x16a8) * 6 + iVar2 + 0x53f) == '\0') {
        return;
      }
      iVar3 = *(int *)(param_1 + 0x1c);
    }
    FUN_089a52a0(*(undefined4 *)(iVar3 + iVar2 * 4 + 0xb0));
  }
  return;
}

