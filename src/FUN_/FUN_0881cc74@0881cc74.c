#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0881cc74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar4 = (char *)0x0;
  iVar1 = FUN_089d3ab4();
  if (iVar1 != 0) {
    uVar2 = FUN_089d3adc();
    pcVar4 = (char *)FUN_089d3d84(uVar2);
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (pcVar4 != (char *)0x0) {
    iVar3 = 0;
    iVar1 = param_1;
    if (0 < *(int *)(param_1 + 0x14)) {
      do {
        if (((((*(char *)(iVar1 + 0x31) == *pcVar4) && (*(char *)(iVar1 + 0x32) == pcVar4[1])) &&
             (*(char *)(iVar1 + 0x33) == pcVar4[2])) &&
            ((*(char *)(iVar1 + 0x34) == pcVar4[3] && (*(char *)(iVar1 + 0x35) == pcVar4[4])))) &&
           (*(char *)(iVar1 + 0x36) == pcVar4[5])) {
          *(int *)(param_1 + 0x10) = iVar3;
        }
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x1f;
      } while (iVar3 < *(int *)(param_1 + 0x14));
    }
  }
  iVar1 = FUN_0880d2e0();
  if (iVar1 != 0) {
    uVar2 = FUN_0880cc48();
    FUN_0880cd9c(uVar2,0x12,*(undefined4 *)(param_1 + 0x14));
    uVar2 = FUN_0880cc48();
    FUN_0880cd9c(uVar2,0x13,*(undefined4 *)(param_1 + 0x10));
  }
  uVar2 = FUN_089d3adc();
  iVar1 = FUN_089d3fac(uVar2);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 4) = 8;
    *(undefined4 *)(param_1 + 8) = 0;
    if ((*(char *)(param_1 + 0xe) == '\0') && (iVar1 = FUN_0880d2e0(), iVar1 != 0)) {
      uVar2 = FUN_0880cc48();
      FUN_0880d0e8(uVar2,0x80);
    }
  }
  return;
}

