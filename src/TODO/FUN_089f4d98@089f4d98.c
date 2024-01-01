#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089f4d98(undefined4 param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (param_2 != 0) {
    do {
      uVar1 = FUN_089f547c(param_1);
      if ((uVar1 & *(uint *)(param_2 + 0x128)) == 0) {
        param_2 = *(int *)(param_2 + 4);
      }
      else if ((*(uint *)(param_2 + 0xd0) & 1) == 0) {
        param_2 = *(int *)(param_2 + 4);
      }
      else {
        if (*(code **)(param_2 + 0xec) != (code *)0x0) {
          (**(code **)(param_2 + 0xec))(param_2);
        }
        iVar3 = *(int *)(param_2 + 0x68);
        *param_3 = param_2;
        param_3[1] = iVar3;
        iVar2 = iVar2 + 1;
        param_3 = param_3 + 2;
        param_2 = *(int *)(param_2 + 4);
      }
    } while (param_2 != 0);
  }
  return iVar2;
}

