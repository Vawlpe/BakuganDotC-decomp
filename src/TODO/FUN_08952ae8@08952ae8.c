#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08952ae8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x5f8) == '\0') {
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,0x15,0);
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,0x16,2);
    cVar1 = *(char *)(param_1 + 0x74);
    if (cVar1 < '\x02') {
      if (-1 < cVar1) {
        if (cVar1 < '\x01') {
          uVar2 = _DONE_Get_DAT_08AAC9E0();
          FUN_0880cd9c(uVar2,7,0);
          FUN_0890a598(param_1,1);
        }
        else {
          uVar2 = _DONE_Get_DAT_08AAC9E0();
          FUN_0880cd9c(uVar2,7,0);
          FUN_0890a598(param_1,4);
        }
      }
    }
    else if (cVar1 < '\x03') {
      uVar2 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar2,7,1);
      FUN_0890a598(param_1,3);
    }
    else if (cVar1 < '\x04') {
      uVar2 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar2,7,2);
      FUN_0890a598(param_1,2);
      uVar2 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar2,0x15,(int)*(char *)(param_1 + 0xa44));
      uVar2 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar2,0x16,*(char *)(param_1 + 0xa44) + 2);
    }
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,3,0xffffffff);
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,4,0xffffffff);
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,5,0xffffffff);
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,6,0xffffffff);
    iVar3 = FUN_0880d354();
    if (iVar3 != 0) {
      uVar2 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar2,3,0);
      uVar2 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar2,4,0);
    }
    iVar3 = 0;
    iVar6 = 0;
    iVar8 = 0;
    do {
      iVar7 = 0;
      iVar5 = 0;
      do {
        iVar4 = _DONE_Get_DAT_08AAC9E0();
        if (*(int *)(iVar4 + 4) != 0) {
          *(undefined4 *)(*(int *)(iVar4 + 4) + iVar6 + iVar5 + 0xf8) = 0xff;
        }
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 4;
      } while (iVar7 < 2);
      iVar5 = 0;
      iVar7 = 0;
      do {
        iVar4 = _DONE_Get_DAT_08AAC9E0();
        if (*(int *)(iVar4 + 4) != 0) {
          *(undefined4 *)(*(int *)(iVar4 + 4) + iVar6 + iVar7 + 0xd8) = 0xff;
        }
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 4;
      } while (iVar5 < 2);
      iVar5 = _DONE_Get_DAT_08AAC9E0();
      if (*(int *)(iVar5 + 4) != 0) {
        *(undefined4 *)(*(int *)(iVar5 + 4) + iVar8 + 0x118) = 100;
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + 8;
      iVar8 = iVar8 + 4;
    } while (iVar3 < 4);
  }
  else {
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar2,7,0);
    FUN_0890a598(param_1,0);
  }
  return;
}

