#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08824914(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x1c);
joined_r0x08824934:
  do {
    iVar1 = iVar3;
    if (iVar1 == 0) {
      return;
    }
    iVar3 = *(int *)(iVar1 + 4);
  } while ((param_2 != -1) && (*(int *)(iVar1 + 0x16c) != param_2));
  if (param_3 != 0) goto code_r0x0882495c;
  iVar2 = *(int *)(iVar1 + 0x14);
  goto LAB_0882496c;
code_r0x0882495c:
  if (*(int *)(iVar1 + 0x160) == param_3) {
    iVar2 = *(int *)(iVar1 + 0x14);
LAB_0882496c:
    (**(code **)(iVar2 + 0x14))(iVar1 + *(short *)(iVar2 + 0x10));
  }
  goto joined_r0x08824934;
}

