#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c2c54(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar1 = DONE_NotZero_DAT_08AC61E8();
  if (iVar1 != 0) {
    if (param_1 == -1) {
      uVar2 = FUN_089fce94();
      iVar1 = FUN_089fd3f4(uVar2,&DAT_08ac5604,0);
      if (iVar1 != 0) {
        uVar5 = 1;
        do {
          iVar3 = FUN_089fbbe0(iVar1);
          if (iVar3 == 0) {
            return 0;
          }
          uVar2 = FUN_089fce94();
          iVar1 = FUN_089fd3f4(uVar2,&DAT_08ac5604,iVar1);
        } while (iVar1 != 0);
      }
    }
    else {
      uVar2 = FUN_089fce94();
      uVar4 = FUN_089c2b60(param_1);
      iVar1 = FUN_089fd350(uVar2,uVar4);
      if ((iVar1 != 0) && (iVar1 = FUN_089fbbe0(iVar1), iVar1 != 0)) {
        uVar5 = 1;
      }
    }
  }
  return uVar5;
}

