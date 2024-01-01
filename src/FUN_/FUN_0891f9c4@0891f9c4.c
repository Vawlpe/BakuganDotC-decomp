#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0891f9c4(int param_1,undefined param_2)

{
  char cVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  while( true ) {
    uVar2 = FUN_0891f980(param_1,cVar3);
    uVar2 = uVar2 & 0xffff;
    if (uVar2 == 0xff) break;
    cVar1 = FUN_089a91a0(0x3f800000,0x3f800000,0x41800000,param_2,
                         *(undefined4 *)(*(int *)(param_1 + 0x1c) + uVar2 * 4),
                         param_1 + uVar2 * 0x28 + 0x7c,9);
    cVar4 = cVar4 + cVar1;
    cVar3 = cVar3 + '\x01';
  }
  return cVar4 != '\0';
}

