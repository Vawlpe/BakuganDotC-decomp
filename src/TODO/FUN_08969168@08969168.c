#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08969168(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = _DONE_Get_DAT_08AAC9E0();
  uVar1 = FUN_0880d0ac(uVar2,0x16);
  *(undefined *)(param_1 + 0x29bd) = uVar1;
  uVar4 = 0;
  do {
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    uVar1 = FUN_0880d0ac(uVar2,uVar4 + 3);
    iVar3 = param_1 + uVar4;
    uVar4 = uVar4 + 1;
    *(undefined *)(iVar3 + 0x29bf) = uVar1;
  } while (uVar4 < 4);
  memset_jak((undefined *)(param_1 + 0x74),0,2);
  uVar1 = 2;
  if (*(char *)(param_1 + 0x29bd) < '\x03') {
    uVar1 = 1;
  }
  *(undefined *)(param_1 + 0x74) = uVar1;
  *(undefined *)(param_1 + 0x77) = 0;
  *(undefined *)(param_1 + 0x76) = *(undefined *)(param_1 + 0x74);
  *(undefined *)(param_1 + 0x78) = 0;
  *(undefined *)(param_1 + 0x29be) = 0;
  memset_jak((undefined *)(param_1 + 0x29d1),0,4);
  if (*(char *)(param_1 + 0x29bd) < '\x03') {
    uVar1 = 2;
    iVar3 = FUN_0880d354();
    if (iVar3 != 0) {
      uVar1 = 1;
    }
    *(undefined *)(param_1 + 0x29d2) = uVar1;
  }
  else {
    iVar3 = FUN_0880d354();
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0x29d2) = 2;
      *(undefined *)(param_1 + 0x29d3) = 3;
      *(undefined *)(param_1 + 0x29d4) = 4;
    }
    else {
      *(undefined *)(param_1 + 0x29d2) = 1;
      *(undefined *)(param_1 + 0x29d3) = 5;
      *(undefined *)(param_1 + 0x29d4) = 6;
    }
  }
  memset_jak((undefined *)(param_1 + 0x29d5),0,4);
  if (*(char *)(param_1 + 0x29bd) < '\x03') {
    uVar1 = 2;
    iVar3 = FUN_0880d354();
    if (iVar3 != 0) {
      uVar1 = 1;
    }
    *(undefined *)(param_1 + 0x29d6) = uVar1;
  }
  else {
    iVar3 = FUN_0880d354();
    if (iVar3 == 0) {
      *(undefined *)(param_1 + 0x29d6) = 2;
      *(undefined *)(param_1 + 0x29d7) = 3;
      *(undefined *)(param_1 + 0x29d8) = 4;
    }
    else {
      *(undefined *)(param_1 + 0x29d6) = 1;
      *(undefined *)(param_1 + 0x29d7) = 2;
      *(undefined *)(param_1 + 0x29d8) = 3;
    }
  }
  memset_jak((undefined *)(param_1 + 0x29dc),0,0x10);
  FUN_08968dd8(param_1);
  uVar1 = 6;
  if (*(char *)(param_1 + 0x29bd) < '\x03') {
    uVar1 = 4;
  }
  *(undefined *)(param_1 + 0x2a59) = uVar1;
  memset_jak((undefined *)(param_1 + 0x2a70),0,0x14);
  return;
}

