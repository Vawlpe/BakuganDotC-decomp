#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_089641f4(int param_1,undefined param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  param_3 = param_3 & 0xff;
  uVar3 = (uint)*(ushort *)(param_1 + 0x5184);
  iVar6 = param_3 + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x5182);
  uVar7 = uVar2 + uVar3 * param_3;
  cVar5 = '\0';
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x5184);
      uVar2 = (uint)*(ushort *)(param_1 + 0x5182);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0x518c);
  uVar7 = (uint)*(ushort *)(param_1 + 0x518a);
  uVar8 = uVar7 + uVar4 * param_3;
  if (uVar8 < uVar7 + uVar4 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar8 & 0xffff);
      uVar4 = (uint)*(ushort *)(param_1 + 0x518c);
      uVar7 = (uint)*(ushort *)(param_1 + 0x518a);
      cVar5 = cVar5 + cVar1;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)(uVar7 + uVar4 * iVar6));
    uVar2 = (uint)*(ushort *)(param_1 + 0x5182);
    uVar3 = (uint)*(ushort *)(param_1 + 0x5184);
  }
  FUN_0895f328(param_1,uVar2,uVar3,uVar7,uVar4,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51a0);
  uVar2 = (uint)*(ushort *)(param_1 + 0x519e);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51a0);
      uVar2 = (uint)*(ushort *)(param_1 + 0x519e);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51a4);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51a2);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51a4);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51a2);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51ac);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51aa);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51ac);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51aa);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51b0);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51ae);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51b0);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51ae);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51b4);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51b2);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51b4);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51b2);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51bc);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51ba);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51bc);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51ba);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51c4);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51c2);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51c4);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51c2);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51c8);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51c6);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51c8);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51c6);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51d0);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51ce);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51d0);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51ce);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51d4);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51d2);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51d4);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51d2);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51dc);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51da);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51dc);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51da);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51e0);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51de);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51e0);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51de);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51e8);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51e6);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51e8);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51e6);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  uVar3 = (uint)*(ushort *)(param_1 + 0x51fc);
  uVar2 = (uint)*(ushort *)(param_1 + 0x51fa);
  uVar7 = uVar2 + uVar3 * param_3;
  if (uVar7 < uVar2 + uVar3 * iVar6) {
    do {
      cVar1 = FUN_08960048(param_1,param_2,uVar7 & 0xffff);
      uVar3 = (uint)*(ushort *)(param_1 + 0x51fc);
      uVar2 = (uint)*(ushort *)(param_1 + 0x51fa);
      cVar5 = cVar5 + cVar1;
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)(uVar2 + uVar3 * iVar6));
  }
  FUN_0895f328(param_1,*(undefined2 *)(param_1 + 0x5182),*(undefined2 *)(param_1 + 0x5184),uVar2,
               uVar3,*(undefined *)(param_1 + 0x4cdb));
  return cVar5 != '\0';
}

