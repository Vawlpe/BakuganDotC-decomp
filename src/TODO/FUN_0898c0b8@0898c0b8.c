#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898c0b8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar3 = 0;
  iVar2 = param_1;
  do {
    FUN_089e29e4(*(undefined4 *)(iVar2 + 0x11f0));
    *(undefined4 *)(*(int *)(iVar2 + 0x11f0) + 0x40) = 0x3f800000;
    iVar1 = *(int *)(iVar2 + 0x11f0);
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    iVar1 = *(int *)(iVar2 + 0x11f0);
    *(undefined4 *)(iVar1 + 0x50) = 0;
    *(undefined4 *)(iVar1 + 0x54) = 0;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    FUN_089a5aec(*(undefined4 *)(param_1 + 0x1228),*(undefined4 *)(param_1 + 0x122c),&local_28);
    FUN_089e3008(local_28,local_24,*(undefined4 *)(iVar2 + 0x11f0));
    FUN_089e2b14(*(undefined4 *)(iVar2 + 0x11f0),0xffffffff);
    iVar1 = *(int *)(*(int *)(iVar2 + 0x11f0) + 0x20);
    (**(code **)(iVar1 + 0x14))(*(int *)(iVar2 + 0x11f0) + (int)*(short *)(iVar1 + 0x10));
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 4;
    param_1 = param_1 + 8;
  } while (iVar3 < 6);
  return;
}

