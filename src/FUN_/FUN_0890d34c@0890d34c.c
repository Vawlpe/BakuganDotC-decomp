#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

bool FUN_0890d34c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar1 = FUN_089f7720("lo_ball_00");
  iVar1 = strcasecmp(iVar1 + 0x18,"NonTexture");
  return iVar1 != 0 && iVar2 == 0;
}

