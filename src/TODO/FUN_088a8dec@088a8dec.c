#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a8dec(int param_1)

{
  short *psVar1;
  int iVar2;
  code *pcVar3;
  
  FUN_088ac694();
  if (*(char *)(param_1 + 0x281) == '\0') {
    iVar2 = *(int *)(param_1 + 0x32c);
  }
  else {
    if (*(char *)(param_1 + 0x330) == '\0') {
      DAT_08abd5a0 = param_1;
      iVar2 = FUN_088b2cb4();
      if (iVar2 == 0) {
        DAT_08abd5a0 = param_1;
      }
      if (*(int *)(param_1 + 800) != 0) {
        *(undefined *)(*(int *)(param_1 + 800) + 0x4c1) = 1;
      }
      FUN_088246f4(DAT_08abd5b0,0xffffffff,param_1);
      if (*(int *)(param_1 + 0x154) != 0) {
        *(undefined *)(*(int *)(param_1 + 0x154) + 0x3a) = 1;
      }
      *(undefined *)(param_1 + 0x330) = 1;
    }
    iVar2 = *(int *)(param_1 + 0x32c);
  }
  if ((-1 < iVar2) && (iVar2 == 0)) {
    param_1 = param_1 + *(short *)(&DAT_08a84098 + iVar2 * 8);
    pcVar3 = (code *)PTR_LAB_08a8409c;
    if (*(short *)(&DAT_08a8409a + iVar2 * 8) != 0) {
      psVar1 = (short *)(*(int *)(pcVar3 + param_1) + *(short *)(&DAT_08a8409a + iVar2 * 8) * 8);
      pcVar3 = *(code **)(psVar1 + 2);
      param_1 = param_1 + *psVar1;
    }
    (*pcVar3)(param_1);
  }
  return;
}

