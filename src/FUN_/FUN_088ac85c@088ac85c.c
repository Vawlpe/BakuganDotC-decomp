#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088ac85c(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined auStack_90 [132];
  
  iVar1 = FUN_089bf93c(0x14a,1);
  if (iVar1 == 0) {
    FUN_088a9614(param_1);
    if (*(int *)(param_1 + 0x140) == 0) {
      iVar1 = *(int *)(param_1 + 0x154);
    }
    else {
      *(uint *)(*(int *)(param_1 + 0x140) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x140) + 0x130) | 2;
      *(uint *)(*(int *)(param_1 + 0x140) + 0x130) =
           *(uint *)(*(int *)(param_1 + 0x140) + 0x130) & 0xfffffffd;
      strcpy(auStack_90,param_1 + 0xbd);
      puVar2 = (undefined *)strchr(auStack_90,0x2e);
      if (puVar2 != (undefined *)0x0) {
        *puVar2 = 0;
      }
      strcat(auStack_90,"_bk.gmo");
      iVar1 = *(int *)(param_1 + 0x154);
    }
    if (iVar1 != 0) {
      *(undefined *)(*(int *)(param_1 + 0x154) + 0x3a) = 1;
      FUN_088b3410(*(undefined4 *)(param_1 + 0x154));
      *(undefined4 *)(param_1 + 0x154) = 0;
    }
    FUN_089de940(param_1,0);
    FUN_089d8d28(*(undefined4 *)(param_1 + 0x140));
  }
  return;
}

