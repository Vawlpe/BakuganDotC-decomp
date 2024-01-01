#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e5844(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_088e1948();
  *(undefined *)(*(int *)(param_1 + 0x16c) + 0x20) = 0;
  if (*(int *)(param_1 + 0x3a0) != 4) {
    if (*(char *)(iVar1 + 0x3a1) == '\0') {
      if (*(int *)(param_1 + 0x460) == 2) {
        FUN_088e5414(param_1,0);
      }
      iVar1 = *(int *)(param_1 + 0x464) + 1;
      *(int *)(param_1 + 0x464) = iVar1;
      if (iVar1 % 0x5a == 0) {
        FUN_089c1f8c(*(undefined4 *)(param_1 + 300),0x2c0003b,0,0);
        FUN_088e5414(param_1,3);
        *(undefined4 *)(param_1 + 0x468) = 0;
        *(undefined4 *)(param_1 + 0x464) = 0;
        *(undefined4 *)(param_1 + 0x46c) = 0;
      }
      FUN_088e569c(param_1);
    }
    else if (*(int *)(param_1 + 0x460) != 2) {
      FUN_088e5414(param_1,2);
      *(undefined4 *)(param_1 + 0x464) = 0;
    }
  }
  FUN_088e94e4(param_1);
  return;
}

