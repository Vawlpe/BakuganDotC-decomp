#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0889dcec(void)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0889dcc8();
  FUN_0889cf44(0x41c00000,uVar1);
  iVar2 = FUN_089f7720("StopWall");
  *(undefined4 *)(*(int *)(iVar2 + 0xa0) + 0x1c) = 0xbf800000;
  *(undefined4 *)(*(int *)(iVar2 + 0xa0) + 0x18) = 0xbb83126f;
  FUN_089f7c90(*(undefined4 *)(*(int *)(iVar2 + 0xa0) + 0x18),iVar2);
  FUN_089f7c04(*(undefined4 *)(*(int *)(iVar2 + 0xa0) + 0x1c),iVar2);
  return;
}

