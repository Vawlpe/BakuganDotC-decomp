#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0895f150(int param_1,char param_2)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  char cVar7;
  
  if (*(char *)(param_1 + 0x4cda) < '\x03') {
    return true;
  }
  uVar6 = (uint)*(ushort *)(param_1 + 0x5180);
  cVar7 = '\0';
  if (uVar6 < uVar6 + 3) {
    iVar5 = uVar6 << 2;
    iVar4 = param_1 + uVar6 * 0x28 + 0x78;
    do {
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar5);
      if (param_2 == '\0') {
        cVar2 = FUN_089a91a0(0x3fc00000,0x3f800000,0x41000000,0,uVar3,iVar4,1);
        uVar1 = *(ushort *)(param_1 + 0x5180);
      }
      else {
        cVar2 = FUN_089a91a0(0x3f800000,0x3fc00000,0x41000000,param_2,uVar3,iVar4,1);
        uVar1 = *(ushort *)(param_1 + 0x5180);
      }
      cVar7 = cVar7 + cVar2;
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 0x28;
    } while ((int)uVar6 < (int)(uVar1 + 3));
  }
  return cVar7 != '\0';
}

