#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0893e28c(int param_1,undefined param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar3 = 1;
  do {
    cVar1 = FUN_0893dfa4(param_1,param_2,uVar3 & 0xff);
    cVar4 = cVar4 + cVar1;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0xb);
  uVar3 = 0x14;
  iVar2 = 0x50;
  do {
    FUN_089f4a90((float)((int)(uVar3 - 0x14) / 5),(float)((int)(uVar3 - 0x14) % 5),
                 *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar2));
    cVar1 = FUN_0893dfa4(param_1,param_2,uVar3 & 0xff);
    cVar4 = cVar4 + cVar1;
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 4;
  } while ((int)uVar3 < 0x1e);
  uVar3 = 0xb;
  do {
    cVar1 = FUN_0893dfa4(param_1,param_2,uVar3 & 0xff);
    cVar4 = cVar4 + cVar1;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0xd);
  uVar3 = 0x20;
  do {
    cVar1 = FUN_0893dfa4(param_1,param_2,uVar3 & 0xff);
    cVar4 = cVar4 + cVar1;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x22);
  cVar1 = FUN_0893dfa4(param_1,param_2,0xd);
  cVar4 = cVar4 + cVar1;
  uVar3 = 0x1e;
  do {
    cVar1 = FUN_0893dfa4(param_1,param_2,uVar3 & 0xff);
    cVar4 = cVar4 + cVar1;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x20);
  uVar3 = 0xe;
  do {
    cVar1 = FUN_0893dfa4(param_1,param_2,uVar3 & 0xff);
    cVar4 = cVar4 + cVar1;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x14);
  uVar3 = 0x26;
  do {
    cVar1 = FUN_0893dfa4(param_1,param_2,uVar3 & 0xff);
    cVar4 = cVar4 + cVar1;
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x27);
  return cVar4 != '\0';
}

