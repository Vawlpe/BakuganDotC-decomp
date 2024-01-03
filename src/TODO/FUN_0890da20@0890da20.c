#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890da20(int param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  float fVar10;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  
  iVar4 = *(int *)(param_1 + 0x14);
  if (iVar4 < 1) {
    if (-1 < iVar4) {
      iVar4 = FUN_089eb134(*(undefined4 *)(DAT_08ac0e80 + 0xc));
      uVar5 = *(undefined4 *)(DAT_08ac0e80 + 0xc);
      if (iVar4 != 0) {
        uVar5 = FUN_089eb248(uVar5);
        FUN_08817a90(uVar5,0);
        iVar4 = FUN_089eb248(*(undefined4 *)(DAT_08ac0e80 + 0xc));
        *(undefined4 *)(iVar4 + 0x9c) = 0x40400000;
        iVar4 = FUN_089eb248(*(undefined4 *)(DAT_08ac0e80 + 0xc));
        *(undefined4 *)(iVar4 + 0xe0) = 0x43e60000;
        *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
        uVar5 = *(undefined4 *)(DAT_08ac0e80 + 0xc);
      }
      goto LAB_0890e084;
    }
  }
  else if (iVar4 < 2) {
    puVar6 = &UNK_08a9b09c;
    iVar7 = 0;
    iVar4 = 0;
    do {
      psVar3 = (short *)FUN_0881a300(0x2b,iVar7);
      iVar9 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar4);
      uVar5 = FUN_089f7720(*(undefined4 *)(psVar3 + 8));
      *(undefined4 *)(iVar9 + 0xd4) = uVar5;
      if ((iVar7 < 0xb) || (0x10 < iVar7)) {
        FUN_089f3eb8(iVar9,2);
        sVar1 = psVar3[1];
        sVar2 = psVar3[2];
        *(float *)(iVar9 + 0x60) = (float)(int)*psVar3;
        *(undefined4 *)(iVar9 + 0x6c) = 0;
        *(float *)(iVar9 + 100) = (float)(int)sVar1;
        *(float *)(iVar9 + 0x68) = (float)(int)sVar2;
        FUN_0890bc38((float)(int)psVar3[3],(float)(int)psVar3[4],(float)(int)psVar3[5],
                     (float)(int)psVar3[6],param_1,iVar9);
      }
      else {
        FUN_089f4924(0x42a00000,0x42a00000,iVar9);
        local_40 = 0;
        local_3c = 0;
        FUN_0890c100(param_1,puVar6[(int)*(float *)(iVar9 + 0x8c)],&local_40,&local_3c);
        FUN_089f4a90(local_40,local_3c,iVar9);
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 4;
      puVar6 = puVar6 + 0x14;
    } while (iVar7 < 0x17);
    iVar7 = 0x15;
    iVar4 = 0x54;
    do {
      iVar9 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar4);
      *(float *)(iVar9 + 0x60) = *(float *)(iVar9 + 0x60) + 32.0;
      if (iVar7 == 0x15) {
        FUN_089f46dc(iVar9);
        *(undefined4 *)(iVar9 + 0x84) = 0x3f19999a;
        *(undefined4 *)(iVar9 + 0x80) = 0x3f19999a;
        FUN_089f4954(0x3f19999a,*(undefined4 *)(iVar9 + 0x84),*(undefined4 *)(iVar9 + 0x88),iVar9,0)
        ;
      }
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar7 < 0x17);
    iVar4 = FUN_0890b018(param_1);
    if (iVar4 == 0) {
      *(undefined4 *)(*(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x54) + 0xbc) = 0;
      iVar4 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x54);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
      iVar4 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x58);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) | 1;
    }
    else {
      FUN_0890d3a0(param_1);
      iVar4 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x54);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
      iVar4 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + 0x58);
      *(uint *)(iVar4 + 0xd0) = *(uint *)(iVar4 + 0xd0) & 0xfffffffe;
    }
    iVar4 = FUN_0890d34c(param_1);
    iVar7 = 0xb;
    if (iVar4 == 0) {
      iVar4 = 0x2c;
      do {
        iVar7 = iVar7 + 1;
        iVar9 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar4);
        *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) & 0xfffffffe;
        iVar4 = iVar4 + 4;
      } while (iVar7 < 0x11);
    }
    else {
      *(undefined *)(param_1 + 0x238) = 1;
      iVar7 = 0xb;
      iVar4 = 0x2c;
      do {
        iVar7 = iVar7 + 1;
        iVar9 = *(int *)(*(int *)(DAT_08ac0e80 + 4) + iVar4);
        *(uint *)(iVar9 + 0xd0) = *(uint *)(iVar9 + 0xd0) | 1;
        iVar4 = iVar4 + 4;
      } while (iVar7 < 0x11);
    }
    iVar4 = DONE_NotZero_DAT_08AAC9E0();
    if (iVar4 != 0) {
      uVar8 = *(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x24);
      uVar5 = DONE_Get_DAT_08AAC9E0();
      iVar4 = FUN_0880dba8(uVar5);
      FUN_089f4bf4((float)*(int *)(&DAT_08a9b130 + iVar4 * 4),uVar8);
      uVar8 = *(undefined4 *)(*(int *)(DAT_08ac0e80 + 4) + 0x58);
      uVar5 = DONE_Get_DAT_08AAC9E0();
      iVar4 = FUN_0880dba8(uVar5);
      FUN_089f4bf4((float)*(int *)(&DAT_08a9b130 + iVar4 * 4),uVar8);
    }
    if (*(int *)(DAT_08ac0e80 + 0x10) == 0) {
      local_38 = 0;
      FUN_089d8634();
      uVar5 = FUN_089d81a4();
      FUN_089d816c(1);
      iVar7 = FUN_089d7d74(0xb0,0,0);
      FUN_089d816c(uVar5);
      FUN_089d866c();
      iVar4 = local_38;
      if (iVar7 != 0) {
        FUN_089f845c(iVar7,"nowloadingflash.fab",&DAT_08ae0400,DAT_08ac0e80 + 0x14);
        iVar4 = iVar7;
      }
      *(int *)(DAT_08ac0e80 + 0x10) = iVar4;
      *(undefined4 *)(*(int *)(DAT_08ac0e80 + 0x10) + 0x98) = 0x44bcc000;
      *(undefined *)(*(int *)(DAT_08ac0e80 + 0x10) + 0x9c) = 1;
      *(undefined4 *)(DAT_08ac0e80 + 0x28) = 0;
      uVar5 = FUN_089f889c(*(undefined4 *)(DAT_08ac0e80 + 0x10));
      *(undefined4 *)(DAT_08ac0e80 + 0x2c) = uVar5;
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
    uVar5 = *(undefined4 *)(DAT_08ac0e80 + 0xc);
    goto LAB_0890e084;
  }
  if (*(int *)(DAT_08ac0e80 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x14) = 1;
    uVar5 = *(undefined4 *)(DAT_08ac0e80 + 0xc);
  }
  else {
    iVar4 = FUN_089eb134(*(undefined4 *)(DAT_08ac0e80 + 0xc));
    if (iVar4 != 0) {
      uVar5 = FUN_089eb248(*(undefined4 *)(DAT_08ac0e80 + 0xc));
      iVar7 = param_1 + 0x3c;
      FUN_088184e8(0,uVar5,iVar7,param_1 + 0x228,param_1 + 0x22c,0);
      fVar10 = *(float *)(param_1 + 0x228);
      iVar4 = FUN_089eb248(*(undefined4 *)(DAT_08ac0e80 + 0xc));
      if (fVar10 <= *(float *)(iVar4 + 0x98) * 3.0) {
        FUN_089eb14c(*(undefined4 *)(DAT_08ac0e80 + 0xc),0xf0,0xc0,iVar7,1,0);
      }
      else {
        fVar10 = *(float *)(param_1 + 0x228);
        iVar4 = FUN_089eb248();
        if (fVar10 <= *(float *)(iVar4 + 0x98) * 4.0) {
          FUN_089eb14c(*(undefined4 *)(DAT_08ac0e80 + 0xc),0xf0,0xba,iVar7,1,0);
        }
        else {
          FUN_089eb14c(*(undefined4 *)(DAT_08ac0e80 + 0xc),0xf0,0xb4,iVar7,1,0);
        }
      }
    }
    FUN_089f8918(*(undefined4 *)(DAT_08ac0e80 + 0x10),0);
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    *(undefined4 *)(param_1 + 0x1c8) = 0xbf800000;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    *(undefined4 *)(param_1 + 0x14) = 0;
    uVar5 = *(undefined4 *)(DAT_08ac0e80 + 0xc);
  }
LAB_0890e084:
  iVar4 = FUN_089eb134(uVar5);
  if (iVar4 != 0) {
    FUN_0890cff4(param_1);
  }
  return;
}

