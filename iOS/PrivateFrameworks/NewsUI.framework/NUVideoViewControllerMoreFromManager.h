//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SXMoreFromInteractionHandlerFactory.h"
#import "SXMoreFromPublisherActionTitleProviding.h"
#import "SXMoreFromPublisherLogoProviding.h"

@class NSString, NUVideoViewController;

@interface NUVideoViewControllerMoreFromManager : NSObject <SXMoreFromPublisherActionTitleProviding, SXMoreFromPublisherLogoProviding, SXMoreFromInteractionHandlerFactory>
{
    NUVideoViewController *_videoViewController;
}

@property(readonly, nonatomic) __weak NUVideoViewController *videoViewController; // @synthesize videoViewController=_videoViewController;
- (void).cxx_destruct;
- (id)_callToActionURLForVideoItem:(id)arg1;
- (id)_callToActionTitleForVideoItem:(id)arg1;
- (id)actionTitleForVideo:(id)arg1;
- (id)createInteractionHandlerForVideo:(id)arg1;
- (CDUnknownBlockType)moreFromLogoForVideo:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)initWithVideoViewController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
