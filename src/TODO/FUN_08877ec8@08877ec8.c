#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08877ec8(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0xe8) != '\0') {
    iVar1 = FUN_08877e34(param_1);
    if (iVar1 == 0) {
      FUN_08877060(param_1,*(undefined4 *)(param_1 + 0x154),param_1 + 0x60,0,0);
      if (*(char *)(param_1 + 0xf0) == '\0') {
        iVar1 = FUN_08823f5c(DAT_08b00920,*(undefined4 *)(param_1 + 0xec),param_1 + 0x50);
        iVar2 = *(int *)(param_1 + 0xb0);
        *(int *)(iVar1 + 0x1fc) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar1 + 0x200) = *(undefined4 *)(iVar2 + 0xc);
        }
      }
      else {
        iVar1 = FUN_08823f5c(DAT_08abd5b0,*(undefined4 *)(param_1 + 0xec),param_1 + 0x50);
        iVar2 = *(int *)(param_1 + 0xb0);
        *(int *)(iVar1 + 0x1fc) = iVar2;
        if (iVar2 != 0) {
          *(undefined4 *)(iVar1 + 0x200) = *(undefined4 *)(iVar2 + 0xc);
        }
      }
      *(undefined *)(param_1 + 0xe8) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xe8) = 0;
    }
    FUN_08876ee0(param_1);
  }
  return;
}

