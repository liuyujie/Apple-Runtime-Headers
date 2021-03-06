//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoTransitionObserver.h"

@class NSString;

@interface SVScrubbingManager : NSObject <SVVideoTransitionObserver>
{
    id <SVScrubbingPolicyHandling> _policyHandler;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) id <SVScrubbingPolicyHandling> policyHandler; // @synthesize policyHandler=_policyHandler;
- (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithPolicyHandler:(id)arg1 videoViewControllerProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

