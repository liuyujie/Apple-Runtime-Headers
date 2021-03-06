//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class INIntentResponse, NSString, WFLAction, WFLHandleIntentAction;

@protocol WFLActionUserInterface <NSObject>

@optional
- (void)action:(WFLAction *)arg1 requiresContinuingInAppWithProceedHandler:(void (^)(_Bool))arg2;
- (void)handleIntentAction:(WFLHandleIntentAction *)arg1 requiresUserConfirmation:(_Bool)arg2 requiresUserAuthentication:(_Bool)arg3 withIntentResponse:(INIntentResponse *)arg4 proceedHandler:(void (^)(void))arg5;
- (void)action:(WFLAction *)arg1 requiresUserConfirmation:(_Bool)arg2 requiresUserAuthentication:(_Bool)arg3 proceedHandler:(void (^)(void))arg4;
- (void)action:(WFLAction *)arg1 requiresUserConfirmation:(_Bool)arg2 proceedHandler:(void (^)(void))arg3;
- (void)logDebugInformation:(NSString *)arg1;
@end

