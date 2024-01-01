#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089da29c(ushort *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ushort uVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  
  iVar1 = FUN_08a198fc(param_1,0xb3);
  iVar2 = (**(code **)(*(int *)(DAT_08ac5bd0 + 0x20) + 0x3c))
                    (DAT_08ac5bd0 + *(short *)(*(int *)(DAT_08ac5bd0 + 0x20) + 0x38),iVar1 << 4);
  iVar8 = 0;
  iVar7 = iVar2;
  if (0 < iVar1) {
    do {
      FUN_089d92b0(iVar7);
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + 0x10;
    } while (iVar8 < iVar1);
  }
  uVar3 = (**(code **)(*(int *)(DAT_08ac5bd0 + 0x20) + 0x3c))
                    (DAT_08ac5bd0 + *(short *)(*(int *)(DAT_08ac5bd0 + 0x20) + 0x38),iVar1 * 2);
  memset_jak(uVar3,0,iVar1 * 2);
  *(int *)(param_2 + 4) = iVar2;
  *(undefined4 *)(param_2 + 8) = uVar3;
  *(short *)(param_2 + 0xc) = (short)iVar1;
  puVar6 = (ushort *)((int)param_1 + *(int *)(param_1 + 2));
  puVar9 = puVar6;
  if ((*param_1 & 0x8000) == 0) {
    puVar9 = (ushort *)((int)param_1 + *(int *)(param_1 + 4));
  }
  if (puVar6 <= puVar9) {
    return;
  }
  uVar4 = *puVar9;
  do {
    if ((uVar4 & 0x8000) == 0) {
      puVar5 = (undefined4 *)((int)puVar9 + (uint)puVar9[1]);
    }
    else {
      puVar5 = (undefined4 *)(puVar9 + 4);
    }
    uVar4 = uVar4 & 0x7fff;
    iVar7 = iVar2;
    if (uVar4 < 0xb3) {
      if (0xb0 < uVar4) {
        if (uVar4 < 0xb2) {
          *(undefined4 *)(param_2 + 0x10) = *puVar5;
          *(undefined4 *)(param_2 + 0x14) = puVar5[1];
        }
        else {
          *(undefined4 *)(param_2 + 0x18) = *puVar5;
        }
      }
LAB_089da444:
      iVar2 = *(int *)(puVar9 + 2);
    }
    else if (uVar4 < 0xb4) {
      iVar7 = iVar2 + 0x10;
      FUN_089d92d8(param_1,puVar9,iVar2);
      iVar2 = *(int *)(puVar9 + 2);
    }
    else {
      if (uVar4 < 0xb5) {
        *(short *)(param_2 + 0xe) = (short)*puVar5;
        goto LAB_089da444;
      }
      iVar2 = *(int *)(puVar9 + 2);
    }
    puVar9 = (ushort *)((int)puVar9 + iVar2);
    if (puVar6 <= puVar9) {
      return;
    }
    uVar4 = *puVar9;
    iVar2 = iVar7;
  } while( true );
}

