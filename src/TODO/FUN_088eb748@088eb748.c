#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eb748(int param_1)

{
  bool bVar1;
  bool bVar2;
  undefined uVar3;
  undefined uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  undefined2 uVar9;
  int iVar10;
  undefined auStack_60 [64];
  
  uVar4 = DAT_08b00bd6;
  uVar3 = DAT_08b00bd4;
  iVar7 = *(int *)(param_1 + 0x44);
  if (iVar7 < 2) {
    if (-1 < iVar7) {
      if (iVar7 < 1) {
        if (*(int *)(param_1 + 0x40) != 0) {
          *(undefined4 *)(param_1 + 0x44) = 1;
        }
      }
      else {
        uVar5 = FUN_0880dd54();
        FUN_089b4c84(auStack_60,"mes_f%d_%02d_%s.bin",uVar3,uVar4,uVar5);
        iVar7 = FUN_089be054(DAT_08ac520c,auStack_60);
        uVar9 = *(undefined2 *)(param_1 + 0x250);
        uVar5 = *(undefined4 *)(param_1 + 0x20);
        FUN_088eb6bc(param_1,0x48);
        iVar10 = (int)*(short *)(*(int *)(param_1 + 0x20) + 2);
        *(undefined2 *)(param_1 + 0x250) = uVar9;
        *(undefined4 *)(param_1 + 0x20) = uVar5;
        iVar6 = FUN_088cc354(iVar7);
        DAT_08abea20 = 3;
        pcVar8 = "ctllx";
        if (iVar10 < iVar6) {
          pcVar8 = *(char **)(iVar7 + iVar10 * 4);
        }
        uVar5 = FUN_088cc550(pcVar8,iVar10);
        *(undefined4 *)(param_1 + 0x34) = uVar5;
        DAT_08abea20 = 0;
        if (*(int *)(param_1 + 0x34) != 0) {
          *(undefined *)(*(int *)(param_1 + 0x34) + 0x79) = 1;
          *(undefined *)(*(int *)(param_1 + 0x34) + 0x200) = 1;
        }
        *(undefined4 *)(param_1 + 0x4c) = 0;
        (**(code **)(*(int *)(param_1 + 0xc) + 0x4c))
                  (param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x48));
        *(undefined4 *)(param_1 + 0x48) = 0;
        *(undefined4 *)(param_1 + 0x44) = 2;
      }
    }
  }
  else if (iVar7 < 3) {
    if (*(int *)(param_1 + 0x48) < 1) {
      iVar7 = FUN_089bf9c0(*(undefined4 *)(param_1 + 0x34));
      bVar2 = iVar7 == 0;
      if (bVar2) {
        *(undefined4 *)(param_1 + 0x34) = 0;
        iVar7 = *(int *)(param_1 + 0x34);
      }
      else {
        iVar7 = *(int *)(param_1 + 0x34);
      }
      if (iVar7 == 0) {
        iVar6 = *(int *)(param_1 + 0x40);
      }
      else if (*(int *)(iVar7 + 0x48) == 10) {
        bVar2 = true;
        iVar6 = *(int *)(param_1 + 0x40);
      }
      else {
        iVar6 = *(int *)(param_1 + 0x40);
      }
      bVar1 = *(int *)(param_1 + 0x4c) == *(int *)(&DAT_08a98ffc + iVar6 * 4);
      if (((bVar2) && (bVar1)) && (iVar7 != 0)) {
        *(undefined *)(iVar7 + 0x79) = 0;
        *(undefined *)(*(int *)(param_1 + 0x34) + 0x200) = 0;
      }
      iVar7 = FUN_088eb718(param_1);
      if (iVar7 != 0) {
        *(undefined4 *)(param_1 + 0x48) = 4;
        FUN_089c879c(0x3dcccccd,1);
        (**(code **)(*(int *)(param_1 + 0xc) + 0x4c))
                  (param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x48));
        if ((bVar2) && (bVar1)) {
          *(undefined4 *)(param_1 + 0x44) = 3;
        }
      }
    }
    else {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    }
  }
  else if (iVar7 < 4) {
    if (*(int *)(param_1 + 0x48) < 1) {
      (**(code **)(*(int *)(param_1 + 0xc) + 0x54))
                (param_1 + *(short *)(*(int *)(param_1 + 0xc) + 0x50),
                 *(undefined4 *)(&DAT_08a98ffc + *(int *)(param_1 + 0x40) * 4));
      *(undefined4 *)(param_1 + 0x44) = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
    }
    else {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + -1;
    }
  }
  return;
}

