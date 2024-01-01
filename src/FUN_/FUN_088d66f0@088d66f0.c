#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088d66f0(int param_1,undefined4 param_2)

{
  int iVar1;
  ushort uVar2;
  char *pcVar3;
  
  iVar1 = FUN_088e1948();
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 0x3a1) == '\0') {
      iVar1 = *(int *)(param_1 + 0x16c);
      goto LAB_088d6754;
    }
    pcVar3 = *(char **)(param_1 + 500);
    uVar2 = 1;
    if (pcVar3 != (char *)0x0) {
      if (*(char *)(param_1 + 0x1f8) == '\0') {
        uVar2 = (ushort)(*pcVar3 != '\0');
      }
      else {
        uVar2 = *(short *)(pcVar3 + 2) >> 1 & 1;
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x16c);
LAB_088d6754:
  if (iVar1 == 1) {
    uVar2 = 1;
  }
  if (uVar2 != 0) {
    FUN_088d93cc(param_1,param_2);
  }
  return;
}

