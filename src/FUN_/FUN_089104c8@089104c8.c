#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089104c8(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  short *psVar5;
  uint uVar6;
  undefined auStack_40 [8];
  undefined auStack_38 [8];
  undefined auStack_30 [24];
  
  bVar1 = true;
  iVar2 = FUN_0880d354();
  if (((iVar2 == 0) || (*(int *)(param_1 + 0x24) == 0)) || (*(char *)(param_1 + 0x4c) != '\0'))
  goto LAB_089106d8;
  iVar2 = FUN_0881b22c();
  uVar3 = DAT_08ac5928;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x20) = DAT_08ac5928;
    *(undefined4 *)(param_1 + 0x24) = uVar3;
    iVar2 = FUN_089bfa40(0x1fe);
    if (iVar2 != 0) {
      uVar3 = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(iVar2 + 0x20) = uVar3;
      *(undefined4 *)(iVar2 + 0x24) = uVar3;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x28);
    if (iVar2 < 1) {
      if (iVar2 < 0) {
LAB_0891056c:
        bVar1 = true;
      }
      else {
        uVar3 = FUN_0881b254();
        FUN_0881b634(uVar3,0x1000000);
        uVar3 = FUN_0881b254();
        FUN_0881b620(uVar3,0x8000000);
        FUN_089cff94();
        bVar1 = true;
      }
    }
    else {
      if (iVar2 != 2) goto LAB_0891056c;
      iVar2 = FUN_0881b22c();
      bVar1 = false;
      if (iVar2 != 0) {
        iVar2 = FUN_089d003c();
        bVar1 = false;
        if (iVar2 != 0) {
          FUN_089ce09c(*(undefined4 *)(param_1 + 0x24),0,0);
          bVar1 = false;
        }
      }
    }
    if (!bVar1) {
      uVar3 = FUN_0881b254();
      iVar2 = FUN_0881b654(uVar3);
      if (((iVar2 != 0) && (iVar2 = FUN_089cf8ec(0), iVar2 != 0)) &&
         (iVar2 = FUN_089d0bcc(iVar2,0,auStack_40), iVar2 != 0)) {
        FUN_089ce09c(*(undefined4 *)(param_1 + 0x24),auStack_38,auStack_30);
        bVar1 = true;
      }
    }
  }
  iVar2 = FUN_0880d2e0();
  if (iVar2 != 0) {
    uVar3 = FUN_0880cc48();
    iVar2 = FUN_0880d7e0(uVar3,0x4880);
    if (((iVar2 != 0) && (*(int *)(param_1 + 0x28) == 2)) && (*(int *)(param_1 + 0x2c) == 3)) {
      *(undefined4 *)(param_1 + 0x154) = 1;
      iVar2 = FUN_089edb80();
      *(undefined4 *)(iVar2 + 0x30) = 0;
      *(undefined4 *)(iVar2 + 0x34) = 0;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 0x3c) = 0;
      iVar2 = FUN_089edb80();
      *(undefined4 *)(iVar2 + 0x40) = 0;
      *(undefined4 *)(iVar2 + 0x44) = 0;
      *(undefined4 *)(iVar2 + 0x48) = 0;
      *(undefined4 *)(iVar2 + 0x4c) = 0x3f800000;
      uVar3 = FUN_089edb80();
      FUN_089edf24(uVar3,10);
      FUN_0890a598(param_1,4);
      *(undefined4 *)(param_1 + 0x2c) = 5;
    }
  }
LAB_089106d8:
  if (bVar1) {
    uVar6 = *(uint *)(param_1 + 0x28);
    if ((-1 < (int)uVar6) && (uVar6 < 7)) {
      iVar2 = param_1 + *(short *)(&DAT_08a9b5e8 + uVar6 * 8);
      pcVar4 = (code *)(&PTR_LAB_08a9b5ec)[uVar6 * 2];
      if (*(short *)(&DAT_08a9b5ea + uVar6 * 8) != 0) {
        psVar5 = (short *)(*(int *)(pcVar4 + iVar2) + *(short *)(&DAT_08a9b5ea + uVar6 * 8) * 8);
        pcVar4 = *(code **)(psVar5 + 2);
        iVar2 = iVar2 + *psVar5;
      }
      (*pcVar4)(iVar2);
    }
    FUN_08909da4(param_1);
  }
  return;
}

