#pragma once

#import "../includes/SCLAlertView/SCLAlertView.h"

#define ___ALERT_TITLE "CHEATBOT"

void showWaiting(NSString *msg, SCLAlertView* __strong *alert);
void dismisWaiting(SCLAlertView *al);

void showSuccess(NSString *msg);
void showInfo(NSString *msg, float duration);
void showError(NSString *msg);
