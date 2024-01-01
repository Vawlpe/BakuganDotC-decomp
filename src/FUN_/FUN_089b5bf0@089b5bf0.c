#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

uint FUN_089b5bf0(undefined4 param_1,undefined *param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  
  if (param_4 == 1) {
    uVar3 = FUN_089b49c0(param_1,&DAT_08af8154,DAT_08ac4708);
    DAT_08ac4708 = 0;
    PTR_DAT_08ac470c = &DAT_08af8154;
    return uVar3;
  }
  uVar3 = 0;
  puVar2 = param_2;
  if (param_3 != 0) {
    do {
      *PTR_DAT_08ac470c = *puVar2;
      PTR_DAT_08ac470c = PTR_DAT_08ac470c + 1;
      DAT_08ac4708 = DAT_08ac4708 + 1;
      if (0x7f < DAT_08ac4708) {
        iVar1 = FUN_089b49c0(param_1,&DAT_08af8154,DAT_08ac4708);
        PTR_DAT_08ac470c = &DAT_08af8154;
        DAT_08ac4708 = 0;
        if (iVar1 == 0) {
          return 0;
        }
      }
      uVar3 = uVar3 + 1;
      puVar2 = param_2 + uVar3;
    } while (uVar3 < param_3);
  }
  return uVar3;
}

