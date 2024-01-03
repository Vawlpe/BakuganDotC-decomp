#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08950b50(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != (undefined4 *)0x0) {
    param_1[3] = &DAT_08af4dec;
    FUN_089cec00(DAT_08ac5934);
    *(undefined *)(param_1[8] + 0x3c) = 0;
    DAT_08ac0e78 = *param_1;
    iVar2 = param_1[0x24];
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x74) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0x74) + 8),3);
      param_1[0x24] = 0;
    }
    uVar1 = DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar1,0x17,0);
    FUN_08909ac0(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_089d8634();
      FUN_089d7fd8(param_1,0,0);
      FUN_089d866c();
    }
  }
  return;
}

