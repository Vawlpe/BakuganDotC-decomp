#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4
FUN_08a27198(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if ((((param_1 == 0) || (param_5 == 0)) || (iVar3 = FUN_08a26d14(param_2,param_3), iVar3 == 0)) ||
     (iVar3 = FUN_08a26d44(param_2,param_3,param_4), iVar3 == 0)) {
    return 0;
  }
  FUN_08a12848(param_1);
  iVar10 = (int)*(char *)(iVar3 + 0x11);
  if (iVar10 != 0) {
    uVar6 = *(undefined4 *)(&DAT_08aa5e5c + *(char *)(iVar3 + 0x13) * 4);
    iVar12 = (int)*(short *)(iVar3 + 0x14);
    iVar11 = (int)*(short *)(iVar3 + 0x16);
    uVar4 = FUN_08a12a1c(1,param_5);
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    FUN_08a12094(uVar4,uVar6,0,iVar12,iVar11,0x10,1,iVar10,1,1,3,1,0x80,0,0,param_5);
    iVar5 = iVar3 + 0x30;
    if (iVar10 < 2) {
      iVar5 = 0;
    }
    iVar8 = *(short *)(iVar3 + 0xc) + iVar3;
    if (0 < iVar10) {
      iVar9 = 0;
      iVar7 = iVar5;
      do {
        uVar4 = FUN_08a10bb8(param_1,iVar9,0);
        FUN_08a26f68(uVar4,iVar8,iVar12,iVar11,(int)*(char *)(iVar3 + 0x13));
        iVar9 = iVar9 + 1;
        if (iVar5 != 0) {
          iVar12 = (iVar12 + 1) / 2;
          iVar11 = (iVar11 + 1) / 2;
          iVar8 = iVar8 + *(int *)(iVar7 + 0x10);
        }
        iVar7 = iVar7 + 4;
      } while (iVar10 != iVar9);
      bVar1 = *(byte *)(iVar3 + 0x12);
      goto LAB_08a27254;
    }
  }
  bVar1 = *(byte *)(iVar3 + 0x12);
LAB_08a27254:
  if ((bVar1 & 7) != 0) {
    iVar11 = *(int *)(&DAT_08aa5e5c + (bVar1 & 7) * 4);
    sVar2 = *(short *)(iVar3 + 0xe);
    uVar4 = thunk_FUN_08a12a1c(1,param_5);
    *(undefined4 *)(param_1 + 0x10) = uVar4;
    FUN_08a12094(uVar4,iVar11,0,(int)sVar2,1,0x10,1,1,1,2,3,1,0x10,0,0,param_5);
    sVar2 = *(short *)(iVar3 + 0xc);
    iVar10 = *(int *)(iVar3 + 8);
    iVar5 = FUN_08a10894(param_1,0,0);
    FUN_08a26f68(iVar5,sVar2 + iVar3 + iVar10,(int)*(short *)(iVar3 + 0xe),1,bVar1 & 7);
    if ((-1 < *(char *)(iVar3 + 0x12)) && (*(short *)(iVar3 + 0xe) == 0x100)) {
      if (iVar11 == 1) {
        iVar3 = 8;
        do {
          iVar11 = 0;
          iVar10 = iVar5;
          do {
            uVar4 = *(undefined4 *)(iVar10 + 0x20);
            iVar11 = iVar11 + 1;
            *(undefined4 *)(iVar10 + 0x20) = *(undefined4 *)(iVar10 + 0x10);
            *(undefined4 *)(iVar10 + 0x10) = uVar4;
            iVar10 = iVar10 + 4;
          } while (iVar11 != 4);
          iVar3 = iVar3 + -1;
          iVar5 = iVar5 + 0x40;
        } while (iVar3 != 0);
        zz_sceKernelDcacheWritebackAll();
        return 1;
      }
      iVar3 = 8;
      if (iVar11 == 3) {
        do {
          iVar11 = 0;
          iVar10 = iVar5;
          do {
            uVar4 = *(undefined4 *)(iVar10 + 0x40);
            iVar11 = iVar11 + 1;
            *(undefined4 *)(iVar10 + 0x40) = *(undefined4 *)(iVar10 + 0x20);
            *(undefined4 *)(iVar10 + 0x20) = uVar4;
            iVar10 = iVar10 + 4;
          } while (iVar11 != 8);
          iVar3 = iVar3 + -1;
          iVar5 = iVar5 + 0x80;
        } while (iVar3 != 0);
        zz_sceKernelDcacheWritebackAll();
        return 1;
      }
    }
  }
  zz_sceKernelDcacheWritebackAll();
  return 1;
}

