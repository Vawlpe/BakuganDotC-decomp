#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a1cb80)

int FUN_08a1ca78(int param_1,int param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (((param_1 != 0) && (param_2 != 0)) && (param_4 != 0)) {
    if (param_1 != param_2) {
      if (((param_3 & 0xf0401) == 0) &&
         (((param_3 & 2) == 0 || (iVar2 = FUN_08a10908(*(undefined4 *)(param_2 + 4)), iVar2 == 0))))
      {
        FUN_08a14280(param_1);
        uVar1 = *(undefined4 *)(param_2 + 4);
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
        *(undefined4 *)(param_1 + 4) = uVar1;
        uVar3 = 0;
      }
      else {
        FUN_08a14280(param_1);
        uVar1 = *(undefined4 *)(param_2 + 4);
        *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
        *(undefined4 *)(param_1 + 4) = uVar1;
        uVar3 = 0;
        if (param_3 != 0) {
          uVar3 = 10;
          if ((param_3 & 0x10000) == 0) {
            uVar3 = 2;
          }
          if ((param_3 & 0x20000) != 0) {
            uVar3 = uVar3 | 0x10;
          }
          if ((param_3 & 0x40000) != 0) {
            uVar3 = uVar3 | 0x20;
          }
          if ((param_3 & 0x80000) != 0) {
            uVar3 = uVar3 | 0x40;
          }
        }
      }
      uVar1 = FUN_08a25914(*(undefined4 *)(param_2 + 4),uVar3);
      *(undefined4 *)(param_1 + 4) = uVar1;
    }
    return param_1;
  }
  return 0;
}

