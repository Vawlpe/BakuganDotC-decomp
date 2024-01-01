#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a28414(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort *puVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  uint uVar14;
  ushort *puVar15;
  int iVar16;
  uint uVar17;
  ushort *puVar18;
  ushort *puVar19;
  ushort *puVar20;
  undefined auStack_70 [12];
  int local_64;
  int local_5c;
  int local_58;
  short local_52;
  int local_50;
  
  if (((param_1 == 0) || (param_5 == 0)) || (iVar3 = FUN_08a27f68(param_2,param_3), iVar3 == 0)) {
    return 0;
  }
  FUN_08a12848(param_1);
  FUN_08a28108(param_2,auStack_70);
  iVar3 = local_64 + -0x36;
  if (local_64 + -0x36 < 0) {
    iVar3 = local_64 + -0x33;
  }
  iVar3 = iVar3 >> 2;
  if ((0 < iVar3) && (local_52 < 0x10)) {
    uVar4 = 0x100;
    if (iVar3 < 0x11) {
      uVar4 = 0x10;
    }
    uVar5 = thunk_FUN_08a12a1c(1,param_5);
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    FUN_08a12094(uVar5,3,0,uVar4,1,0x10,1,1,1,2,3,1,0x10,0,0,param_5);
    uVar4 = FUN_08a10894(param_1,0,0);
    FUN_08a27fe0(uVar4,param_2 + 0x36,iVar3,1,0xff);
  }
  uVar4 = FUN_08a27f90((int)local_52,local_50);
  uVar5 = FUN_08a12a1c(1,param_5);
  *(undefined4 *)(param_1 + 0xc) = uVar5;
  iVar3 = -local_58;
  iVar12 = local_58;
  if (local_58 < iVar3) {
    iVar12 = iVar3;
  }
  FUN_08a12094(uVar5,uVar4,0,local_5c,iVar12,0x10,1,1,1,1,3,1,0x80,0,0,param_5);
  puVar18 = (ushort *)(local_64 + param_2);
  puVar6 = (ushort *)FUN_08a10bb8(param_1,0,0);
  if (local_50 != 0) {
    if (local_52 == 4) {
      uVar10 = (local_5c + 1) / 2 + 0xfU & 0xfffffff0;
      puVar20 = (ushort *)((int)puVar6 + uVar10 * (local_58 + -1));
      iVar12 = local_58 * uVar10;
      iVar16 = local_58;
      if (local_58 < 0) {
        uVar10 = -uVar10;
        iVar12 = -iVar12;
        puVar20 = puVar6;
        iVar16 = iVar3;
      }
      memset_jak((undefined *)puVar6,0,iVar12);
      if (0 < iVar16) {
        uVar8 = 0;
        iVar3 = 0;
        puVar6 = puVar20;
        do {
          while( true ) {
            uVar9 = (uint)*(byte *)puVar18;
            puVar19 = (ushort *)((int)puVar18 + 1);
            bVar2 = true;
            if (uVar9 == 0) break;
LAB_08a28874:
            uVar14 = local_5c - uVar8;
            if ((int)uVar9 < (int)uVar14) {
              uVar14 = uVar9;
            }
            if (bVar2) {
              uVar9 = 0;
              if ((int)uVar14 < 1) {
                puVar18 = (ushort *)((int)puVar19 + 1);
              }
              else {
                do {
                  while( true ) {
                    uVar17 = uVar8;
                    uVar8 = (uint)*(byte *)puVar19;
                    if (((uVar9 ^ 1) & 1) != 0) {
                      uVar8 = (int)(uint)*(byte *)puVar19 >> 4;
                    }
                    if (((uVar17 ^ 1) & 1) != 0) break;
                    uVar9 = uVar9 + 1;
                    *(byte *)puVar20 = (byte)((uVar8 & 0xf) << 4) | *(byte *)puVar20;
                    puVar20 = (ushort *)((int)puVar20 + 1);
                    uVar8 = uVar17 + 1;
                    if (uVar14 == uVar9) goto LAB_08a288e4;
                  }
                  uVar9 = uVar9 + 1;
                  *(byte *)puVar20 = (byte)(uVar8 & 0xf);
                  uVar8 = uVar17 + 1;
                } while (uVar14 != uVar9);
LAB_08a288e4:
                uVar8 = uVar17 + 1;
                puVar18 = (ushort *)((int)puVar19 + 1);
              }
            }
            else {
              uVar9 = 0;
              if (0 < (int)uVar14) {
                do {
                  while (uVar17 = uVar8, ((uVar9 ^ 1) & 1) != 0) {
                    uVar8 = (int)(uint)*(byte *)puVar19 >> 4;
                    bVar7 = (byte)uVar8;
                    if (((uVar17 ^ 1) & 1) != 0) goto LAB_08a28914;
LAB_08a2894c:
                    uVar9 = uVar9 + 1;
                    *(byte *)puVar20 = (byte)(uVar8 << 4) | *(byte *)puVar20;
                    puVar20 = (ushort *)((int)puVar20 + 1);
                    uVar8 = uVar17 + 1;
                    if (uVar14 == uVar9) goto LAB_08a28968;
                  }
                  uVar8 = *(byte *)puVar19 & 0xf;
                  bVar7 = (byte)uVar8;
                  puVar19 = (ushort *)((int)puVar19 + 1);
                  if (((uVar17 ^ 1) & 1) == 0) goto LAB_08a2894c;
LAB_08a28914:
                  uVar9 = uVar9 + 1;
                  *(byte *)puVar20 = bVar7;
                  uVar8 = uVar17 + 1;
                } while (uVar14 != uVar9);
LAB_08a28968:
                uVar8 = uVar17 + 1;
              }
              puVar18 = (ushort *)
                        ((int)puVar19 +
                        ((uVar14 & 1) -
                        ((int)(((uVar14 + 1) - ((int)(uVar14 + 1) >> 0x1f)) * 0x40000000) >> 0x1f)))
              ;
            }
          }
          uVar9 = (uint)*(byte *)((int)puVar18 + 1);
          puVar19 = puVar18 + 1;
          if (2 < uVar9) {
            bVar2 = false;
            goto LAB_08a28874;
          }
          if (uVar9 == 1) break;
          if (uVar9 == 0) {
            puVar20 = (ushort *)((int)puVar6 - uVar10);
            iVar3 = iVar3 + 1;
            uVar8 = 0;
            puVar18 = puVar19;
            puVar6 = puVar20;
          }
          else {
            puVar6 = (ushort *)((int)puVar6 - uVar10 * *(byte *)((int)puVar18 + 3));
            uVar8 = uVar8 + *(byte *)(puVar18 + 1);
            iVar3 = iVar3 + (uint)*(byte *)((int)puVar18 + 3);
            puVar20 = (ushort *)((int)puVar6 + (int)uVar8 / 2);
            puVar18 = puVar18 + 2;
          }
          if (iVar16 <= iVar3) {
            zz_sceKernelDcacheWritebackAll();
            return 1;
          }
        } while( true );
      }
    }
    else if (local_52 == 8) {
      uVar10 = local_5c + 0xfU & 0xfffffff0;
      puVar20 = (ushort *)((int)puVar6 + uVar10 * (local_58 + -1));
      iVar12 = local_58 * uVar10;
      iVar16 = local_58;
      if (local_58 < 0) {
        uVar10 = -uVar10;
        iVar12 = -iVar12;
        puVar20 = puVar6;
        iVar16 = iVar3;
      }
      memset_jak((undefined *)puVar6,0,iVar12);
      if (0 < iVar16) {
        iVar3 = 0;
        iVar12 = 0;
        puVar6 = puVar20;
        do {
          while( true ) {
            uVar8 = (uint)*(byte *)puVar18;
            puVar19 = (ushort *)((int)puVar18 + 1);
            bVar2 = true;
            if (uVar8 == 0) break;
LAB_08a28b74:
            uVar9 = local_5c - iVar3;
            if ((int)uVar8 < (int)uVar9) {
              uVar9 = uVar8;
            }
            if (bVar2) {
              uVar8 = 0;
              if (0 < (int)uVar9) {
                do {
                  uVar8 = uVar8 + 1;
                  *(byte *)puVar6 = *(byte *)puVar19;
                  puVar6 = (ushort *)((int)puVar6 + 1);
                } while (uVar9 != uVar8);
              }
              puVar18 = (ushort *)((int)puVar19 + 1);
              iVar3 = iVar3 + uVar9;
            }
            else {
              uVar8 = 0;
              if (0 < (int)uVar9) {
                do {
                  bVar7 = *(byte *)puVar19;
                  uVar8 = uVar8 + 1;
                  puVar19 = (ushort *)((int)puVar19 + 1);
                  *(byte *)puVar6 = bVar7;
                  puVar6 = (ushort *)((int)puVar6 + 1);
                } while (uVar9 != uVar8);
              }
              puVar18 = (ushort *)((uVar9 & 1) + (int)puVar19);
              iVar3 = iVar3 + uVar9;
            }
          }
          uVar8 = (uint)*(byte *)((int)puVar18 + 1);
          puVar19 = puVar18 + 1;
          if (2 < uVar8) {
            bVar2 = false;
            goto LAB_08a28b74;
          }
          if (uVar8 == 1) break;
          if (uVar8 == 0) {
            puVar20 = (ushort *)((int)puVar20 - uVar10);
            iVar12 = iVar12 + 1;
            iVar3 = 0;
            puVar6 = puVar20;
            puVar18 = puVar19;
          }
          else {
            puVar20 = (ushort *)((int)puVar20 - uVar10 * *(byte *)((int)puVar18 + 3));
            iVar3 = iVar3 + (uint)*(byte *)(puVar18 + 1);
            iVar12 = iVar12 + (uint)*(byte *)((int)puVar18 + 3);
            puVar6 = (ushort *)((int)puVar20 + iVar3);
            puVar18 = puVar18 + 2;
          }
          if (iVar16 <= iVar12) {
            zz_sceKernelDcacheWritebackAll();
            return 1;
          }
        } while( true );
      }
    }
    else if (local_52 == 0x10) {
      uVar10 = local_5c + 7U & 0xfffffff8;
      puVar20 = (ushort *)((int)puVar6 + uVar10 * (local_58 * 2 + -2));
      if (local_58 < 0) {
        uVar10 = -uVar10;
        puVar20 = puVar6;
        local_58 = iVar3;
      }
      if (0 < local_58) {
        iVar3 = 0;
        do {
          iVar12 = 0;
          puVar6 = puVar20;
          puVar19 = puVar18;
          if (0 < local_5c) {
            do {
              uVar1 = *puVar19;
              iVar12 = iVar12 + 1;
              puVar19 = puVar19 + 1;
              *puVar6 = uVar1 & 0x7e0 | uVar1 >> 0xb | (ushort)((uVar1 & 0x1f) << 0xb);
              puVar6 = puVar6 + 1;
            } while (local_5c != iVar12);
          }
          iVar3 = iVar3 + 1;
          puVar18 = puVar18 + (local_5c + 1U & 0xfffffffe);
          puVar20 = puVar20 + -uVar10;
        } while (local_58 != iVar3);
      }
    }
    goto LAB_08a287a4;
  }
  if (local_52 == 4) {
    iVar16 = (local_5c + 1) / 2;
    uVar10 = iVar16 + 0xfU & 0xfffffff0;
    puVar20 = (ushort *)((int)puVar6 + uVar10 * (local_58 + -1));
    iVar12 = local_58;
    if (local_58 < 0) {
      uVar10 = -uVar10;
      puVar20 = puVar6;
      iVar12 = iVar3;
    }
    if (0 < iVar12) {
      iVar3 = 0;
      puVar19 = puVar18;
      do {
        iVar11 = 0;
        puVar13 = puVar20;
        puVar15 = puVar19;
        if (0 < iVar16) {
          do {
            bVar7 = *(byte *)puVar15;
            iVar11 = iVar11 + 1;
            puVar15 = (ushort *)((int)puVar15 + 1);
            *(byte *)puVar13 = bVar7 << 4 | (byte)((int)(uint)bVar7 >> 4);
            puVar13 = (ushort *)((int)puVar13 + 1);
          } while (iVar16 != iVar11);
        }
        iVar3 = iVar3 + 1;
        puVar19 = (ushort *)((int)puVar19 + (iVar16 + 3U & 0xfffffffc));
        puVar20 = (ushort *)((int)puVar20 - uVar10);
      } while (iVar12 != iVar3);
    }
  }
  else {
    if (local_52 == 8) {
      uVar10 = local_5c + 0xfU & 0xfffffff0;
      puVar20 = (ushort *)((int)puVar6 + uVar10 * (local_58 + -1));
      if (local_58 < 0) {
        uVar10 = -uVar10;
        puVar20 = puVar6;
        local_58 = iVar3;
      }
      if (0 < local_58) {
        iVar3 = 0;
        do {
          iVar12 = 0;
          puVar6 = puVar20;
          puVar19 = puVar18;
          if (0 < local_5c) {
            do {
              bVar7 = *(byte *)puVar19;
              iVar12 = iVar12 + 1;
              puVar19 = (ushort *)((int)puVar19 + 1);
              *(byte *)puVar6 = bVar7;
              puVar6 = (ushort *)((int)puVar6 + 1);
            } while (local_5c != iVar12);
          }
          iVar3 = iVar3 + 1;
          puVar18 = (ushort *)((int)puVar18 + (local_5c + 3U & 0xfffffffc));
          puVar20 = (ushort *)((int)puVar20 - uVar10);
        } while (local_58 != iVar3);
      }
      goto LAB_08a287a4;
    }
    if (local_52 == 0x10) {
      uVar10 = local_5c + 7U & 0xfffffff8;
      puVar20 = (ushort *)((int)puVar6 + uVar10 * (local_58 * 2 + -2));
      if (local_58 < 0) {
        uVar10 = -uVar10;
        puVar20 = puVar6;
        local_58 = iVar3;
      }
      if (0 < local_58) {
        iVar3 = 0;
        do {
          iVar12 = 0;
          puVar6 = puVar20;
          puVar19 = puVar18;
          if (0 < local_5c) {
            do {
              uVar1 = *puVar19;
              iVar12 = iVar12 + 1;
              puVar19 = puVar19 + 1;
              *puVar6 = uVar1 & 0x3e0 | (ushort)(((uint)uVar1 << 0x11) >> 0x1b) |
                        (ushort)((uVar1 & 0x1f) << 10) | 0x8000;
              puVar6 = puVar6 + 1;
            } while (local_5c != iVar12);
          }
          iVar3 = iVar3 + 1;
          puVar18 = puVar18 + (local_5c + 1U & 0xfffffffe);
          puVar20 = puVar20 + -uVar10;
        } while (local_58 != iVar3);
      }
      goto LAB_08a287a4;
    }
    if (local_52 == 0x18) {
      uVar10 = local_5c * 4 + 0xfU & 0xfffffff0;
      puVar20 = (ushort *)((int)puVar6 + uVar10 * (local_58 + -1));
      if (local_58 < 0) {
        uVar10 = -uVar10;
        puVar20 = puVar6;
        local_58 = iVar3;
      }
      if (0 < local_58) {
        iVar3 = 0;
        do {
          iVar12 = 0;
          puVar6 = puVar20;
          puVar19 = puVar18;
          if (0 < local_5c) {
            do {
              iVar12 = iVar12 + 1;
              *(byte *)puVar6 = *(byte *)(puVar19 + 1);
              *(byte *)((int)puVar6 + 1) = *(byte *)((int)puVar19 + 1);
              bVar7 = *(byte *)puVar19;
              *(byte *)((int)puVar6 + 3) = 0xff;
              puVar19 = (ushort *)((int)puVar19 + 3);
              *(byte *)(puVar6 + 1) = bVar7;
              puVar6 = puVar6 + 2;
            } while (local_5c != iVar12);
          }
          iVar3 = iVar3 + 1;
          puVar18 = (ushort *)((int)puVar18 + (local_5c * 3 + 3U & 0xfffffffc));
          puVar20 = (ushort *)((int)puVar20 - uVar10);
        } while (local_58 != iVar3);
      }
      goto LAB_08a287a4;
    }
  }
  if (local_52 == 0x20) {
    FUN_08a27fe0(puVar6,puVar18,local_5c,local_58,0);
  }
LAB_08a287a4:
  zz_sceKernelDcacheWritebackAll();
  return 1;
}

