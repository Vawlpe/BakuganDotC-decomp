#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089b2388(void)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char local_70;
  char local_6f [23];
  char local_58;
  char local_57 [23];
  char local_40;
  char local_3f [23];
  
  piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
  if (*(char *)(*piVar2 + 0x462) == '\x01') {
    memcpy_jak(&local_70,&DAT_08ac4358,0x16);
    memcpy_jak(&local_58,&DAT_08ac436e,0x16);
    if (local_70 != -1) {
      iVar9 = 0;
      uVar8 = 0;
      do {
        if (local_70 != '\0') {
          piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
          iVar10 = (int)(uVar8 + ((uint)((int)uVar8 >> 3) >> 0x1d)) >> 3;
          if ((int)uVar8 < 0) {
            bVar1 = (byte)(1 << (-(-uVar8 & 7) & 0x1f));
          }
          else {
            bVar1 = (byte)(1 << (uVar8 & 7));
          }
          *(byte *)(*piVar2 + iVar10 + 0x50e) = *(byte *)(*piVar2 + iVar10 + 0x50e) | bVar1;
          if ((int)uVar8 < 0) {
            uVar5 = -(-uVar8 & 7) & 0x1f;
          }
          else {
            uVar5 = uVar8 & 7;
          }
          *(byte *)(*piVar2 + iVar10 + 0x5be) =
               *(byte *)(*piVar2 + iVar10 + 0x5be) | (byte)(1 << uVar5);
          if ((int)uVar8 < 0) {
            uVar5 = -(-uVar8 & 7) & 0x1f;
          }
          else {
            uVar5 = uVar8 & 7;
          }
          *(byte *)(*piVar2 + iVar10 + 0x5c3) =
               *(byte *)(*piVar2 + iVar10 + 0x5c3) | (byte)(1 << uVar5);
          iVar10 = 0;
          uVar5 = iVar9 - 4;
          do {
            piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
            iVar11 = (int)(uVar5 + ((uint)((int)uVar5 >> 3) >> 0x1d)) >> 3;
            iVar6 = *piVar2 + iVar11;
            bVar1 = *(byte *)(iVar6 + 0x51a);
            if ((int)uVar5 < 0) {
              uVar3 = -(-uVar5 & 7) & 0x1f;
            }
            else {
              uVar3 = uVar5 & 7;
            }
            iVar7 = *piVar2 + iVar11;
            if (((uint)bVar1 & 1 << uVar3) == 0) {
              uVar3 = uVar5 & 7;
              if ((int)uVar5 < 0) {
                uVar3 = -(-uVar5 & 7) & 0x1f;
              }
              *(byte *)(iVar6 + 0x51a) = bVar1 | (byte)(1 << uVar3);
              iVar6 = *piVar2 + (((int)(uVar5 + ((uint)((int)uVar5 >> 2) >> 0x1e)) >> 2) + 1) * 2;
              if (*(char *)(iVar6 + 0x4e4) == -1) {
                *(char *)(iVar6 + 0x4e4) = (char)uVar5;
                iVar7 = *piVar2;
              }
              else {
                iVar7 = *piVar2 + iVar11;
                if (*(char *)(iVar6 + 0x4e5) != -1) goto LAB_089b25b8;
                *(char *)(iVar6 + 0x4e5) = (char)uVar5;
                iVar7 = *piVar2;
              }
              iVar7 = iVar7 + iVar11;
            }
LAB_089b25b8:
            if ((int)uVar5 < 0) {
              uVar3 = -(-uVar5 & 7) & 0x1f;
            }
            else {
              uVar3 = uVar5 & 7;
            }
            *(byte *)(iVar7 + 0x5c8) = *(byte *)(iVar7 + 0x5c8) | (byte)(1 << uVar3);
            if ((int)uVar5 < 0) {
              uVar3 = -(-uVar5 & 7) & 0x1f;
            }
            else {
              uVar3 = uVar5 & 7;
            }
            iVar10 = iVar10 + 1;
            *(byte *)(*piVar2 + iVar11 + 0x5d3) =
                 *(byte *)(*piVar2 + iVar11 + 0x5d3) | (byte)(1 << uVar3);
            uVar5 = uVar5 + 1;
          } while (iVar10 < 4);
        }
        local_70 = local_6f[uVar8];
        iVar9 = iVar9 + 4;
        uVar8 = uVar8 + 1;
      } while (local_70 != -1);
    }
    if (local_58 != -1) {
      iVar10 = 0;
      iVar9 = 0;
      do {
        iVar11 = 0;
        if (local_58 != '\0') {
          uVar8 = iVar10 - 4;
          do {
            piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
            iVar6 = (int)(uVar8 + ((uint)((int)uVar8 >> 3) >> 0x1d)) >> 3;
            iVar7 = *piVar2 + iVar6;
            bVar1 = *(byte *)(iVar7 + 0x51a);
            if ((int)uVar8 < 0) {
              uVar5 = -(-uVar8 & 7) & 0x1f;
            }
            else {
              uVar5 = uVar8 & 7;
            }
            iVar4 = *piVar2 + iVar6;
            if (((uint)bVar1 & 1 << uVar5) == 0) {
              uVar5 = uVar8 & 7;
              if ((int)uVar8 < 0) {
                uVar5 = -(-uVar8 & 7) & 0x1f;
              }
              *(byte *)(iVar7 + 0x51a) = bVar1 | (byte)(1 << uVar5);
              iVar7 = *piVar2 + (((int)(uVar8 + ((uint)((int)uVar8 >> 2) >> 0x1e)) >> 2) + 1) * 2;
              if (*(char *)(iVar7 + 0x4e4) == -1) {
                *(char *)(iVar7 + 0x4e4) = (char)uVar8;
                iVar4 = *piVar2;
              }
              else {
                iVar4 = *piVar2 + iVar6;
                if (*(char *)(iVar7 + 0x4e5) != -1) goto LAB_089b2748;
                *(char *)(iVar7 + 0x4e5) = (char)uVar8;
                iVar4 = *piVar2;
              }
              iVar4 = iVar4 + iVar6;
            }
LAB_089b2748:
            if ((int)uVar8 < 0) {
              bVar1 = (byte)(1 << (-(-uVar8 & 7) & 0x1f));
            }
            else {
              bVar1 = (byte)(1 << (uVar8 & 7));
            }
            *(byte *)(iVar4 + 0x5c8) = *(byte *)(iVar4 + 0x5c8) | bVar1;
            if ((int)uVar8 < 0) {
              uVar5 = -(-uVar8 & 7) & 0x1f;
            }
            else {
              uVar5 = uVar8 & 7;
            }
            iVar11 = iVar11 + 1;
            *(byte *)(*piVar2 + iVar6 + 0x5d3) =
                 *(byte *)(*piVar2 + iVar6 + 0x5d3) | (byte)(1 << uVar5);
            uVar8 = uVar8 + 1;
          } while (iVar11 < 4);
        }
        local_58 = local_57[iVar9];
        iVar10 = iVar10 + 4;
        iVar9 = iVar9 + 1;
      } while (local_58 != -1);
    }
  }
  else {
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    if (*(char *)(*piVar2 + 0x462) == '\x02') {
      memcpy_jak(&local_40,&DAT_08ac4384,0x16);
      if (local_40 != -1) {
        iVar10 = 0;
        iVar9 = 0;
        do {
          iVar11 = 0;
          if (local_40 != '\0') {
            uVar8 = iVar10 - 4;
            do {
              piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
              iVar6 = (int)(uVar8 + ((uint)((int)uVar8 >> 3) >> 0x1d)) >> 3;
              iVar7 = *piVar2 + iVar6;
              bVar1 = *(byte *)(iVar7 + 0x51a);
              if ((int)uVar8 < 0) {
                uVar5 = -(-uVar8 & 7) & 0x1f;
              }
              else {
                uVar5 = uVar8 & 7;
              }
              iVar4 = *piVar2 + iVar6;
              if (((uint)bVar1 & 1 << uVar5) == 0) {
                uVar5 = uVar8 & 7;
                if ((int)uVar8 < 0) {
                  uVar5 = -(-uVar8 & 7) & 0x1f;
                }
                *(byte *)(iVar7 + 0x51a) = bVar1 | (byte)(1 << uVar5);
                iVar7 = *piVar2 + (((int)(uVar8 + ((uint)((int)uVar8 >> 2) >> 0x1e)) >> 2) + 1) * 2;
                if (*(char *)(iVar7 + 0x4e4) == -1) {
                  *(char *)(iVar7 + 0x4e4) = (char)uVar8;
                  iVar4 = *piVar2;
                }
                else {
                  iVar4 = *piVar2 + iVar6;
                  if (*(char *)(iVar7 + 0x4e5) != -1) goto LAB_089b2910;
                  *(char *)(iVar7 + 0x4e5) = (char)uVar8;
                  iVar4 = *piVar2;
                }
                iVar4 = iVar4 + iVar6;
              }
LAB_089b2910:
              if ((int)uVar8 < 0) {
                bVar1 = (byte)(1 << (-(-uVar8 & 7) & 0x1f));
              }
              else {
                bVar1 = (byte)(1 << (uVar8 & 7));
              }
              *(byte *)(iVar4 + 0x5c8) = *(byte *)(iVar4 + 0x5c8) | bVar1;
              if ((int)uVar8 < 0) {
                uVar5 = -(-uVar8 & 7) & 0x1f;
              }
              else {
                uVar5 = uVar8 & 7;
              }
              iVar11 = iVar11 + 1;
              *(byte *)(*piVar2 + iVar6 + 0x5d3) =
                   *(byte *)(*piVar2 + iVar6 + 0x5d3) | (byte)(1 << uVar5);
              uVar8 = uVar8 + 1;
            } while (iVar11 < 4);
          }
          local_40 = local_3f[iVar9];
          iVar10 = iVar10 + 4;
          iVar9 = iVar9 + 1;
        } while (local_40 != -1);
      }
    }
  }
  return;
}

