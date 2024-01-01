#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a160d0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined auStack_a0 [112];
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    uVar4 = (uint)*(ushort *)(param_1 + 0xc);
    iVar7 = *(int *)(param_1 + 8);
    iVar6 = uVar4 + 1;
    FUN_08a12a64(auStack_a0);
    FUN_08a143f4(iVar6,auStack_a0);
    if (uVar4 != 0) {
      uVar5 = 0;
      iVar1 = iVar7;
      do {
        uVar5 = uVar5 + 1;
        FUN_08a1c9d8(0,iVar1,1,auStack_a0);
        iVar1 = iVar1 + 0x40;
      } while (uVar4 != uVar5);
    }
    iVar1 = FUN_08a136f0(auStack_a0);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar1 = FUN_08a14564(iVar6,auStack_a0);
      if (uVar4 != 0) {
        uVar5 = 0;
        iVar2 = iVar7;
        iVar3 = iVar1;
        do {
          uVar5 = uVar5 + 1;
          FUN_08a1d370(iVar3,iVar2,1,auStack_a0);
          iVar3 = iVar3 + 0x40;
          iVar2 = iVar2 + 0x40;
        } while (uVar4 != uVar5);
      }
      FUN_08a12fb4(auStack_a0);
      FUN_08a14a1c(iVar7,uVar4);
      iVar2 = iVar1 + uVar4 * 0x40;
      *(short *)(param_1 + 0xc) = (short)iVar6;
      *(int *)(param_1 + 8) = iVar1;
      if (iVar2 != 0) {
        uVar4 = *(uint *)(&DAT_08aa50a8 + param_2 * 4);
        *(uint *)(iVar2 + 0x20) = *(uint *)(iVar2 + 0x20) & 0xfe9ffffe | uVar4;
        *(short *)(iVar2 + 8) = (short)param_2;
        if ((uVar4 & 1) == 0) {
          *(ushort *)(iVar2 + 0x14) = *(ushort *)(iVar2 + 0x14) & 0xfffe;
        }
        else {
          *(ushort *)(iVar2 + 0x14) = *(ushort *)(iVar2 + 0x14) | 1;
          *(ushort *)(iVar2 + 0x16) = *(ushort *)(iVar2 + 0x16) & 0xfffe;
        }
        if ((uVar4 & 0x200000) == 0) {
          *(undefined *)(iVar2 + 0x12) = 7;
        }
        else {
          *(undefined *)(iVar2 + 0x12) = 1;
        }
      }
    }
  }
  return iVar2;
}

