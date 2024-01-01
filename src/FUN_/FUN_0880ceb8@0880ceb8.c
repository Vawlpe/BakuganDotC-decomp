#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0880ceb8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*param_1 != 0) {
    memset_jak(*param_1,0,0xed0);
    *(undefined4 *)*param_1 = 1;
    iVar1 = FUN_0880c840();
    *(int *)(*param_1 + 4) = iVar1 + 2;
    FUN_089ead80(*param_1 + 0x470,"New Player");
    FUN_0880c85c(param_1,10);
    FUN_0880c8f4(param_1,10);
    FUN_0880c97c(param_1,10);
    *(undefined4 *)(*param_1 + 0x464) = 0;
    FUN_0880ca04(param_1);
    *(byte *)(*param_1 + 0x8b) = *(byte *)(*param_1 + 0x8b) | 1;
    *(byte *)(*param_1 + 0x8d) = *(byte *)(*param_1 + 0x8d) | 1;
    *(byte *)(*param_1 + 0x8c) = *(byte *)(*param_1 + 0x8c) | 2;
    *(byte *)(*param_1 + 0x8e) = *(byte *)(*param_1 + 0x8e) | 2;
    memset_jak(*param_1 + 0x250,0,0x80);
    memset_jak(*param_1 + 0x410,0,1);
    memset_jak(*param_1 + 0x138,0,0x108);
    memset_jak(*param_1 + 0x240,0,0x10);
    memset_jak(*param_1 + 0x411,0,0x50);
    memset_jak(*param_1 + 0x2d0,0xffffffff,0x140);
    *(undefined *)(*param_1 + 0x461) = 0;
    memset_jak(*param_1 + 0x42,0xff,0x3e);
    *(undefined4 *)(DAT_08ac58c4 + 0x10) = 0xffffffff;
    *(undefined4 *)(DAT_08ac58c4 + 0x14) = 0xffffffff;
    *(undefined4 *)(DAT_08ac58c4 + 0x18) = 0xffffffff;
    *(undefined4 *)(DAT_08ac58c4 + 0x1c) = 0xffffffff;
    uVar2 = FUN_0880cc48();
    FUN_0880cd9c(uVar2,4,0xffffffff);
    uVar2 = FUN_0880cc48();
    FUN_0880cd9c(uVar2,5,0xffffffff);
    uVar2 = FUN_0880cc48();
    FUN_0880cd9c(uVar2,6,0xffffffff);
    FUN_0880ce1c(param_1,0);
    FUN_089cc664();
  }
  return;
}

