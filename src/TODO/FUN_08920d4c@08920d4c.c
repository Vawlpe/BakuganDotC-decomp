#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08920d4c(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar6 = (int)*(char *)(param_1 + 0x74);
  if (iVar6 < 1) {
    if (-1 < iVar6) {
      cVar1 = *(char *)(param_1 + iVar6 + 0x77);
      if (cVar1 < '\x01') {
        if (-1 < cVar1) {
          *(undefined4 *)(param_1 + 0x2c) = 4;
        }
      }
      else if (cVar1 < '\x02') {
        *(undefined *)(param_1 + 0x78) = 0;
        *(undefined *)(param_1 + 0x75) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 9;
      }
      else if (cVar1 < '\x03') {
        uVar4 = _DONE_Get_DAT_08AAC9E0();
        iVar6 = FUN_0880d0ac(uVar4,0x2d);
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x2c) = 4;
        }
        else {
          FUN_08920c68(param_1,7,4,3);
          *(undefined4 *)(param_1 + 0x2c) = 0x22;
        }
      }
    }
  }
  else if (iVar6 < 2) {
    if (*(char *)(param_1 + 0x75) == '\x01') {
      *(undefined *)(param_1 + 0x20f8) = 1;
      FUN_08920c88(param_1,0);
      *(undefined4 *)(param_1 + 0x2c) = 0xe;
    }
    else {
      piVar5 = (int *)_DONE_Get_DAT_08AAC9E0();
      if (*(char *)(*piVar5 + (uint)*(byte *)(param_1 + 0x78) + 0x84) == '\0') {
        *(undefined *)(param_1 + 0x79) = 0;
        *(undefined *)(param_1 + 0x76) = 0;
        *(undefined4 *)(param_1 + 0x2c) = 0xe;
      }
      else {
        piVar5 = (int *)_DONE_Get_DAT_08AAC9E0();
        bVar2 = *(byte *)(*piVar5 + (uint)*(byte *)(param_1 + 0x78) + 0x84);
        piVar5 = (int *)_DONE_Get_DAT_08AAC9E0();
        uVar3 = FUN_0891c54c(1,(int)(*(byte *)(*piVar5 + (uint)*(byte *)(param_1 + 0x78) + 0x84) -
                                    0xe) / 3 & 0xff);
        FUN_0891d184(&local_20,param_1,(int)(bVar2 - 0xe) % 3 & 0xff,uVar3);
        *(undefined4 *)(param_1 + 0x2254) = local_20;
        *(undefined4 *)(param_1 + 0x2258) = local_1c;
        *(undefined4 *)(param_1 + 0x225c) = local_18;
        *(undefined4 *)(param_1 + 0x2260) = local_14;
        FUN_08920c68(param_1,10,0x10,0xd);
        *(undefined4 *)(param_1 + 0x2c) = 0x22;
      }
    }
  }
  else if (iVar6 < 3) {
    *(undefined4 *)(param_1 + 0x2c) = 0x1d;
  }
  return;
}

