#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08a30914(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  iVar2 = 0;
  do {
    if (iVar3 == 0) goto LAB_08a3098c;
    iVar3 = FUN_08a30f40(iVar3);
  } while (((iVar3 == 0) || (iVar1 = FUN_08a30f20(iVar3), iVar1 != param_2)) ||
          (iVar1 = FUN_08a30f54(iVar3), iVar1 != 0));
  FUN_08a30f48(iVar3);
  iVar2 = 1;
LAB_08a3098c:
  if (iVar2 == 0) {
    iVar3 = param_1[1];
    do {
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_08a30f40(iVar3);
    } while (((iVar3 == 0) || (iVar2 = FUN_08a30f20(iVar3), iVar2 != param_2)) ||
            (iVar2 = FUN_08a30f54(iVar3), iVar2 != 0));
    FUN_08a30f48(iVar3);
    iVar2 = 1;
  }
  return iVar2;
}

