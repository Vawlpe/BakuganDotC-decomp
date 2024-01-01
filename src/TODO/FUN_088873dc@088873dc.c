#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088873dc(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0x3f800000;
  if (((*(int *)(DAT_08ac58c4 + 0x20) != 2) && (param_1 != 6)) && (param_2 != 6)) {
    if (*(int *)(&DAT_08a68d30 + param_1 * 4) == param_2) {
      return *(undefined4 *)(&DAT_08aba990 + param_3 * 8);
    }
    if (*(int *)(&DAT_08a68d30 + param_2 * 4) == param_1) {
      uVar1 = *(undefined4 *)(&DAT_08aba994 + param_3 * 8);
    }
    return uVar1;
  }
  return uVar1;
}

