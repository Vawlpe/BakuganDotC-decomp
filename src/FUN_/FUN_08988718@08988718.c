#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08988718(int param_1,char param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar6 = 0x3fc00000;
  uVar7 = 0x3f800000;
  if (param_2 == '\0') {
    uVar7 = 0x3fc00000;
    uVar6 = 0x3f800000;
  }
  if (*(char *)(param_1 + 0x8e3) == '\0') {
    uVar8 = 0x41800000;
  }
  else {
    uVar8 = 0x41000000;
  }
  iVar4 = 0;
  cVar5 = '\0';
  iVar3 = 0;
  iVar2 = param_1 + 0x74;
  do {
    cVar1 = FUN_089a91a0(uVar7,uVar6,uVar8,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3)
                         ,iVar2,3);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 6);
  iVar4 = 0x1f;
  iVar3 = 0x7c;
  iVar2 = param_1 + 0x54c;
  do {
    cVar1 = FUN_089a91a0(uVar7,uVar6,uVar8,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3)
                         ,iVar2,3);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0x25);
  iVar4 = 7;
  iVar3 = 0x1c;
  iVar2 = param_1 + 0x18c;
  do {
    cVar1 = FUN_089a91a0(uVar7,uVar6,uVar8,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3)
                         ,iVar2,3);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0xd);
  iVar4 = 0x13;
  iVar3 = 0x4c;
  iVar2 = param_1 + 0x36c;
  do {
    cVar1 = FUN_089a91a0(uVar7,uVar6,uVar8,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar3)
                         ,iVar2,3);
    cVar5 = cVar5 + cVar1;
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
    iVar2 = iVar2 + 0x28;
  } while (iVar4 < 0x19);
  return cVar5 != '\0';
}

