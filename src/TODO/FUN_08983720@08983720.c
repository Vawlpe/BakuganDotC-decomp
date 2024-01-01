#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08983720(int param_1,char param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = 0x3fc00000;
  uVar6 = 0x3f800000;
  if (param_2 == '\0') {
    uVar6 = 0x3fc00000;
    uVar7 = 0x3f800000;
  }
  if (*(char *)(param_1 + 0xbcf) == '\0') {
    uVar8 = 0x41800000;
  }
  else if (*(char *)(param_1 + 0xcd4) == '\0') {
    uVar8 = 0x41000000;
  }
  else {
    uVar8 = 0x40800000;
  }
  iVar5 = 0;
  cVar2 = '\0';
  iVar4 = 0;
  iVar3 = param_1 + 0x74;
  do {
    cVar1 = FUN_089a91a0(uVar6,uVar7,uVar8,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4)
                         ,iVar3,3);
    cVar2 = cVar2 + cVar1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 0x28;
  } while (iVar5 < 4);
  iVar5 = 0x17;
  iVar4 = 0x5c;
  iVar3 = param_1 + 0x40c;
  do {
    cVar1 = FUN_089a91a0(uVar6,uVar7,uVar8,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4)
                         ,iVar3,3);
    cVar2 = cVar2 + cVar1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 0x28;
  } while (iVar5 < 0x1b);
  iVar5 = 5;
  iVar4 = 0x14;
  iVar3 = param_1 + 0x13c;
  do {
    cVar1 = FUN_089a91a0(uVar6,uVar7,uVar8,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4)
                         ,iVar3,3);
    cVar2 = cVar2 + cVar1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 0x28;
  } while (iVar5 < 9);
  iVar3 = 9;
  iVar4 = 0x24;
  iVar5 = param_1 + 0x1dc;
  do {
    cVar1 = FUN_089a91a0(uVar6,uVar7,uVar8,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4)
                         ,iVar5,3);
    cVar2 = cVar2 + cVar1;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 4;
    iVar5 = iVar5 + 0x28;
  } while (iVar3 < 0xd);
  return cVar2 != '\0';
}

