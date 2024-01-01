#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891ffc8(int param_1,char param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_2 == '\0') {
    piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x90);
    FUN_0891fd70(*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 100),param_1,
                 *(undefined4 *)(*piVar1 + 0x464),0x24,0);
    iVar5 = 0x1e;
    iVar4 = 0x78;
    iVar3 = param_1 + 0x52c;
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = 0;
      FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3
                   ,9);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x25);
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    uVar2 = FUN_0880d0ac(uVar2,0x2d);
    iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0xac);
    FUN_0891fd70(*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 100),param_1,uVar2,0x2b,1);
    iVar5 = 0x25;
    iVar4 = 0x94;
    iVar3 = param_1 + 0x644;
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = 0;
      FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3
                   ,9);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x2c);
    piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
    iVar5 = *(int *)(*piVar1 + 0x464);
    uVar2 = _DONE_Get_DAT_08AAC9E0();
    iVar3 = FUN_0880d0ac(uVar2,0x2d);
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 200);
    FUN_0891fd70(*(undefined4 *)(iVar4 + 0x60),*(undefined4 *)(iVar4 + 100),param_1,iVar5 - iVar3,
                 0x32,0);
    iVar5 = 0x2c;
    iVar4 = 0xb0;
    iVar3 = param_1 + 0x75c;
    do {
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c) + iVar4) + 0xbc) = 0;
      FUN_089a54cc(0x3f800000,0xc2000000,0,0,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4),iVar3
                   ,9);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x33);
  }
  else {
    iVar5 = 0x1e;
    iVar4 = 0x78;
    iVar3 = param_1 + 0x52c;
    do {
      FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4)
                   ,iVar3,9);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x25);
    iVar5 = 0x25;
    iVar4 = 0x94;
    iVar3 = param_1 + 0x644;
    do {
      FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4)
                   ,iVar3,9);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x2c);
    iVar5 = 0x2c;
    iVar4 = 0xb0;
    iVar3 = param_1 + 0x75c;
    do {
      FUN_089a54cc(0x3f800000,0,0xc2000000,param_2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + iVar4)
                   ,iVar3,9);
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
      iVar3 = iVar3 + 0x28;
    } while (iVar5 < 0x33);
  }
  return;
}

