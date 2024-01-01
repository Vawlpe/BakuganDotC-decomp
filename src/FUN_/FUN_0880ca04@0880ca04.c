#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880ca04(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(undefined4 *)(*param_1 + 0x48c) = 1;
  iVar1 = 0;
  iVar2 = *param_1;
  iVar5 = 0;
  iVar3 = 0;
  do {
    iVar6 = 0;
    iVar4 = 0;
    do {
      iVar2 = iVar2 + iVar5 + iVar4;
      *(undefined *)(iVar2 + 0x490) = 0xff;
      *(undefined *)(iVar2 + 0x491) = 0xff;
      iVar4 = iVar4 + 2;
      *(undefined *)(*param_1 + iVar3 + iVar6 + 0x4e4) = 0xff;
      iVar6 = iVar6 + 1;
      iVar2 = *param_1;
    } while (iVar6 < 2);
    iVar1 = iVar1 + 1;
    iVar5 = iVar5 + 4;
    iVar3 = iVar3 + 2;
  } while (iVar1 < 0x15);
  *(byte *)(iVar2 + 0x50e) = *(byte *)(iVar2 + 0x50e) | 2;
  iVar1 = *param_1;
  if ((*(byte *)(iVar1 + 0x51a) & 1) == 0) {
    *(byte *)(iVar1 + 0x51a) = *(byte *)(iVar1 + 0x51a) | 1;
    iVar1 = *param_1;
    if (*(char *)(iVar1 + 0x4e6) == -1) {
      *(undefined *)(iVar1 + 0x4e6) = 0;
      iVar1 = *param_1;
    }
    else if (*(char *)(iVar1 + 0x4e7) == -1) {
      *(undefined *)(iVar1 + 0x4e7) = 0;
      iVar1 = *param_1;
    }
  }
  if ((*(byte *)(iVar1 + 0x51a) & 4) == 0) {
    *(byte *)(iVar1 + 0x51a) = *(byte *)(iVar1 + 0x51a) | 4;
    iVar1 = *param_1;
    if (*(char *)(iVar1 + 0x4e6) == -1) {
      *(undefined *)(iVar1 + 0x4e6) = 2;
      iVar1 = *param_1;
    }
    else if (*(char *)(iVar1 + 0x4e7) == -1) {
      *(undefined *)(iVar1 + 0x4e7) = 2;
      iVar1 = *param_1;
    }
  }
  *(byte *)(iVar1 + 0x5be) = *(byte *)(iVar1 + 0x5be) | 2;
  *(byte *)(*param_1 + 0x5be) = *(byte *)(*param_1 + 0x5be) | 8;
  *(byte *)(*param_1 + 0x5be) = *(byte *)(*param_1 + 0x5be) | 0x20;
  *(byte *)(*param_1 + 0x5be) = *(byte *)(*param_1 + 0x5be) | 0x40;
  *(byte *)(*param_1 + 0x5be) = *(byte *)(*param_1 + 0x5be) | 0x80;
  *(byte *)(*param_1 + 0x5bf) = *(byte *)(*param_1 + 0x5bf) | 1;
  *(byte *)(*param_1 + 0x5c8) = *(byte *)(*param_1 + 0x5c8) | 1;
  *(byte *)(*param_1 + 0x5c8) = *(byte *)(*param_1 + 0x5c8) | 4;
  *(byte *)(*param_1 + 0x5c9) = *(byte *)(*param_1 + 0x5c9) | 2;
  *(byte *)(*param_1 + 0x5ca) = *(byte *)(*param_1 + 0x5ca) | 4;
  *(byte *)(*param_1 + 0x5ca) = *(byte *)(*param_1 + 0x5ca) | 0x20;
  *(byte *)(*param_1 + 0x5cb) = *(byte *)(*param_1 + 0x5cb) | 2;
  *(byte *)(*param_1 + 0x5cb) = *(byte *)(*param_1 + 0x5cb) | 0x10;
  *(byte *)(*param_1 + 0x5c3) = *(byte *)(*param_1 + 0x5c3) | 2;
  *(byte *)(*param_1 + 0x5d3) = *(byte *)(*param_1 + 0x5d3) | 1;
  *(byte *)(*param_1 + 0x5d3) = *(byte *)(*param_1 + 0x5d3) | 4;
  return;
}

