#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089e1cfc(int param_1,int param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort *puVar7;
  
  puVar3 = (ushort *)FUN_089daad0(*(undefined4 *)(param_1 + 0xe0));
  puVar4 = (ushort *)((int)puVar3 + *(int *)(puVar3 + 2));
  iVar6 = 0;
  puVar7 = puVar4;
  if ((*puVar3 & 0x8000) == 0) {
    puVar7 = (ushort *)((int)puVar3 + *(int *)(puVar3 + 4));
  }
  if (puVar7 < puVar4) {
    uVar2 = *puVar7;
    while( true ) {
      puVar3 = (ushort *)((int)puVar7 + *(int *)(puVar7 + 2));
      if (((uVar2 & 0x7fff) == 5) && (bVar1 = iVar6 == param_2, iVar6 = iVar6 + 1, bVar1)) {
        puVar4 = puVar3;
        if ((uVar2 & 0x8000) == 0) {
          puVar4 = (ushort *)((int)puVar7 + *(int *)(puVar7 + 4));
        }
        if (puVar4 < puVar3) {
          uVar2 = *puVar4;
          while( true ) {
            if ((uVar2 & 0x7fff) == 0x14) {
              if ((*puVar7 & 0x8000) == 0) {
                puVar5 = (ushort *)((int)puVar7 + puVar7[1] + 8);
              }
              else {
                puVar5 = puVar7 + 8;
              }
              memcpy_jak(param_3,puVar5,0xc);
              memcpy_jak(param_3 + 0x10,puVar5 + 6,0xc);
              *(undefined4 *)(param_3 + 0x1c) = 0;
              *(undefined4 *)(param_3 + 0xc) = 0;
              iVar6 = *(int *)(puVar4 + 2);
            }
            else {
              iVar6 = *(int *)(puVar4 + 2);
            }
            puVar4 = (ushort *)((int)puVar4 + iVar6);
            if (puVar3 <= puVar4) break;
            uVar2 = *puVar4;
          }
        }
        return 1;
      }
      if (puVar4 <= puVar3) break;
      uVar2 = *puVar3;
      puVar7 = puVar3;
    }
  }
  return 0;
}

