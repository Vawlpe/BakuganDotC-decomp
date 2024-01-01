#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c189c(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  FUN_089bb728(param_1[3]);
  if (param_1[1] != 0) {
    if (param_2 == -1) {
      if (*(int *)(param_1[1] + 4) == 0) {
        if (*(int *)(*param_1 + 4) != 0) {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      piVar1 = (int *)FUN_08a2eeec(*param_1);
      if (piVar1 != (int *)0x0) {
        piVar2 = (int *)piVar1[3];
        while ((piVar1 = (int *)*piVar1, piVar2 == (int *)0x0 || (*piVar2 != param_2))) {
          if (piVar1 == (int *)0x0) goto LAB_089c193c;
          piVar2 = (int *)piVar1[3];
        }
        uVar3 = 0;
      }
    }
  }
LAB_089c193c:
  FUN_089bb790(param_1[3]);
  return uVar3;
}

