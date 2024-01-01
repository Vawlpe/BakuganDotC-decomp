#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0893be1c(int param_1,char param_2)

{
  int iVar1;
  
  switch(*(undefined *)(param_1 + 0x5ee)) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    break;
  case 9:
    if (param_2 == '\0') {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x7c);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_0893bddc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x7c),
                   *(int *)(param_1 + 0x7ec) + 1U & 0xff);
      iVar1 = *(int *)(*(int *)(param_1 + 0x1c) + 0x80);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) | 1;
      FUN_08939b58(param_1,0,0x1f);
      FUN_08939b58(param_1,0,0x20);
    }
    else {
      FUN_08939b58(param_1,param_2,0x1f);
      FUN_08939b58(param_1,param_2,0x20);
    }
  }
  return;
}

