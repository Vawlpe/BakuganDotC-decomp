#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0899b684(int param_1,char param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + param_3 * 4);
  iVar2 = param_1 + param_3 * 0x28 + 0x74;
  if (param_2 == '\0') {
    cVar1 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41800000,0,uVar3,iVar2,7);
    return cVar1 != '\0';
  }
  cVar1 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41800000,param_2,uVar3,iVar2,7);
  return cVar1 != '\0';
}

