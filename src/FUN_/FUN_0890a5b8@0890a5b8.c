#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0890a5b8(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined *puVar8;
  undefined4 in_V72;
  undefined4 in_V76;
  undefined4 in_V7A;
  undefined4 in_V7E;
  
  if (DAT_08ac0e80 == (int *)0x0) {
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    piVar2 = (int *)FUN_089d7d74(0x44,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac0e80 = piVar2;
    memset_jak(piVar2,0,0x44);
    iVar3 = FUN_08819f28(0x2b);
    DAT_08ac0e80[0xc] = iVar3;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar4 = FUN_089d7d74(0x80,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar3 = 0;
    if (iVar4 != 0) {
      FUN_089f4f54(iVar4,0);
      iVar3 = iVar4;
    }
    piVar2 = DAT_08ac0e80 + 0xc;
    *DAT_08ac0e80 = iVar3;
    FUN_089f5270(iVar3,*piVar2);
    piVar2 = DAT_08ac0e80;
    *(undefined *)(*DAT_08ac0e80 + 4) = 1;
    iVar3 = piVar2[0xc];
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(iVar3 << 2,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    iVar4 = *DAT_08ac0e80;
    DAT_08ac0e80[1] = iVar3;
    FUN_0881a0c4(iVar4,iVar3,0x2b);
    piVar2 = DAT_08ac0e80;
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(uint *)(*(int *)(piVar2[1] + iVar4) + 0xd0) =
           *(uint *)(*(int *)(piVar2[1] + iVar4) + 0xd0) & 0xfffffffe;
      iVar4 = iVar4 + 4;
    } while (iVar3 < 0x17);
    iVar3 = 0xb;
    iVar4 = 0x2c;
    puVar8 = &UNK_08a9b244;
    do {
      iVar7 = *(int *)(piVar2[1] + iVar4);
      *(float *)(iVar7 + 0x60) = (float)(int)*(short *)(puVar8 + -0xdc);
      *(float *)(iVar7 + 100) = (float)(int)*(short *)(puVar8 + -0xda);
      *(undefined4 *)(iVar7 + 0x80) = in_V72;
      *(undefined4 *)(iVar7 + 0x84) = in_V76;
      *(undefined4 *)(iVar7 + 0x88) = in_V7A;
      *(undefined4 *)(iVar7 + 0x8c) = in_V7E;
      *(undefined4 *)(iVar7 + 0x90) = in_V72;
      *(undefined4 *)(iVar7 + 0x94) = in_V76;
      *(undefined4 *)(iVar7 + 0x98) = in_V7A;
      *(undefined4 *)(iVar7 + 0x9c) = in_V7E;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
      puVar8 = puVar8 + 0x14;
    } while (iVar3 < 0x11);
    piVar2[4] = 0;
    piVar2[6] = 0;
    piVar2[5] = 0;
    piVar2[7] = 0;
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    puVar5 = (undefined4 *)FUN_089d7d74(0x10,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    puVar6 = (undefined4 *)0x0;
    if (puVar5 != (undefined4 *)0x0) {
      FUN_089eaf90(puVar5);
      puVar6 = puVar5;
    }
    piVar2 = DAT_08ac0e80;
    DAT_08ac0e80[3] = (int)puVar6;
    *puVar6 = 0x44c94000;
    FUN_089eb03c(piVar2[3],0x200);
    FUN_089d8634();
    uVar1 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(0x17000,0,0);
    FUN_089d816c(uVar1);
    FUN_089d866c();
    DAT_08ac0e80[0x10] = iVar3;
  }
  return;
}

