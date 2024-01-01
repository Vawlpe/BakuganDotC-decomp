#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c36b8(int *param_1,undefined4 param_2,char param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar4 = 1;
  bVar1 = false;
  *(undefined *)((int)param_1 + 0x1b) = 0;
  FUN_089bb728(param_1[1]);
  if (param_1[9] < 0) {
    uVar4 = 0;
  }
  else if (param_1[9] < 2) {
    if ((*(char *)(param_1 + 0x31) == '\0') && (param_1[8] != 3)) {
      iVar2 = FUN_089c4814(*param_1);
      if (iVar2 != 0) {
        uVar3 = FUN_089c487c(*param_1);
        fVar5 = (float)FUN_089c4e18(uVar3);
        if (fVar5 != 0.0) {
          uVar3 = FUN_089c487c(*param_1);
          FUN_089c4d24(uVar3,0,param_2);
        }
      }
      param_1[9] = 1;
      param_1[8] = 3;
      param_1[10] = 0;
      if (param_3 == '\0') {
        memset_jak((undefined *)(param_1 + 0xb),0,0x80);
      }
      bVar1 = true;
    }
  }
  else {
    uVar4 = 0;
  }
  FUN_089bb790(param_1[1]);
  if (bVar1) {
    FUN_089bbf78(*param_1 + 9);
  }
  return uVar4;
}

