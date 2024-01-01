#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089217c4(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  while( true ) {
    uVar1 = FUN_08921788(param_1,cVar3);
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0xff) break;
    iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + uVar1 * 4);
    if (param_2 == '\0') {
      *(uint *)(iVar2 + 0xd0) = *(uint *)(iVar2 + 0xd0) | 1;
      iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + uVar1 * 4);
    }
    FUN_089a5408(0x3f800000,param_2,iVar2,param_1 + uVar1 * 0x28 + 0x7c,1);
    cVar3 = cVar3 + '\x01';
  }
  return;
}

