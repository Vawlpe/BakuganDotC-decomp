#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08914e18(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
  *(undefined *)(*piVar1 + *(int *)(param_1 + 0x16a8) * 6 + param_2 + 0x540) = 1;
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 * 4 + 0x108);
  *(uint *)(iVar3 + 0xd0) = *(uint *)(iVar3 + 0xd0) | 1;
  iVar3 = 0;
  param_2 = param_2 * 0x14;
  do {
    iVar3 = iVar3 + 1;
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + param_2 + 0x120);
    *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    param_2 = param_2 + 4;
  } while (iVar3 < 5);
  uVar5 = *(undefined4 *)(param_1 + 0x13dc);
  uVar2 = FUN_089d9674();
  uVar2 = FUN_089d9c84(uVar2,param_1 + 0x1628);
  FUN_089df400(0x3e4ccccd,uVar5,uVar2,0);
  if ((*(int **)(param_1 + 0x50) != (int *)0x0) && (iVar3 = **(int **)(param_1 + 0x50), iVar3 != 0))
  {
    FUN_089f8918(iVar3,0);
  }
  uVar2 = _DONE_Get_DAT_08AAC9E0();
  iVar3 = FUN_0880d0ac(uVar2,0x2d);
  iVar4 = FUN_08913084(*(undefined4 *)(param_1 + 0x16a8),*(undefined4 *)(param_1 + 0x1698));
  *(int *)(param_1 + 0x16ac) = iVar3 + *(short *)(&DAT_08a9bbcc + iVar4 * 4);
  piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x5c);
  FUN_08914254(*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 100),param_1,
               *(undefined4 *)(*piVar1 + 0x464),0x17,0);
  iVar3 = *(int *)(*(int *)(param_1 + 0x1c) + 0x78);
  FUN_08914254(*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 100),param_1,
               *(undefined4 *)(param_1 + 0x16ac),0x1e,1);
  piVar1 = (int *)_DONE_Get_DAT_08AAC9E0();
  iVar6 = *(int *)(*piVar1 + 0x464);
  uVar2 = _DONE_Get_DAT_08AAC9E0();
  iVar3 = FUN_0880d0ac(uVar2,0x2d);
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x94);
  FUN_08914254(*(undefined4 *)(iVar4 + 0x60),*(undefined4 *)(iVar4 + 100),param_1,iVar6 - iVar3,0x25
               ,0);
  iVar3 = _DONE_NotZero_DAT_08AC5874();
  if (iVar3 != 0) {
    uVar2 = _DONE_Get_DAT_08AC5874();
    FUN_089c6350(uVar2,10,0,0);
  }
  return;
}

