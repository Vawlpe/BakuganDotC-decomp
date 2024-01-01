#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a26988(undefined4 *param_1,int param_2)

{
  short sVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  
  iVar4 = FUN_08a26418(param_2,4,0);
  iVar5 = FUN_08a26418(param_2,5,0);
  if (iVar4 == 0) {
LAB_08a26b7c:
    bVar3 = false;
    if (iVar5 == 0) goto LAB_08a26b84;
LAB_08a26a24:
    FUN_08a129e0(1,*param_1);
    FUN_08a26904(param_1,iVar5,0x10);
    if (*(ushort *)(*(int *)(iVar5 + 0xc) + iVar5 + 0x2e) < 2) goto LAB_08a26b84;
    bVar3 = true;
LAB_08a26a5c:
    iVar4 = *(int *)(param_2 + 4);
  }
  else {
    bVar3 = true;
    FUN_08a12984(1,*param_1);
    FUN_08a26904(param_1,iVar4,0x80);
    if (*(ushort *)(*(int *)(iVar4 + 0xc) + iVar4 + 0x2e) < 2) goto LAB_08a26b7c;
    if (iVar5 != 0) goto LAB_08a26a24;
LAB_08a26b84:
    if (bVar3) goto LAB_08a26a5c;
    FUN_08a10200(*param_1,1,4,0x80);
    iVar4 = *(int *)(param_2 + 4);
  }
  psVar7 = (short *)(iVar4 + param_2);
  psVar6 = (short *)(param_2 + *(int *)(param_2 + 8));
  iVar4 = 0;
  if (psVar6 < psVar7) {
    do {
      sVar1 = *psVar6;
      while (sVar1 == 6) {
        iVar5 = *(int *)(psVar6 + 6);
        iVar4 = iVar4 + 1;
        uVar2 = *(ushort *)((int)psVar6 + iVar5 + 0xe);
        FUN_08a10200(*param_1,0,4,(uint)*(ushort *)((int)psVar6 + iVar5 + 0xc) << 2);
        FUN_08a10200(*param_1,0,4,(uint)uVar2 << 3);
        FUN_08a10200(*param_1,0,4,
                     *(int *)((int)psVar6 + iVar5 + 0x1c) - *(int *)((int)psVar6 + iVar5 + 0x18));
        psVar6 = (short *)(*(int *)(psVar6 + 2) + (int)psVar6);
        if (psVar7 <= psVar6) goto LAB_08a26b08;
        sVar1 = *psVar6;
      }
      psVar6 = (short *)(*(int *)(psVar6 + 2) + (int)psVar6);
    } while (psVar6 < psVar7);
LAB_08a26b08:
    if (iVar4 != 0) goto LAB_08a26b10;
  }
  if (!bVar3) {
    FUN_08a12954(0,*param_1);
    return;
  }
LAB_08a26b10:
  FUN_08a12954(iVar4 + 1,*param_1);
  return;
}

