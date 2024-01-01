#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d9914(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  
  iVar1 = FUN_089be298(DAT_08ac520c);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = strstr(param_2,&DAT_08aa2f78);
  if (iVar2 != 0) {
    uVar3 = FUN_08a1999c(*(int *)(iVar1 + 4) + 0x10,3,0);
    FUN_089d9f90(uVar3);
    return 0;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 < 1) {
    if (-1 < iVar2) {
      FUN_089d8634();
      uVar3 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar4 = FUN_089d7d74(0x84,0,0);
      FUN_089d816c(uVar3);
      FUN_089d866c();
      iVar2 = 0;
      if (iVar4 != 0) {
        FUN_089d8b38(iVar4,0);
        *(undefined **)(iVar4 + 0x20) = &DAT_08af6fe8;
        *(undefined4 *)(iVar4 + 0x24) = 0;
        *(undefined *)(iVar4 + 0x28) = 1;
        *(undefined **)(iVar4 + 0x20) = &DAT_08af53c4;
        *(undefined4 *)(iVar4 + 0x80) = 0;
        iVar2 = iVar4;
      }
      uVar3 = *(undefined4 *)(iVar1 + 4);
      psVar5 = (short *)(*(int *)(iVar2 + 0x20) + 0x58);
      goto LAB_089d9b7c;
    }
  }
  else if (iVar2 < 2) {
    FUN_089d8634();
    uVar3 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x3c,0,0);
    FUN_089d816c(uVar3);
    FUN_089d866c();
    iVar2 = 0;
    if (iVar4 != 0) {
      FUN_089d8b38(iVar4,0);
      *(undefined **)(iVar4 + 0x20) = &DAT_08af6fe8;
      *(undefined4 *)(iVar4 + 0x24) = 0;
      *(undefined *)(iVar4 + 0x28) = 1;
      *(undefined **)(iVar4 + 0x20) = &DAT_08af5424;
      iVar2 = iVar4;
    }
    uVar3 = *(undefined4 *)(iVar1 + 4);
    psVar5 = (short *)(*(int *)(iVar2 + 0x20) + 0x58);
    goto LAB_089d9b7c;
  }
  FUN_089d8634();
  uVar3 = FUN_089d81a4();
  FUN_089d816c(1);
  iVar4 = FUN_089d7d74(0x3c,0,0);
  FUN_089d816c(uVar3);
  FUN_089d866c();
  iVar2 = 0;
  if (iVar4 != 0) {
    FUN_089d8b38(iVar4,0);
    *(undefined **)(iVar4 + 0x20) = &DAT_08af6fe8;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    *(undefined *)(iVar4 + 0x28) = 1;
    *(undefined **)(iVar4 + 0x20) = &DAT_08af5424;
    iVar2 = iVar4;
  }
  uVar3 = *(undefined4 *)(iVar1 + 4);
  psVar5 = (short *)(*(int *)(iVar2 + 0x20) + 0x58);
LAB_089d9b7c:
  (**(code **)(psVar5 + 2))(iVar2 + *psVar5,uVar3);
  FUN_089d8c60(iVar2,DAT_08ac5bcc,0);
  return iVar2;
}

