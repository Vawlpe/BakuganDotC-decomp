#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0885e388(int param_1)

{
  undefined auVar1 [16];
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  if ((*(int *)(param_1 + 8) == 8) || (*(int *)(param_1 + 8) == 0x14)) {
    uVar2 = FUN_08823eac(DAT_08ac5c70,0x96);
    *(undefined4 *)(param_1 + 0x41c) = uVar2;
    uVar2 = FUN_08823eac(DAT_08ac5c70,0x96);
    *(undefined4 *)(param_1 + 0x420) = uVar2;
    iVar4 = *(int *)(param_1 + 0x41c);
    *(int *)(iVar4 + 0x1fc) = param_1;
    if (param_1 != 0) {
      *(undefined4 *)(iVar4 + 0x200) = *(undefined4 *)(param_1 + 0xc);
    }
    iVar4 = *(int *)(param_1 + 0x420);
    *(int *)(iVar4 + 0x1fc) = param_1;
    if (param_1 != 0) {
      *(undefined4 *)(iVar4 + 0x200) = *(undefined4 *)(param_1 + 0xc);
    }
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x140,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      uVar2 = FUN_089ded60(param_1,"Bip01_yari");
      FUN_0882a26c(iVar3,param_1,uVar2);
      iVar4 = iVar3;
    }
    *(int *)(param_1 + 0x2f0) = iVar4;
  }
  else if (*(int *)(param_1 + 8) == 0x12) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x140,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      uVar2 = FUN_089ded60(param_1,"Bip01_sword");
      FUN_0882a26c(iVar3,param_1,uVar2);
      iVar4 = iVar3;
    }
    *(int *)(param_1 + 0x2f0) = iVar4;
  }
  else if (*(int *)(param_1 + 8) == 0xe) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x140,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar4 = 0;
    if (iVar3 != 0) {
      FUN_089de2e4(iVar3,"afx_129m.gmo",0);
      iVar4 = iVar3;
    }
    *(int *)(param_1 + 0x2f4) = iVar4;
    iVar4 = FUN_089ded10(iVar4,0);
    *(undefined4 *)(iVar4 + 0x70) = 0x3dcccccd;
    *(undefined4 *)(iVar4 + 0x74) = 0xbdcccccd;
    *(undefined4 *)(iVar4 + 0x78) = 0x3dcccccd;
    *(undefined4 *)(iVar4 + 0x7c) = 0;
    uVar2 = vcst_s(6);
    uVar2 = vmul_s(0x3fc90fdb,uVar2);
    auVar1 = vrot_q(uVar2,2,0,0,1);
    iVar4 = FUN_089ded10(*(undefined4 *)(param_1 + 0x2f4),0);
    auVar1 = vqmul_q(*(undefined (*) [16])(iVar4 + 0x60),auVar1);
    *(int *)*(undefined (*) [16])(iVar4 + 0x60) = auVar1._0_4_;
    *(int *)(iVar4 + 100) = auVar1._4_4_;
    *(int *)(iVar4 + 0x68) = auVar1._8_4_;
    *(int *)(iVar4 + 0x6c) = auVar1._12_4_;
    iVar4 = FUN_0889daa8();
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x60) = 0x3ecccccd;
      *(undefined4 *)(param_1 + 100) = 0x3ecccccd;
      *(undefined4 *)(param_1 + 0x68) = 0x3ecccccd;
      *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
    }
  }
  else if (*(int *)(param_1 + 8) == 0xd) {
    iVar4 = 0;
    iVar3 = param_1 + 0x20;
    do {
      iVar5 = FUN_088243d8(DAT_08ac5c70,0xe3,iVar3);
      *(int *)(param_1 + 0x41c) = iVar5;
      *(undefined4 *)(iVar5 + 400) = in_V72;
      *(undefined4 *)(iVar5 + 0x194) = in_V76;
      *(undefined4 *)(iVar5 + 0x198) = in_V7A;
      *(undefined4 *)(iVar5 + 0x19c) = in_V7E;
      *(int *)(*(int *)(param_1 + 0x41c) + 0x160) = *(int *)(param_1 + 0x41c) + 400;
      FUN_08823804(*(undefined4 *)(param_1 + 0x41c));
      iVar4 = iVar4 + 1;
      param_1 = param_1 + 4;
    } while (iVar4 < 2);
  }
  else if (*(int *)(param_1 + 8) == 10) {
    iVar3 = 0;
    iVar4 = param_1 + 0x20;
    do {
      iVar5 = FUN_088243d8(DAT_08ac5c70,0xe7,iVar4);
      *(int *)(param_1 + 0x41c) = iVar5;
      *(undefined4 *)(iVar5 + 400) = in_V72;
      *(undefined4 *)(iVar5 + 0x194) = in_V76;
      *(undefined4 *)(iVar5 + 0x198) = in_V7A;
      *(undefined4 *)(iVar5 + 0x19c) = in_V7E;
      *(int *)(*(int *)(param_1 + 0x41c) + 0x160) = *(int *)(param_1 + 0x41c) + 400;
      FUN_08823804(*(undefined4 *)(param_1 + 0x41c));
      iVar3 = iVar3 + 1;
      param_1 = param_1 + 4;
    } while (iVar3 < 4);
  }
  else if (*(int *)(param_1 + 8) == 0x1a) {
    uVar2 = FUN_089f7720("10_D_Hades_Refrec");
    FUN_089e10a8(uVar2,6);
    FUN_089e0a70(param_1,&LAB_0885dd50,0);
  }
  else if (*(int *)(param_1 + 8) == 0x11) {
    FUN_089e0a70(param_1,&LAB_0885dd74,0);
  }
  return;
}

