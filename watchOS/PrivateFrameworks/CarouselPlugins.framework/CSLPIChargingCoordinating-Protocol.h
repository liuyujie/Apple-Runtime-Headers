//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CSLPIChargingAlertOptions;

@protocol CSLPIChargingCoordinating <NSObject>
- (void)nightstandChanged:(_Bool)arg1;
- (void)endChargingAlertAnimation;
- (void)dismissChargingAlert;
- (void)presentChargingAlert:(CSLPIChargingAlertOptions *)arg1;
@end
