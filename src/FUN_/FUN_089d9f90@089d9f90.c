#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d9f90(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int local_40;
  
  local_40 = 0;
  iVar9 = 0;
  iVar8 = 0;
  puVar7 = (ushort *)((int)param_1 + *(int *)(param_1 + 2));
  puVar5 = puVar7;
  if ((*param_1 & 0x8000) == 0) {
    puVar5 = (ushort *)((int)param_1 + *(int *)(param_1 + 4));
  }
  if (puVar5 < puVar7) {
    local_40 = 0;
    do {
      if ((*puVar5 & 0x7fff) == 0xb) {
        uVar2 = FUN_089d9674();
        iVar3 = FUN_089d9bc4(uVar2,puVar5 + 8);
        if (iVar3 == 0) {
          iVar3 = FUN_089d94bc(puVar5);
          iVar8 = iVar8 + iVar3;
          local_40 = local_40 + 1;
          goto LAB_089da04c;
        }
        iVar3 = *(int *)(puVar5 + 2);
      }
      else {
LAB_089da04c:
        iVar3 = *(int *)(puVar5 + 2);
      }
      puVar5 = (ushort *)((int)puVar5 + iVar3);
    } while (puVar5 < puVar7);
  }
  if ((0 < local_40) && (iVar8 != 0)) {
    FUN_089d8634();
    uVar2 = FUN_089d81a4();
    FUN_089d816c(1);
    iVar3 = FUN_089d7d74(local_40 * 0x84 + 0x10,0,0);
    FUN_089d816c(uVar2);
    FUN_089d866c();
    iVar6 = 0;
    if (iVar3 != 0) {
      iVar6 = FUN_08a02cb4(iVar3 + DAT_08af1178,local_40,0x84,FUN_08a3229c,0);
    }
    DAT_08ac5bd0 = iVar6;
    (**(code **)(*(int *)(iVar6 + 0x20) + 0x34))
              (iVar6 + *(short *)(*(int *)(iVar6 + 0x20) + 0x30),iVar8);
    puVar7 = (ushort *)((int)param_1 + *(int *)(param_1 + 2));
    puVar5 = puVar7;
    if ((*param_1 & 0x8000) == 0) {
      puVar5 = (ushort *)((int)param_1 + *(int *)(param_1 + 4));
    }
    if (puVar5 < puVar7) {
      uVar1 = *puVar5;
      iVar8 = iVar6;
      iVar3 = iVar6;
      do {
        if ((uVar1 & 0x7fff) == 0xb) {
          uVar2 = FUN_089d9674();
          iVar4 = FUN_089d9bc4(uVar2,puVar5 + 8);
          if (iVar4 == 0) {
            FUN_089d8c60(iVar8,DAT_08ac5bcc,0);
            (**(code **)(*(int *)(iVar3 + 0x20) + 0x1c))
                      (iVar8 + *(short *)(*(int *)(iVar3 + 0x20) + 0x18),puVar5 + 8);
            *(undefined4 *)(iVar8 + 0x24) = 1;
            uVar2 = FUN_089d9208(iVar9);
            *(undefined4 *)(iVar8 + 8) = uVar2;
            uVar2 = (**(code **)(*(int *)(iVar3 + 0x20) + 0x14))
                              (iVar8 + *(short *)(*(int *)(iVar3 + 0x20) + 0x10));
            FUN_089d9258(uVar2);
            FUN_089da29c(puVar5,uVar2);
            iVar9 = iVar9 + 1;
            iVar8 = iVar8 + 0x84;
            iVar3 = iVar3 + 0x84;
            goto LAB_089da234;
          }
          iVar4 = *(int *)(puVar5 + 2);
        }
        else {
LAB_089da234:
          iVar4 = *(int *)(puVar5 + 2);
        }
        puVar5 = (ushort *)((int)puVar5 + iVar4);
        if (puVar7 <= puVar5) break;
        uVar1 = *puVar5;
      } while( true );
    }
    *(int *)(iVar6 + local_40 * 0x84 + -0x60) = iVar6;
  }
  return;
}

