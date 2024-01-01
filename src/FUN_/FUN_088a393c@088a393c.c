#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088a393c(int param_1)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_0884b248();
  if (iVar2 != 0) {
    iVar2 = FUN_089bf93c(0x14a,1);
    if (iVar2 == 0) {
      FUN_0882c15c();
      iVar2 = FUN_0882c220(7);
      if (iVar2 != 0) {
        FUN_0882c15c();
        iVar2 = FUN_0882c220(8);
        bVar1 = false;
        if (iVar2 == 0) {
          iVar2 = FUN_089bfa40(100);
          if ((iVar2 != 0) && (iVar2 = FUN_089bf2d4(iVar2,1), iVar2 == 0)) {
            bVar1 = true;
          }
          if (bVar1) {
            *(undefined *)(param_1 + 0xb8) = 1;
          }
          else {
            *(undefined *)(param_1 + 0xb8) = 0;
          }
          goto LAB_088a3a04;
        }
      }
      iVar2 = FUN_0884c8f4();
      if (iVar2 == 0) {
        *(undefined *)(param_1 + 0xb8) = 1;
      }
      else {
        *(undefined *)(param_1 + 0xb8) = 0;
      }
    }
    else {
      *(undefined *)(param_1 + 0xb8) = 1;
    }
  }
LAB_088a3a04:
  iVar2 = *(int *)(param_1 + 0x140);
  if ((*(char *)(param_1 + 0xb8) == '\0') || (*(float *)(param_1 + 0x6c) <= 0.3)) {
    if (iVar2 != 0) {
      *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) | 6;
    }
  }
  else if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x130) = *(uint *)(iVar2 + 0x130) & 0xfffffff9;
  }
  if (0x23 < DAT_08abd488) {
    FUN_088a3898(param_1);
  }
  FUN_089df8a4(param_1);
  return;
}

