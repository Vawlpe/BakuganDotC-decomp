#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0891bf94(int param_1)

{
  undefined2 uVar1;
  undefined uVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined2 *puVar7;
  undefined2 local_60;
  undefined2 local_5e;
  undefined2 local_5c;
  undefined2 local_5a;
  undefined2 local_58;
  undefined2 local_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c [30];
  
  memset_jak((undefined *)(param_1 + 0x77),0,3);
  *(undefined *)(param_1 + 0x74) = 0;
  *(undefined *)(param_1 + 0x75) = 0;
  *(char *)(param_1 + 0x2174) =
       (char)((int)(*(int *)(DAT_08ac58c4 + 4) + ((uint)(*(int *)(DAT_08ac58c4 + 4) >> 2) >> 0x1e))
             >> 2);
  bVar4 = (byte)*(int *)(DAT_08ac58c4 + 4);
  if (*(int *)(DAT_08ac58c4 + 4) < 0) {
    bVar4 = -(-bVar4 & 3);
  }
  else {
    bVar4 = bVar4 & 3;
  }
  *(byte *)(param_1 + 0x2175) = bVar4;
  FUN_089b1ec0(&local_60,*(undefined *)(param_1 + 0x2174),*(undefined *)(param_1 + 0x2175));
  *(undefined2 *)(param_1 + 0x2124) = local_60;
  *(undefined2 *)(param_1 + 0x2126) = local_5e;
  *(undefined2 *)(param_1 + 0x2128) = local_5c;
  *(undefined2 *)(param_1 + 0x212a) = local_5a;
  *(undefined2 *)(param_1 + 0x212c) = local_58;
  *(undefined2 *)(param_1 + 0x212e) = local_56;
  *(undefined2 *)(param_1 + 0x2130) = local_54;
  *(undefined2 *)(param_1 + 0x2132) = local_52;
  *(undefined2 *)(param_1 + 0x2134) = local_50;
  *(undefined2 *)(param_1 + 0x2136) = local_4e;
  FUN_089b1fa0(local_4c,*(undefined *)(param_1 + 0x2174),*(undefined *)(param_1 + 0x2175));
  iVar6 = 0;
  iVar5 = 0xf;
  do {
    uVar1 = *(undefined2 *)((int)local_4c + iVar6 + 2);
    puVar7 = (undefined2 *)(param_1 + 0x2138 + iVar6);
    *puVar7 = *(undefined2 *)((int)local_4c + iVar6);
    puVar7[1] = uVar1;
    iVar5 = iVar5 + -1;
    iVar6 = iVar6 + 4;
  } while (iVar5 != 0);
  FUN_0891ba00(param_1);
  uVar2 = FUN_0891baac(param_1);
  *(undefined *)(param_1 + 0x2177) = uVar2;
  uVar2 = FUN_0892bc18(*(undefined *)(param_1 + 0x2177));
  *(undefined *)(param_1 + 0x2178) = uVar2;
  FUN_0891bc5c(param_1);
  FUN_0891bcb8(param_1);
  memset_jak((undefined *)(param_1 + 0x21b8),0,0x24);
  memset_jak((undefined *)(param_1 + 0x21dc),0,0x30);
  uVar2 = FUN_0891bcec(param_1);
  *(undefined *)(param_1 + 0x224c) = uVar2;
  FUN_0891be74(param_1);
  FUN_0891bf38(param_1);
  memset_jak((undefined *)(param_1 + 0x227c),0,8);
  uVar3 = DONE_Get_DAT_08AAC9E0();
  iVar5 = FUN_0880d0ac(uVar3,0x2e);
  if (iVar5 == 1) {
    FUN_089c9b74(0x20,DAT_08ac58c8);
  }
  else {
    FUN_089c9b9c(0x20,DAT_08ac58c8);
  }
  return;
}

