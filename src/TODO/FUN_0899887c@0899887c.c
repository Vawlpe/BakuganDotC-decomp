#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0899887c(int param_1)

{
  undefined uVar1;
  undefined4 uVar2;
  undefined *ptr;
  int iVar3;
  
  iVar3 = 0;
  ptr = (undefined *)(param_1 + 0x2330);
  do {
    memset_jak(ptr,0,0x10);
    iVar3 = iVar3 + 1;
    ptr = ptr + 0x10;
  } while (iVar3 < 4);
  param_1 = param_1 + *(int *)(param_1 + 0x2370) * 0x10;
  *(undefined *)(param_1 + 0x233c) = 0xff;
  *(undefined2 *)(param_1 + 0x233e) = 0;
  uVar2 = _DONE_Get_DAT_08AAC9E0();
  iVar3 = FUN_0880d0ac(uVar2,0x19);
  if (iVar3 == 300) {
    uVar1 = 2;
  }
  else if (iVar3 == 200) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xff;
    if (iVar3 == 100) {
      uVar1 = 0;
    }
  }
  *(undefined *)(param_1 + 0x2338) = uVar1;
  uVar2 = _DONE_Get_DAT_08AAC9E0();
  uVar1 = FUN_0880d0ac(uVar2,0x1a);
  *(undefined *)(param_1 + 0x2339) = uVar1;
  uVar2 = _DONE_Get_DAT_08AAC9E0();
  iVar3 = FUN_0880d0ac(uVar2,0x1b);
  if (iVar3 == 5) {
    iVar3 = 2;
  }
  else if (iVar3 == 3) {
    iVar3 = 1;
  }
  else if (iVar3 == 1) {
    iVar3 = 0;
  }
  *(char *)(param_1 + 0x233a) = (char)iVar3;
  return;
}

