#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_088b95ec(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_20;
  int local_1c;
  
  if (DAT_08abd690 < 1) {
    if (-1 < DAT_08abd690) {
      if (*(int *)(&DAT_08ab0518 + param_2 * 4) == 0) {
        DAT_08abd690 = 0;
        return 1;
      }
      local_60 = 0x61746164;
      local_5c = 0x7461622f;
      local_58 = 0x2f656c74;
      local_54 = 0x65687073;
      local_50 = 0x2f6572;
      strcat(&local_60,*(int *)(&DAT_08ab0518 + param_2 * 4));
      strcat(&local_60,&DAT_08a908f0);
      uVar1 = FUN_089fce94();
      iVar3 = FUN_089fd350(uVar1,&local_60);
      if (iVar3 != 0) {
        DAT_08abd690 = 0;
        return 1;
      }
      iVar3 = *param_1;
      if (iVar3 == 0) {
        local_1c = 0;
        FUN_089d8634();
        uVar1 = FUN_089d81a4();
        FUN_089d816c(1);
        iVar2 = FUN_089d7d74(0x44,0,0);
        FUN_089d816c(uVar1);
        FUN_089d866c();
        iVar3 = local_1c;
        if (iVar2 != 0) {
          FUN_089bd9b4(iVar2);
          iVar3 = iVar2;
        }
        *param_1 = iVar3;
      }
      iVar3 = FUN_089bda88(iVar3,&local_60,10,1,1);
      if (iVar3 != 0) {
        DAT_08abd690 = 1;
      }
    }
  }
  else if (DAT_08abd690 < 2) {
    iVar3 = *param_1;
    if (iVar3 == 0) {
      local_20 = 0;
      FUN_089d8634();
      uVar1 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar2 = FUN_089d7d74(0x44,0,0);
      FUN_089d816c(uVar1);
      FUN_089d866c();
      iVar3 = local_20;
      if (iVar2 != 0) {
        FUN_089bd9b4(iVar2);
        iVar3 = iVar2;
      }
      *param_1 = iVar3;
    }
    iVar3 = FUN_089bdb90(iVar3,1);
    if (iVar3 != 0) {
      DAT_08abd690 = 0;
      return 1;
    }
  }
  return 0;
}

