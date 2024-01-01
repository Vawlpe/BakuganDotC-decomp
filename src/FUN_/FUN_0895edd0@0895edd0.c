#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0895edd0(int param_1,char param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = (uint)*(ushort *)(param_1 + 0x5174) + (param_3 & 0xff);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3 * 4);
  iVar3 = param_1 + iVar3 * 0x28 + 0x78;
  if (param_2 == '\0') {
    cVar1 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar2,iVar3,3);
    return cVar1 != '\0';
  }
  cVar1 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar2,iVar3,3);
  return cVar1 != '\0';
}

