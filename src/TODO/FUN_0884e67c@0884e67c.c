#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884e67c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,0x19);
  if (iVar2 == 0) {
    iVar2 = 300;
  }
  if (iVar2 == -1) {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar1,2,0xffffffff);
  }
  else {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar1,2,iVar2 * 0x3c);
  }
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar1,0xb,0);
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar1,0xc,0);
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar1,0xd,0);
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar1,0xe,0xffffffff);
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar1,0xf,0xffffffff);
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar1,0x10,0xffffffff);
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar1,0x11,0xffffffff);
  if (*(char *)(param_1 + 0x55b) == '\0') {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar1,0x1e,0);
    iVar3 = 0;
    do {
      *(undefined4 *)(param_1 + 0x594) = 0;
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 4;
    } while (iVar3 < 5);
  }
  if (*(int *)(DAT_08ac58c4 + 0x20) == 1) {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar1,2,0xffffffff);
  }
  else {
    uVar1 = _DONE_Get_DAT_08AAC9E0();
    iVar3 = FUN_0880d0ac(uVar1,7);
    if (iVar3 < 2) {
      if (0 < iVar3) {
        FUN_089bf6e8(0x69,100);
        uVar1 = _DONE_Get_DAT_08AAC9E0();
        FUN_0880cd9c(uVar1,0xb,0xffffffff);
        iVar2 = FUN_0880d354();
        iVar3 = 0;
        if (iVar2 == 0) {
          DAT_08ab9f70 = 1;
        }
        do {
          uVar1 = _DONE_Get_DAT_08AAC9E0();
          iVar2 = FUN_0880d0ac(uVar1,iVar3 + 3);
          if (0 < iVar2) {
            uVar1 = _DONE_Get_DAT_08AAC9E0();
            FUN_0880cd9c(uVar1,iVar3 + 0xe,0);
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 4);
      }
    }
    else if (iVar3 < 3) {
      if (iVar2 == -1) {
        uVar1 = _DONE_Get_DAT_08AAC9E0();
        FUN_0880cd9c(uVar1,0xb,0x1e);
        iVar2 = 0;
      }
      else {
        uVar1 = _DONE_Get_DAT_08AAC9E0();
        FUN_0880cd9c(uVar1,0xb,0xffffffff);
        iVar2 = 0;
      }
      do {
        uVar1 = _DONE_Get_DAT_08AAC9E0();
        iVar3 = FUN_0880d0ac(uVar1,iVar2 + 3);
        if (0 < iVar3) {
          uVar1 = _DONE_Get_DAT_08AAC9E0();
          FUN_0880cd9c(uVar1,iVar2 + 0xe,0);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
    }
  }
  return;
}

