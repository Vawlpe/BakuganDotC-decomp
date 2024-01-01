#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898b0f0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  *(undefined *)(param_1 + 0xe78) = 0;
  *(undefined *)(param_1 + 0xe79) = 0;
  *(undefined *)(param_1 + 0xe7a) = 0;
  *(undefined *)(param_1 + 0xe7b) = 0;
  *(undefined *)(param_1 + 0xe7c) = 0;
  FUN_0898ad80();
  memset_jak((undefined *)(param_1 + 0x1258),0,0xc);
  memset_jak((undefined *)(param_1 + 0x1264),0,0xc);
  memset_jak((undefined *)(param_1 + 0x1208),0,0x18);
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
    *(int *)(iVar5 + 0x11f0) = iVar4;
    iVar6 = iVar6 + 1;
    iVar5 = iVar5 + 4;
  } while (iVar6 < 6);
  memset_jak((undefined *)(param_1 + 0x1220),0,6);
  cVar1 = *(char *)(param_1 + 0xe7d);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      *(undefined *)(param_1 + 0xe84) = 0x12;
    }
  }
  else if (cVar1 < '\x02') {
    *(undefined *)(param_1 + 0xe84) = 2;
  }
  memset_jak((undefined *)(param_1 + 0xe88),0,0x20);
  memset_jak((undefined *)(param_1 + 0xea8),0,0x224);
  FUN_0898aff0(param_1);
  cVar1 = *(char *)(param_1 + 0xe7d);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      *(undefined4 *)(param_1 + 0x12ac) = 0x3da3d70a;
    }
  }
  else if (cVar1 < '\x02') {
    *(undefined4 *)(param_1 + 0x12ac) = 0x3d75c28f;
  }
  return;
}

