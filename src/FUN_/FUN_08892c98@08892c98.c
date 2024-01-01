#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08892c98(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  if ((param_2 != 0) &&
     (fVar3 = DAT_08abd0c0, fVar2 = (float)FUN_0888eb14(param_1,param_2), fVar2 <= fVar3)) {
    iVar1 = FUN_08860344(param_2);
    if (iVar1 == *(int *)(param_1 + 0x1a0)) {
      if ((*(int *)(param_2 + 0x140) == 7) || (*(int *)(param_2 + 0x140) == 9)) {
        return 1;
      }
    }
    else {
      fVar3 = (float)FUN_08890598(param_1,param_2,*(int *)(param_1 + 0x1a0));
      fVar2 = (float)FUN_0889046c(param_1,param_2);
      if ((fVar3 < 120.0) && (fVar2 < 300.0)) {
        return 1;
      }
    }
  }
  return 0;
}

