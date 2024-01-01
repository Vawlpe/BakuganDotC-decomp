#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a24dc4(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  
  if ((param_2 == 0) || (param_4 == 0)) {
    return 0;
  }
  if (param_2 != param_1) {
    iVar1 = FUN_08a247b8(param_2,1);
    if (param_3 != 0) {
      param_3 = param_3 | 2;
    }
    param_3 = param_3 & 0xfffffffe;
    if (iVar1 != 0) {
      FUN_08a24d00(*(undefined4 *)(param_2 + 0xc),1,param_3,param_4);
      FUN_08a24c1c(*(undefined4 *)(param_2 + 0x10),1,param_3,param_4);
      FUN_08a24814(*(undefined4 *)(param_2 + 0x14),*(byte *)(param_2 + 0x18) + 1,param_3,param_4);
      return 1;
    }
  }
  return 1;
}

