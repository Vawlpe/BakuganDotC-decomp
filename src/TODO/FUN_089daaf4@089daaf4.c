#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089daaf4(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if ((*(uint *)(param_1 + 0xc) & 1) == 0) {
    *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 1;
    puVar2 = (ushort *)FUN_089daad0(param_1);
    puVar5 = (ushort *)((int)puVar2 + *(int *)(puVar2 + 2));
    puVar4 = puVar5;
    if ((*puVar2 & 0x8000) == 0) {
      puVar4 = (ushort *)((int)puVar2 + *(int *)(puVar2 + 4));
    }
    if (puVar4 < puVar5) {
      uVar1 = *puVar4;
      while( true ) {
        puVar2 = (ushort *)((int)puVar4 + *(int *)(puVar4 + 2));
        if ((uVar1 & 0x7fff) == 10) {
          puVar6 = puVar2;
          if ((uVar1 & 0x8000) == 0) {
            puVar6 = (ushort *)((int)puVar4 + *(int *)(puVar4 + 4));
          }
          if (puVar6 < puVar2) {
            uVar1 = *puVar6;
            while( true ) {
              if ((uVar1 & 0x8000) == 0) {
                puVar7 = (ushort *)((int)puVar6 + (uint)puVar6[1]);
              }
              else {
                puVar7 = puVar6 + 4;
              }
              if ((uVar1 & 0x7fff) == 0x12) {
                iVar3 = strrchr(puVar7,0x2f);
                if (iVar3 != 0) {
                  strcpy(puVar7,iVar3 + 1);
                }
              }
              puVar6 = (ushort *)((int)puVar6 + *(int *)(puVar6 + 2));
              if (puVar2 <= puVar6) break;
              uVar1 = *puVar6;
            }
            puVar2 = (ushort *)((int)puVar4 + *(int *)(puVar4 + 2));
          }
        }
        if (puVar5 <= puVar2) break;
        uVar1 = *puVar2;
        puVar4 = puVar2;
      }
    }
  }
  return;
}

