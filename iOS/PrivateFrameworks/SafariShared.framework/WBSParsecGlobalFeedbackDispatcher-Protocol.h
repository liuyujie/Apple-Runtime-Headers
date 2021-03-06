//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@protocol WBSParsecGlobalFeedbackDispatcher <NSObject>
- (void)sendCrowdsourcedAutoFillFeedback:(NSDictionary *)arg1;

@optional
- (void)sendSmartSearchFieldClickedFeedbackWithReaderAvailable:(_Bool)arg1;
- (void)sendWindowMiniaturizeByMouseFeedback;
- (void)sendWindowMiniaturizeByKeyboardFeedback;
- (void)sendWindowCloseByMouseFeedback;
- (void)sendWindowCloseByKeyboardFeedback;
- (void)sendNewTabFeedback;
- (void)sendNewWindowFeedback;
- (void)sendAppLostFocusFeedback;
- (void)sendAppQuitFeedback;
- (void)sendAppLaunchFeedback;
- (void)sendMapsPlaceCardEngagementFeedbackOfType:(int)arg1;
@end

