#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088dfd40(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint local_30 [12];
  
  puVar4 = local_30;
  iVar3 = 0;
  iVar5 = *DAT_08abf618;
  iVar7 = 0;
  do {
    *puVar4 = 0xffffffff;
    puVar4[1] = 1;
    iVar7 = iVar7 + 1;
    puVar4 = puVar4 + 2;
  } while (iVar7 < 5);
  if (iVar5 == 0) {
LAB_088dfe28:
    if (iVar5 == 0) {
      return;
    }
    iVar7 = *(int *)(iVar5 + 0x350);
    do {
      if (iVar7 == 0) {
        iVar5 = *(int *)(iVar5 + 4);
      }
      else {
        iVar8 = 0;
        if ((*(byte *)(iVar7 + 0x42) != 0) && (puVar4 = local_30, 0 < iVar3)) {
          do {
            if ((*puVar4 == (uint)*(byte *)(iVar7 + 0x42)) && (puVar4[1] == 1)) {
              *(int *)(iVar5 + 0x360) = *(int *)(iVar5 + 0x360) + 1;
              break;
            }
            iVar8 = iVar8 + 1;
            puVar4 = puVar4 + 2;
          } while (iVar8 < iVar3);
        }
        iVar5 = *(int *)(iVar5 + 4);
      }
      if (iVar5 == 0) {
        return;
      }
      iVar7 = *(int *)(iVar5 + 0x350);
    } while( true );
  }
  iVar8 = *(int *)(iVar5 + 0x350);
  iVar7 = iVar5;
  do {
    if (iVar8 == 0) {
      iVar7 = *(int *)(iVar7 + 4);
    }
    else {
      uVar6 = (uint)*(byte *)(iVar8 + 0x42);
      iVar8 = 0;
      puVar4 = local_30;
      if (uVar6 != 0) {
        do {
          if (*puVar4 == 0xffffffff) {
            *puVar4 = uVar6;
            iVar3 = iVar3 + 1;
            uVar2 = *puVar4;
          }
          else {
            uVar2 = *puVar4;
          }
          iVar8 = iVar8 + 1;
          if (uVar2 == uVar6) {
            if (puVar4[1] != 1) {
              iVar7 = *(int *)(iVar7 + 4);
              goto LAB_088dfe1c;
            }
            if (*(int *)(iVar7 + 0x35c) == 0) {
              bVar1 = false;
            }
            else {
              bVar1 = *(short *)(*(int *)(iVar7 + 0x35c) + 4 + *(int *)(iVar7 + 0x360) * 8) == 3;
            }
            if (bVar1) {
              iVar7 = *(int *)(iVar7 + 4);
              goto LAB_088dfe1c;
            }
            puVar4[1] = 0;
            break;
          }
          puVar4 = puVar4 + 2;
        } while (iVar8 < 5);
      }
      iVar7 = *(int *)(iVar7 + 4);
    }
LAB_088dfe1c:
    if (iVar7 == 0) goto LAB_088dfe28;
    iVar8 = *(int *)(iVar7 + 0x350);
  } while( true );
}

