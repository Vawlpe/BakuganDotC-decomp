#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089dc554(int **param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 & 0x7ffcffff) != 0) {
    iVar3 = 0;
    if (param_1[2] < (int)*param_1 + 0x100U) {
      iVar3 = (int)*param_1 - (int)(param_1 + 0x38);
      iVar3 = (int)(iVar3 + ((uint)(iVar3 >> 2) >> 0x1e)) >> 2;
      *param_1 = (int *)(param_1 + 0x38);
    }
    if ((param_2 & 0x40000) != 0) {
      FUN_089dcad8(param_1);
    }
    if ((param_2 & 0x80000) != 0) {
      FUN_089dcbec(param_1);
    }
    if ((param_2 & 0x100000) != 0) {
      FUN_089dcca0(param_1);
    }
    if ((param_2 & 0x200000) != 0) {
      FUN_089dce80(param_1);
    }
    if ((param_2 & 0x400000) != 0) {
      FUN_089dcf2c(param_1);
    }
    if ((param_2 & 0x800000) != 0) {
      FUN_089dd01c(param_1);
    }
    if ((param_2 & 0x1000000) != 0) {
      FUN_089dcf60(param_1);
    }
    if ((param_2 & 0x2000000) != 0) {
      FUN_089dd150(param_1);
    }
    if ((param_2 & 0xffff) != 0) {
      FUN_089e1110(param_1);
    }
    if (iVar3 != 0) {
      piVar1 = (int *)((int)*param_1 + iVar3 * 4);
      *param_1 = piVar1;
      if (param_1[2] < piVar1) {
        param_1[2] = (int *)0x0;
        return;
      }
      iVar2 = (int)piVar1 - (int)(param_1 + iVar3 + 0x38);
      memcpy_jak(param_1 + iVar3 + 0x38,param_1 + 0x38,
                 ((int)(iVar2 + ((uint)(iVar2 >> 2) >> 0x1e)) >> 2) << 2);
    }
  }
  return;
}

