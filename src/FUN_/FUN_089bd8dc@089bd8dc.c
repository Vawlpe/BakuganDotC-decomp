#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089bd8dc(int param_1,undefined4 param_2,int param_3,char param_4,undefined param_5,
                undefined param_6)

{
  int iVar1;
  
  FUN_089d8b94(param_1,param_3,0);
  *(undefined **)(param_1 + 0x20) = &DAT_08af5214;
  *(undefined *)(param_1 + 0x29) = 0;
  *(undefined *)(param_1 + 0x2a) = 0;
  *(undefined *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  if (param_4 != '\0') {
    FUN_089bde1c(param_1,*(undefined4 *)(param_1 + 0x24),param_5,param_6);
  }
  iVar1 = DAT_08ac520c;
  if ((param_3 == 0) && (iVar1 = param_1, DAT_08ac520c != 0)) {
    FUN_089d8c60(param_1,DAT_08ac520c,0);
    iVar1 = DAT_08ac520c;
  }
  DAT_08ac520c = iVar1;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return param_1;
}

