//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PSUICellularPlanManagerUI : NSObject
{
    _Bool _promptingUserForConsent;
}

+ (void)_presentErrorTitle:(id)arg1 onViewController:(id)arg2 withActionTitle:(id)arg3 actionHandler:(CDUnknownBlockType)arg4;
+ (void)_presentCellularRequiredModeAlertOnViewController:(id)arg1;
+ (void)_presentAirplaneModeOnAlertOnViewController:(id)arg1;
+ (void)presentCellularError:(id)arg1 onViewController:(id)arg2;
+ (void)_presentErrorTitled:(id)arg1 withMessage:(id)arg2 onViewController:(id)arg3;
+ (id)carrierPhoneNumber;
+ (id)carrierName;
+ (id)sharedInstance;

@end
