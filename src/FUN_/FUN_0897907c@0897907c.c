#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897907c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(undefined *)(param_1 + 0xee0) = 0;
  *(undefined *)(param_1 + 0xee1) = 0;
  *(undefined *)(param_1 + 0xee2) = 0;
  *(undefined *)(param_1 + 0xee3) = 0;
  *(undefined *)(param_1 + 0xee4) = 0;
  FUN_08978998();
  memset_jak(param_1 + 0x1300,0,0xc);
  memset_jak(param_1 + 0x130c,0,0xc);
  memset_jak(param_1 + 0x12a4,0,0x1c);
  iVar6 = 0;
  iVar5 = param_1;
  do {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x2a0,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_089e2910(iVar3);
      iVar4 = iVar3;
    }
    *(int *)(iVar5 + 0x1288) = iVar4;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar6 < 7);
  memset_jak(param_1 + 0x12c0,0,7);
  memset_jak(param_1 + 0x132c,0,0x40);
  cVar1 = *(char *)(param_1 + 0xee5);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      *(undefined *)(param_1 + 0xeec) = 0x13;
    }
  }
  else if (cVar1 < '\x02') {
    *(undefined *)(param_1 + 0xeec) = 0xb;
  }
  else if (cVar1 < '\x03') {
    *(undefined *)(param_1 + 0xeec) = 0x10;
  }
  memset_jak(param_1 + 0xef0,0,0x20);
  memset_jak(param_1 + 0xf10,0,0x224);
  FUN_08978f7c(param_1);
  return;
}

