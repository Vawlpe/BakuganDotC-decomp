#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089da29c(ushort *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined *ptr;
  ushort uVar3;
  undefined4 *puVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  ushort *puVar8;
  
  iVar1 = FUN_08a198fc(param_1,0xb3);
  iVar2 = (**(code **)(*(int *)(DAT_08ac5bd0 + 0x20) + 0x3c))
                    (DAT_08ac5bd0 + *(short *)(*(int *)(DAT_08ac5bd0 + 0x20) + 0x38),iVar1 << 4);
  iVar7 = 0;
  iVar6 = iVar2;
  if (0 < iVar1) {
    do {
      FUN_089d92b0(iVar6);
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + 0x10;
    } while (iVar7 < iVar1);
  }
  ptr = (undefined *)
        (**(code **)(*(int *)(DAT_08ac5bd0 + 0x20) + 0x3c))
                  (DAT_08ac5bd0 + *(short *)(*(int *)(DAT_08ac5bd0 + 0x20) + 0x38),iVar1 * 2);
  memset_jak(ptr,0,iVar1 * 2);
  *(int *)(param_2 + 4) = iVar2;
  *(undefined **)(param_2 + 8) = ptr;
  *(short *)(param_2 + 0xc) = (short)iVar1;
  puVar5 = (ushort *)((int)param_1 + *(int *)(param_1 + 2));
  puVar8 = puVar5;
  if ((*param_1 & 0x8000) == 0) {
    puVar8 = (ushort *)((int)param_1 + *(int *)(param_1 + 4));
  }
  if (puVar5 <= puVar8) {
    return;
  }
  uVar3 = *puVar8;
  do {
    if ((uVar3 & 0x8000) == 0) {
      puVar4 = (undefined4 *)((int)puVar8 + (uint)puVar8[1]);
    }
    else {
      puVar4 = (undefined4 *)(puVar8 + 4);
    }
    uVar3 = uVar3 & 0x7fff;
    iVar6 = iVar2;
    if (uVar3 < 0xb3) {
      if (0xb0 < uVar3) {
        if (uVar3 < 0xb2) {
          *(undefined4 *)(param_2 + 0x10) = *puVar4;
          *(undefined4 *)(param_2 + 0x14) = puVar4[1];
        }
        else {
          *(undefined4 *)(param_2 + 0x18) = *puVar4;
        }
      }
LAB_089da444:
      iVar2 = *(int *)(puVar8 + 2);
    }
    else if (uVar3 < 0xb4) {
      iVar6 = iVar2 + 0x10;
      FUN_089d92d8(param_1,puVar8,iVar2);
      iVar2 = *(int *)(puVar8 + 2);
    }
    else {
      if (uVar3 < 0xb5) {
        *(short *)(param_2 + 0xe) = (short)*puVar4;
        goto LAB_089da444;
      }
      iVar2 = *(int *)(puVar8 + 2);
    }
    puVar8 = (ushort *)((int)puVar8 + iVar2);
    if (puVar5 <= puVar8) {
      return;
    }
    uVar3 = *puVar8;
    iVar2 = iVar6;
  } while( true );
}

