#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_0888f880(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = (int)*(short *)(param_2 + 0xf2);
  uVar5 = 1;
  pcVar3 = *(code **)(param_2 + 0xf4);
  if (((iVar1 == 0) && (*(short *)(param_2 + 0xf0) == 0)) && (pcVar3 == (code *)0x0)) {
    iVar1 = (int)*(short *)(param_2 + 0xfa);
  }
  else {
    iVar4 = param_1 + 0x1b0 + (int)*(short *)(param_2 + 0xf0);
    if (iVar1 != 0) {
      psVar2 = (short *)(*(int *)(pcVar3 + iVar4) + iVar1 * 8);
      iVar4 = iVar4 + *psVar2;
      pcVar3 = *(code **)(psVar2 + 2);
    }
    iVar1 = (*pcVar3)(iVar4);
    if (iVar1 == 0) {
      uVar5 = 0;
      iVar1 = (int)*(short *)(param_2 + 0xfa);
    }
    else {
      iVar1 = (int)*(short *)(param_2 + 0xfa);
    }
  }
  pcVar3 = *(code **)(param_2 + 0xfc);
  if (((iVar1 == 0) && (*(short *)(param_2 + 0xf8) == 0)) && (pcVar3 == (code *)0x0)) {
    iVar1 = (int)*(short *)(param_2 + 0x102);
  }
  else {
    iVar4 = param_1 + 0x1b0 + (int)*(short *)(param_2 + 0xf8);
    if (iVar1 != 0) {
      psVar2 = (short *)(*(int *)(pcVar3 + iVar4) + iVar1 * 8);
      iVar4 = iVar4 + *psVar2;
      pcVar3 = *(code **)(psVar2 + 2);
    }
    iVar1 = (*pcVar3)(iVar4);
    if (iVar1 == 0) {
      uVar5 = 0;
      iVar1 = (int)*(short *)(param_2 + 0x102);
    }
    else {
      iVar1 = (int)*(short *)(param_2 + 0x102);
    }
  }
  pcVar3 = *(code **)(param_2 + 0x104);
  if (((iVar1 != 0) || (*(short *)(param_2 + 0x100) != 0)) || (pcVar3 != (code *)0x0)) {
    iVar4 = param_1 + 0x1b0 + (int)*(short *)(param_2 + 0x100);
    if (iVar1 != 0) {
      psVar2 = (short *)(*(int *)(pcVar3 + iVar4) + iVar1 * 8);
      pcVar3 = *(code **)(psVar2 + 2);
      iVar4 = iVar4 + *psVar2;
    }
    iVar1 = (*pcVar3)(iVar4);
    if (iVar1 == 0) {
      uVar5 = 0;
    }
  }
  return uVar5;
}

