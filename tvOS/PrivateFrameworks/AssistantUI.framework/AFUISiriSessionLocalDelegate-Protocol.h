//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AFUISiriSessionListener.h"

@class AFDialogPhase, AFUISiriSession, NSString, SAUIDelayedActionCancelCommand, SAUIDelayedActionCommand;

@protocol AFUISiriSessionLocalDelegate <AFUISiriSessionListener>
- (void)siriSession:(AFUISiriSession *)arg1 speechRecordingDidBeginOnAVRecordRoute:(NSString *)arg2;
- (void)siriSessionDidEnd:(AFUISiriSession *)arg1;
- (void)siriSessionWillEnd:(AFUISiriSession *)arg1;
- (void)siriSessionDidResetContext:(AFUISiriSession *)arg1;
- (void)siriSession:(AFUISiriSession *)arg1 didChangeDialogPhase:(AFDialogPhase *)arg2;
- (void)siriSessionDidReceiveDelayedActionCancelCommand:(SAUIDelayedActionCancelCommand *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionDidReceiveDelayedActionCommand:(SAUIDelayedActionCommand *)arg1 completion:(void (^)(AceObject<SAAceCommand> *))arg2;
- (void)siriSessionRecordingPreparationHasFinished:(AFUISiriSession *)arg1;
- (void)siriSession:(AFUISiriSession *)arg1 didReceiveDeviceUnlockRequestWithCompletion:(void (^)(long long))arg2;
- (void)siriSession:(AFUISiriSession *)arg1 didReceiveDeviceUnlockRequestAndCancelRequest:(_Bool)arg2 withCompletion:(void (^)(long long))arg3;
- (void)siriSession:(AFUISiriSession *)arg1 didChangeToState:(long long)arg2;
@end
