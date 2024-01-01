#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d0d74(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  iVar8 = -1;
  FUN_089bb728(*(undefined4 *)(param_1 + 8));
  if (*(char *)(param_1 + 5) != '\0') {
    iVar8 = *(int *)(param_1 + 0x14c);
    *(undefined4 *)(param_1 + 0x158) = *DAT_08ac5940;
    if ((iVar8 != 0) && (iVar3 = 1, *(int *)(param_1 + 0x150) != 0)) {
      iVar8 = 0;
      do {
        puVar2 = DAT_08ac5940;
        puVar1 = (undefined4 *)((int)DAT_08ac5940 + iVar8 + 0x54);
        puVar4 = (undefined4 *)((int)DAT_08ac5940 + iVar8);
        uVar7 = *(undefined4 *)((int)DAT_08ac5940 + iVar8 + 0x58);
        *puVar4 = *(undefined4 *)((int)DAT_08ac5940 + iVar8 + 0x50);
        uVar5 = *(undefined4 *)((int)puVar2 + iVar8 + 0x5c);
        puVar4[1] = *puVar1;
        uVar6 = *(undefined4 *)((int)puVar2 + iVar8 + 0x60);
        puVar4[2] = uVar7;
        uVar7 = *(undefined4 *)((int)puVar2 + iVar8 + 100);
        puVar4[3] = uVar5;
        uVar5 = *(undefined4 *)((int)puVar2 + iVar8 + 0x68);
        puVar4[4] = uVar6;
        uVar6 = *(undefined4 *)((int)puVar2 + iVar8 + 0x6c);
        puVar4[5] = uVar7;
        uVar7 = *(undefined4 *)((int)puVar2 + iVar8 + 0x70);
        puVar4[6] = uVar5;
        uVar5 = *(undefined4 *)((int)puVar2 + iVar8 + 0x74);
        puVar4[7] = uVar6;
        puVar4[8] = uVar7;
        puVar4[9] = uVar5;
        puVar2 = DAT_08ac5940;
        puVar1 = (undefined4 *)((int)DAT_08ac5940 + iVar8 + 0x7c);
        uVar5 = *(undefined4 *)((int)DAT_08ac5940 + iVar8 + 0x80);
        *(undefined4 *)((int)DAT_08ac5940 + iVar8 + 0x28) =
             *(undefined4 *)((int)DAT_08ac5940 + iVar8 + 0x78);
        *(undefined4 *)((int)puVar2 + iVar8 + 0x2c) = *puVar1;
        *(undefined4 *)((int)puVar2 + iVar8 + 0x30) = uVar5;
        *(undefined4 *)((int)puVar2 + iVar8 + 0x34) = *(undefined4 *)((int)puVar2 + iVar8 + 0x84);
        *(undefined4 *)((int)puVar2 + iVar8 + 0x38) = *(undefined4 *)((int)puVar2 + iVar8 + 0x88);
        *(undefined4 *)((int)puVar2 + iVar8 + 0x3c) = *(undefined4 *)((int)puVar2 + iVar8 + 0x8c);
        *(undefined4 *)((int)puVar2 + iVar8 + 0x40) = *(undefined4 *)((int)puVar2 + iVar8 + 0x90);
        *(undefined4 *)((int)puVar2 + iVar8 + 0x44) = *(undefined4 *)((int)puVar2 + iVar8 + 0x94);
        *(undefined4 *)((int)puVar2 + iVar8 + 0x48) = *(undefined4 *)((int)puVar2 + iVar8 + 0x98);
        *(undefined4 *)((int)puVar2 + iVar8 + 0x4c) = *(undefined4 *)((int)puVar2 + iVar8 + 0x9c);
        iVar3 = iVar3 + 1;
        iVar8 = iVar8 + 0x50;
      } while (iVar3 < 0xc);
      iVar8 = *(int *)(param_1 + 0x14c) + -1;
      *(int *)(param_1 + 0x14c) = iVar8;
      *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
    }
    *(undefined *)(param_1 + 5) = 0;
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 8));
  return iVar8;
}

