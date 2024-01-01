#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0894190c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  short *psVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x9c);
  if (iVar2 < 1) {
    if (iVar2 < 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      goto LAB_089419b8;
    }
    iVar2 = FUN_089eb03c(*(undefined4 *)(param_1 + 0x94),0x80);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      goto LAB_089419b8;
    }
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  }
  else if (iVar2 < 2) {
    uVar1 = FUN_089eb248(*(undefined4 *)(param_1 + 0x94));
    iVar2 = FUN_08817a90(uVar1,1);
    if (iVar2 == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      goto LAB_089419b8;
    }
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x9c) + 1;
  }
  else {
    if (2 < iVar2) {
      iVar2 = *(int *)(param_1 + 0x28);
      goto LAB_089419b8;
    }
    if (*(int *)(param_1 + 0x94) == 0) {
      iVar2 = *(int *)(param_1 + 0x28);
      goto LAB_089419b8;
    }
    FUN_089eb250();
  }
  iVar2 = *(int *)(param_1 + 0x28);
LAB_089419b8:
  if ((-1 < iVar2) && (iVar2 < 5)) {
    iVar5 = param_1 + *(short *)(&DAT_08a9cfa8 + iVar2 * 8);
    pcVar3 = (code *)(&PTR_LAB_08a9cfac)[iVar2 * 2];
    if (*(short *)(&DAT_08a9cfaa + iVar2 * 8) != 0) {
      psVar4 = (short *)(*(int *)(pcVar3 + iVar5) + *(short *)(&DAT_08a9cfaa + iVar2 * 8) * 8);
      iVar5 = iVar5 + *psVar4;
      pcVar3 = *(code **)(psVar4 + 2);
    }
    (*pcVar3)(iVar5);
  }
  FUN_08909da4(param_1);
  return;
}

