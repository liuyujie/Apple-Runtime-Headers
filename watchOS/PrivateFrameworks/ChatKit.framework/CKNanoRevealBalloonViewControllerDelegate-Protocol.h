//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CKMessagePartChatItem, CKNanoRevealedBalloonViewController;

@protocol CKNanoRevealBalloonViewControllerDelegate <NSObject>
- (void)revealBalloonControllerFinished:(CKNanoRevealedBalloonViewController *)arg1;
- (void)revealBalloonController:(CKNanoRevealedBalloonViewController *)arg1 requestsAcknowledgmentForChatItem:(CKMessagePartChatItem *)arg2;
@end

