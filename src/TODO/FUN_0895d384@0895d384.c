#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0895d384(int param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (uint)*(ushort *)(param_1 + 0x5160);
  cVar3 = '\0';
  iVar5 = uVar6 << 2;
  iVar7 = param_1 + uVar6 * 0x28 + 0x78;
  uVar4 = uVar6;
  do {
    uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5);
    if (param_2 == '\0') {
      cVar1 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar2,iVar7,3);
    }
    else {
      cVar1 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar2,iVar7,3);
    }
    cVar3 = cVar3 + cVar1;
    uVar4 = uVar4 + 1;
    iVar5 = iVar5 + 4;
    iVar7 = iVar7 + 0x28;
  } while (uVar4 <= uVar6);
  return cVar3 != '\0';
}

