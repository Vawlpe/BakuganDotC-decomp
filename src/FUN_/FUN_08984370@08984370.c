#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_08984370(int param_1,char param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  
  uVar2 = 0x3ee66667;
  uVar3 = 0x3e99999a;
  if (param_2 == '\0') {
    uVar3 = 0x3ee66667;
    uVar2 = 0x3e99999a;
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
  iVar5 = 0xd;
  cVar4 = '\0';
  iVar6 = 0x34;
  iVar7 = param_1 + 0x27c;
  do {
    cVar1 = FUN_089a91a0(uVar3,uVar2,uVar8,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar6)
                         ,iVar7,3);
    cVar4 = cVar4 + cVar1;
    iVar5 = iVar5 + 1;
    iVar6 = iVar6 + 4;
    iVar7 = iVar7 + 0x28;
  } while (iVar5 < 0x11);
  return cVar4 != '\0';
}

