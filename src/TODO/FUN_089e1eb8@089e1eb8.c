#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089e1eb8(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined4 uVar11;
  char *pcVar12;
  int iVar13;
  int iVar14;
  char local_50;
  char local_4f;
  char local_4e;
  undefined local_4d;
  undefined local_4c;
  undefined *local_48;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  int local_38;
  undefined *local_34;
  
  uVar11 = *(undefined4 *)(param_1 + 0x130);
  iVar14 = *(int *)(param_1 + 0x128);
  iVar9 = *(int *)(param_1 + 0xf0);
  local_40 = param_1;
  if (iVar14 == 0) {
    iVar14 = 0;
    if (0 < iVar9) {
      do {
        iVar13 = FUN_08a15998(uVar11,iVar14);
        iVar14 = iVar14 + 1;
        *(undefined4 *)(iVar13 + 4) = 0;
      } while (iVar14 < iVar9);
      iVar9 = *(int *)(local_40 + 0xf0);
    }
  }
  else {
    iVar13 = 0;
    if (0 < iVar9) {
      do {
        iVar3 = FUN_08a15998(uVar11,iVar13);
        *(int *)(iVar3 + 4) = iVar14;
        iVar13 = iVar13 + 1;
        iVar14 = iVar14 + 0x10;
      } while (iVar13 < iVar9);
      iVar9 = *(int *)(local_40 + 0xf0);
    }
  }
  local_44 = 0;
  if (0 < iVar9) {
    local_48 = &DAT_08aa30e4;
    local_3c = &DAT_08aa30d4;
    local_34 = &DAT_08aa30f8;
    local_38 = 0;
    do {
      iVar14 = local_40;
      iVar9 = local_44;
      iVar13 = FUN_08a15998(*(undefined4 *)(local_40 + 0x130),local_44);
      FUN_08a16070(iVar13,0x14a,0xffffffff);
      FUN_08a16034(iVar13,0x14a,0);
      puVar10 = *(undefined2 **)(iVar13 + 4);
      *(undefined4 *)(puVar10 + 4) = 0;
      *(undefined4 *)(puVar10 + 6) = 0;
      uVar11 = FUN_089df234(iVar14,iVar9);
      puVar5 = (undefined4 *)(*(int *)(iVar14 + 0x128) + local_38);
      uVar7 = local_3c[1];
      uVar8 = local_3c[2];
      *puVar5 = 0x1180001;
      puVar5[1] = uVar7;
      puVar5[2] = uVar8;
      puVar5[3] = local_3c[3];
      iVar9 = strstr(uVar11,local_34);
      pcVar12 = (char *)(iVar9 + 2);
      if (iVar9 != 0) {
        bVar2 = true;
        local_50 = *pcVar12;
        do {
          local_4f = pcVar12[1];
          local_4e = pcVar12[2];
          local_4d = 0x2a;
          local_4c = 0;
          uVar4 = strlen(&local_50);
          if (uVar4 < 3) {
            bVar2 = false;
          }
          if (local_50 == 'A') {
            iVar9 = local_4f + -0x30;
            if (iVar9 < 0) {
              iVar9 = -1;
            }
            if (9 < iVar9) {
              iVar9 = -1;
            }
            if (iVar9 < 0) goto LAB_089e2100;
            *puVar10 = *(undefined2 *)(local_48 + iVar9 * 2);
            pcVar12 = pcVar12 + 2;
          }
          else {
LAB_089e2100:
            if (local_50 == 'C') {
              if (local_4f == 'N') {
                *(byte *)((int)puVar10 + 3) = *(byte *)((int)puVar10 + 3) & 0xfc;
              }
              if (local_4f == 'F') {
                *(byte *)((int)puVar10 + 3) = *(byte *)((int)puVar10 + 3) & 0xfc | 2;
              }
              pcVar12 = pcVar12 + 2;
            }
            else if (local_50 == 'F') {
              if (local_4f == 'D') {
                *(byte *)(puVar10 + 2) = *(byte *)(puVar10 + 2) & 0xf3 | 8;
              }
              pcVar12 = pcVar12 + 2;
            }
            else if (local_50 == 'L') {
              if (local_4f == 'E') {
                *(byte *)(puVar10 + 2) = *(byte *)(puVar10 + 2) & 0xf7;
              }
              if (local_4f == 'D') {
                *(byte *)(puVar10 + 2) = *(byte *)(puVar10 + 2) | 8;
              }
              pcVar12 = pcVar12 + 2;
            }
            else if (local_50 == 'B') {
              if (local_4f == 'R') {
                *(byte *)(puVar10 + 2) = *(byte *)(puVar10 + 2) & 0x3f;
              }
              if (local_4f == 'A') {
                *(byte *)(puVar10 + 2) = *(byte *)(puVar10 + 2) & 0x3f | 0x80;
              }
              if (local_4f == 'S') {
                *(byte *)(puVar10 + 2) = *(byte *)(puVar10 + 2) | 0xc0;
              }
              pcVar12 = pcVar12 + 2;
            }
            else if (local_50 == 'Z') {
              iVar9 = local_4f + -0x30;
              if (iVar9 < 0) {
                iVar9 = -1;
              }
              if (9 < iVar9) {
                iVar9 = -1;
              }
              if (-1 < iVar9) {
                *(char *)(puVar10 + 1) = (char)(iVar9 << 3);
              }
              pcVar12 = pcVar12 + 2;
            }
            else if (local_50 == 'P') {
              iVar9 = local_4f + -0x30;
              if (iVar9 < 0) {
                iVar9 = -1;
              }
              if (9 < iVar9) {
                iVar9 = -1;
              }
              if (-1 < iVar9) {
                *(char *)((int)puVar10 + 5) = (char)iVar9 + '\x01';
              }
              pcVar12 = pcVar12 + 2;
            }
            else if (local_50 == 'D') {
              bVar1 = false;
              if (local_4f == 'E') {
                *(undefined *)(puVar10 + 3) = 1;
              }
              else if (local_4f == 'M') {
                *(byte *)(puVar10 + 2) = *(byte *)(puVar10 + 2) | 0x10;
                *(undefined *)(puVar10 + 3) = 1;
              }
              else if (local_4f == 'S') {
                bVar1 = true;
                *(undefined *)(puVar10 + 3) = 0xe2;
              }
              else {
                iVar9 = local_4f + -0x30;
                if (iVar9 < 0) {
                  iVar9 = -1;
                }
                if (9 < iVar9) {
                  iVar9 = -1;
                }
                if (-1 < iVar9) {
                  *(char *)(puVar10 + 3) = (char)iVar9 * '\b' + '\x01';
                  pcVar12 = pcVar12 + 2;
                  goto LAB_089e250c;
                }
              }
              iVar9 = local_4e + -0x30;
              if (iVar9 < 0) {
                iVar9 = -1;
              }
              if (9 < iVar9) {
                iVar9 = -1;
              }
              if (-1 < iVar9) {
                *(char *)(puVar10 + 3) = (char)iVar9 * '\b' + '\x01';
                if (bVar1) {
                  *(char *)(puVar10 + 3) = -*(char *)(puVar10 + 3);
                }
                pcVar12 = pcVar12 + 1;
              }
              pcVar12 = pcVar12 + 2;
            }
            else if (local_50 == 'R') {
              uVar4 = (int)local_4e - 0x30;
              if ((int)uVar4 < 0) {
                uVar4 = 0xffffffff;
              }
              if (9 < (int)uVar4) {
                uVar4 = 0xffffffff;
              }
              if (-1 < (int)uVar4) {
                *(byte *)((int)puVar10 + 3) =
                     *(byte *)((int)puVar10 + 3) & 0x1f | (byte)((uVar4 & 7) << 5);
                bVar6 = 1;
                switch(local_4f) {
                case 'A':
                  bVar6 = 2;
                  break;
                case 'M':
                  bVar6 = 1;
                  break;
                case 'R':
                  bVar6 = 0;
                  break;
                case 'S':
                  bVar6 = 3;
                }
                *(byte *)(puVar10 + 2) = *(byte *)(puVar10 + 2) & 0xfc | bVar6;
              }
              pcVar12 = pcVar12 + 3;
            }
            else if (local_50 == 'T') {
              uVar4 = (int)local_4e - 0x30;
              if ((int)uVar4 < 0) {
                uVar4 = 0xffffffff;
              }
              if (9 < (int)uVar4) {
                uVar4 = 0xffffffff;
              }
              if (-1 < (int)uVar4) {
                *(byte *)((int)puVar10 + 3) =
                     *(byte *)((int)puVar10 + 3) & 0xe3 | (byte)((uVar4 & 7) << 2);
                bVar6 = 1;
                switch(local_4f) {
                case 'A':
                  bVar6 = 2;
                  break;
                case 'M':
                  bVar6 = 1;
                  break;
                case 'R':
                  bVar6 = 0;
                  break;
                case 'S':
                  bVar6 = 3;
                }
                *(byte *)(puVar10 + 2) = *(byte *)(puVar10 + 2) & 0xfc | bVar6;
              }
              pcVar12 = pcVar12 + 3;
            }
            else {
              pcVar12 = pcVar12 + 1;
            }
          }
LAB_089e250c:
          if (!bVar2) break;
          local_50 = *pcVar12;
        } while( true );
      }
      local_44 = local_44 + 1;
      local_38 = local_38 + 0x10;
    } while (local_44 < *(int *)(local_40 + 0xf0));
  }
  FUN_089e001c(local_40);
  return;
}

