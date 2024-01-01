#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08969fe0(int param_1,int param_2,char param_3,byte param_4)

{
  undefined4 uVar1;
  undefined auStack_50 [64];
  
  if (*(char *)(param_1 + 0x29bd) < '\x03') {
    if (param_4 < 2) {
      if (param_4 == 0) {
        if (param_3 == '\0') {
          FUN_089b4c84(auStack_50,"c_setting_bo_2");
        }
        else {
          FUN_089b4c84(auStack_50,"c_setting_bo_1_b");
        }
      }
      else if (param_3 == '\0') {
        FUN_089b4c84(auStack_50,"cha_bo_maru_ita_4");
      }
      else {
        FUN_089b4c84(auStack_50,"cha_bo_maru_ita_5");
      }
    }
    else if (param_4 < 3) {
      if (param_3 == '\0') {
        FUN_089b4c84(auStack_50,"cha_bo_maru_ita_2");
      }
      else {
        FUN_089b4c84(auStack_50,"cha_bo_maru_ita_1");
      }
    }
    else if (param_4 < 4) {
      if (param_3 == '\0') {
        FUN_089b4c84(auStack_50,"c_setting_bo_2");
      }
      else {
        FUN_089b4c84(auStack_50,"c_setting_bo_1_b");
      }
    }
  }
  else if (param_4 < 6) {
    if (param_4 == 1) {
      if (param_3 == '\0') {
        FUN_089b4c84(auStack_50,"c_setting_bo_2");
      }
      else {
        FUN_089b4c84(auStack_50,"c_setting_bo_1_b");
      }
    }
    else if (param_4 == 2) {
      if (param_3 == '\0') {
        FUN_089b4c84(auStack_50,"cha_bo_maru_ita_4");
      }
      else {
        FUN_089b4c84(auStack_50,"cha_bo_maru_ita_5");
      }
    }
    else if (param_4 == 3) {
      if (param_3 == '\0') {
        FUN_089b4c84(auStack_50,"cha_bo_maru_ita_2");
      }
      else {
        FUN_089b4c84(auStack_50,"cha_bo_maru_ita_1");
      }
    }
    else if (param_4 == 4) {
      if (param_3 == '\0') {
        FUN_089b4c84(auStack_50,"c_setting_bo_2");
      }
      else {
        FUN_089b4c84(auStack_50,"c_setting_bo_1_b");
      }
    }
    else if (param_4 == 5) {
      if (param_3 == '\0') {
        FUN_089b4c84(auStack_50,"c_setting_bo_2");
      }
      else {
        FUN_089b4c84(auStack_50,"c_setting_bo_1_b");
      }
    }
    else if (param_3 == '\0') {
      FUN_089b4c84(auStack_50,"c_setting_bo_2");
    }
    else {
      FUN_089b4c84(auStack_50,"c_setting_bo_1_b");
    }
  }
  uVar1 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_2 + 0xd4) = uVar1;
  return;
}

