#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088e10bc(int param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*(char *)(param_1 + 0x3a1) != '\0') &&
     ((param_2 != '\0' || (*(char *)(param_1 + 0x3b8) != '\0')))) {
    iVar1 = DONE_NotZero_DAT_08AC5874();
    if (iVar1 == 0) {
      *(undefined *)(param_1 + 0x3a1) = 0;
    }
    else {
      uVar2 = DONE_Get_DAT_08AC5874();
      FUN_089c6588(uVar2,*(undefined4 *)(param_1 + 0x3dc));
      *(undefined *)(param_1 + 0x3a1) = 0;
    }
    *(undefined4 *)(param_1 + 0x3a8) = 0;
    *(undefined *)(param_1 + 0x3b8) = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_08824828(DAT_08ac5c70,0xf,0,&local_20);
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_08824828(DAT_08ac5c70,0x10,0,&local_20);
  }
  return;
}

