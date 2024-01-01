#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d94bc(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  iVar2 = FUN_08a198fc(param_1,0xb3);
  iVar2 = iVar2 * 0x12;
  puVar6 = (ushort *)((int)param_1 + *(int *)(param_1 + 2));
  puVar5 = puVar6;
  if ((*param_1 & 0x8000) == 0) {
    puVar5 = (ushort *)((int)param_1 + *(int *)(param_1 + 4));
  }
  if (puVar5 < puVar6) {
    uVar1 = *puVar5;
    while( true ) {
      if ((uVar1 & 0x7fff) == 0xb3) {
        if ((uVar1 & 0x8000) == 0) {
          puVar4 = (ushort *)((int)puVar5 + (uint)puVar5[1]);
        }
        else {
          puVar4 = puVar5 + 4;
        }
        puVar4 = (ushort *)FUN_08a1999c(param_1,0xc,*(uint *)(puVar4 + 6) & 0xfff);
        if ((*puVar4 & 0x8000) == 0) {
          iVar3 = *(int *)(puVar4 + 4) - *(int *)(puVar4 + 6);
        }
        else {
          iVar3 = 0;
        }
        iVar2 = iVar3 + iVar2 + 3;
        iVar3 = *(int *)(puVar5 + 2);
      }
      else {
        iVar3 = *(int *)(puVar5 + 2);
      }
      puVar5 = (ushort *)((int)puVar5 + iVar3);
      if (puVar6 <= puVar5) break;
      uVar1 = *puVar5;
    }
  }
  if (iVar2 == 0) {
    iVar2 = 4;
  }
  return iVar2;
}

