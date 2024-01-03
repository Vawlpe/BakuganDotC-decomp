#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0896f7fc(int param_1,char param_2)

{
  char cVar1;
  undefined uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 == '\0') {
    uVar3 = DONE_Get_DAT_08AAC9E0();
    uVar2 = FUN_0880d0ac(uVar3,0x18);
    *(undefined *)(param_1 + 0xba9) = uVar2;
    *(undefined *)(param_1 + 0xbad) = 3;
    uVar3 = DONE_Get_DAT_08AAC9E0();
    iVar4 = FUN_0880d0ac(uVar3,0x19);
    if (((iVar4 == 300) || (iVar4 == 200)) || (iVar4 == 100)) {
      uVar3 = DONE_Get_DAT_08AAC9E0();
      iVar4 = FUN_0880d0ac(uVar3,0x19);
      *(char *)(param_1 + 0xbaa) = (char)(iVar4 / 100) + -1;
    }
    else {
      *(undefined *)(param_1 + 0xbaa) = 3;
    }
    uVar3 = DONE_Get_DAT_08AAC9E0();
    iVar4 = FUN_0880d0ac(uVar3,7);
    if (iVar4 == 0) {
      *(undefined *)(param_1 + 0xbae) = 4;
    }
    else {
      *(undefined *)(param_1 + 0xbae) = 3;
    }
    uVar3 = DONE_Get_DAT_08AAC9E0();
    uVar2 = FUN_0880d0ac(uVar3,0x1a);
    *(undefined *)(param_1 + 0xbab) = uVar2;
    *(undefined *)(param_1 + 0xbaf) = 2;
    uVar3 = DONE_Get_DAT_08AAC9E0();
    iVar4 = FUN_0880d0ac(uVar3,0x1b);
    if (iVar4 == 5) {
      *(undefined *)(param_1 + 0xbac) = 2;
    }
    else if (iVar4 == 3) {
      *(undefined *)(param_1 + 0xbac) = 1;
    }
    else if (iVar4 == 1) {
      *(undefined *)(param_1 + 0xbac) = 0;
    }
    else {
      *(undefined *)(param_1 + 0xbac) = 0xff;
    }
    uVar3 = DONE_Get_DAT_08AAC9E0();
    iVar4 = FUN_0880d0ac(uVar3,7);
    if (iVar4 == 0) {
      *(undefined *)(param_1 + 0xbb0) = 3;
      return;
    }
    *(undefined *)(param_1 + 0xbb0) = 1;
    return;
  }
  uVar3 = DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar3,0x18,(int)*(char *)(param_1 + 0xba9));
  if ((*(char *)(param_1 + 0xbaa) < '\0') || ('\x02' < *(char *)(param_1 + 0xbaa))) {
    uVar3 = DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar3,0x19,0xffffffff);
  }
  else {
    uVar3 = DONE_Get_DAT_08AAC9E0();
    FUN_0880cd9c(uVar3,0x19,*(char *)(param_1 + 0xbaa) * 100 + 100);
  }
  uVar3 = DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar3,0x1a,(int)*(char *)(param_1 + 0xbab));
  cVar1 = *(char *)(param_1 + 0xbac);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      uVar3 = DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar3,0x1b,1);
      return;
    }
  }
  else {
    if (cVar1 < '\x02') {
      uVar3 = DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar3,0x1b,3);
      return;
    }
    if (cVar1 < '\x03') {
      uVar3 = DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar3,0x1b,5);
      return;
    }
  }
  uVar3 = DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar3,0x1b,0);
  return;
}

