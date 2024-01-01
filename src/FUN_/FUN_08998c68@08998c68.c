#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08998c68(undefined4 param_1,int param_2,undefined param_3,byte param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_50 [64];
  
  iVar1 = FUN_08996448();
  if (iVar1 == 0) {
    switch(param_3) {
    case 0:
      FUN_089b4c84(auStack_50,"stage_int");
      break;
    case 1:
      FUN_089b4c84(auStack_50,"stage_jp_2");
      break;
    case 2:
      FUN_089b4c84(auStack_50,"stage_uk");
      break;
    case 3:
      FUN_089b4c84(auStack_50,"stage_ch_3");
      break;
    case 4:
      FUN_089b4c84(auStack_50,"stage_egy_3");
      break;
    case 5:
      FUN_089b4c84(auStack_50,"stage_us_3");
      break;
    case 6:
      FUN_089b4c84(auStack_50,"stage_vex");
      break;
    case 7:
      FUN_089b4c84(auStack_50,"stage_core_ba");
      break;
    default:
      return;
    }
  }
  else {
    switch(param_3) {
    case 0:
      FUN_089b4c84(auStack_50,"stage_int");
      break;
    case 1:
      if (param_4 == 0) {
        FUN_089b4c84(auStack_50,"stage_jp");
      }
      else if (param_4 < 2) {
        FUN_089b4c84(auStack_50,"stage_jp_2");
      }
      else if (param_4 < 3) {
        FUN_089b4c84(auStack_50,"stage_jp_3");
      }
      break;
    case 2:
      if (param_4 == 0) {
        FUN_089b4c84(auStack_50,"stage_uk");
      }
      else if (param_4 < 2) {
        FUN_089b4c84(auStack_50,"stage_uk_2");
      }
      else if (param_4 < 3) {
        FUN_089b4c84(auStack_50,"stage_uk_3");
      }
      break;
    case 3:
      if (param_4 == 0) {
        FUN_089b4c84(auStack_50,"stage_ch");
      }
      else if (param_4 < 2) {
        FUN_089b4c84(auStack_50,"stage_ch_2");
      }
      else if (param_4 < 3) {
        FUN_089b4c84(auStack_50,"stage_ch_3");
      }
      break;
    case 4:
      if (param_4 == 0) {
        FUN_089b4c84(auStack_50,"stage_egy");
      }
      else if (param_4 < 2) {
        FUN_089b4c84(auStack_50,"stage_egy_2");
      }
      else if (param_4 < 3) {
        FUN_089b4c84(auStack_50,"stage_egy_3");
      }
      break;
    case 5:
      if (param_4 == 0) {
        FUN_089b4c84(auStack_50,"stage_us");
      }
      else if (param_4 < 2) {
        FUN_089b4c84(auStack_50,"stage_us_2");
      }
      else if (param_4 < 3) {
        FUN_089b4c84(auStack_50,"stage_us_3");
      }
      break;
    case 6:
      FUN_089b4c84(auStack_50,"stage_vex");
      break;
    case 7:
      FUN_089b4c84(auStack_50,"stage_core");
      break;
    default:
      return;
    }
  }
  uVar2 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_2 + 0xd4) = uVar2;
  return;
}

