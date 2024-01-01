#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d4d54(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(param_1 + 0x24) == 1) {
    iVar2 = FUN_089d2e60();
    if (iVar2 != 0) {
      uVar3 = FUN_089d2e88();
      FUN_089d3028(uVar3);
      uVar3 = FUN_089d2e88();
      iVar2 = FUN_089d2fd4(uVar3);
      if (iVar2 != 0) {
        FUN_089d4aa0(param_1,6);
      }
    }
  }
  else {
    iVar2 = FUN_089d2e60();
    if (iVar2 == 0) {
      FUN_089d4aa0(param_1,5);
    }
    else {
      uVar3 = FUN_089d2e88();
      FUN_089d3028(uVar3);
      uVar3 = FUN_089d2e88();
      iVar2 = FUN_089d2fd4(uVar3);
      if (iVar2 == 0) {
        if (*(char *)(param_1 + 0x21) == '\0') {
          iVar2 = FUN_089d2e60();
          if ((iVar2 != 0) && (iVar2 = FUN_089d2e88(), *(char *)(iVar2 + 0x11) != '\0')) {
            FUN_08943ad4(1,0);
            *(undefined *)(param_1 + 0x21) = 1;
          }
        }
        else {
          bVar1 = true;
          iVar2 = FUN_089d2e60();
          if (iVar2 != 0) {
            iVar2 = FUN_089d2e88();
            if (*(char *)(iVar2 + 0x12) == '\0') {
              bVar1 = false;
            }
            else {
              if (*(int *)(param_1 + 0x18) != 3) {
                *(undefined4 *)(param_1 + 0x18) = 3;
              }
              *(undefined *)(param_1 + 0x59) = 1;
            }
          }
          if (bVar1) {
            FUN_08943ad4(0,0);
            *(undefined *)(param_1 + 0x21) = 0;
          }
        }
      }
      else {
        bVar1 = true;
        if ((*(char *)(param_1 + 0x59) == '\0') &&
           (iVar2 = *(int *)(param_1 + 0x18) + -1, *(int *)(param_1 + 0x18) = iVar2, 0 < iVar2)) {
          FUN_089d4aa0(param_1,6);
          FUN_08943ad4(1,0);
          *(undefined *)(param_1 + 0x21) = 1;
          bVar1 = false;
          *(undefined *)(param_1 + 0x59) = 0;
        }
        if (bVar1) {
          FUN_089d4aa0(param_1,5);
          FUN_08943ad4(0,0);
          *(undefined *)(param_1 + 0x21) = 0;
          *(undefined4 *)(param_1 + 0x18) = 3;
        }
      }
    }
  }
  FUN_089bb728(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(DAT_08ac598c + 0x1e8) = 0;
  FUN_089bb790(*(undefined4 *)(param_1 + 0x30));
  return;
}

