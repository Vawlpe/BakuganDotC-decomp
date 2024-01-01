#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_088a845c(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_18;
  int local_14;
  
  uVar1 = _DONE_Get_DAT_08AAC9E0();
  iVar2 = FUN_0880d0ac(uVar1,2);
  memcpy_jak(&local_40,&DAT_08a84068,0x30);
  iVar3 = 900;
  if (iVar2 != -1) {
    if (iVar2 < local_40 * 0x3c) {
      if (iVar2 < local_34 * 0x3c) {
        if (iVar2 < local_28 * 0x3c) {
          if (param_2 == '\0') {
            iVar3 = local_14 * 0x1e;
          }
          else {
            iVar3 = local_18 * 0x1e;
          }
        }
        else {
          if (param_2 == '\0') {
            local_24 = local_20;
          }
          iVar3 = local_24 * 0x1e;
        }
      }
      else {
        if (param_2 == '\0') {
          local_30 = local_2c;
        }
        iVar3 = local_30 * 0x1e;
      }
    }
    else {
      if (param_2 == '\0') {
        local_3c = local_38;
      }
      iVar3 = local_3c * 0x1e;
    }
  }
  iVar4 = *(int *)(param_1 + 0x2c);
  iVar2 = FUN_089bed14(5);
  return iVar3 + iVar4 * 0x1e + iVar2 * 0x1e;
}

