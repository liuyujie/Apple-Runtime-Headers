//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SVVideoPlaybackPolicyObserverFactory.h"

@class NSObject<SVVideoPlaybackPolicy>, NSString;

@interface SVVideoPlaybackPolicyObserverFactory : NSObject <SVVideoPlaybackPolicyObserverFactory>
{
    NSObject<SVVideoPlaybackPolicy> *_playbackPolicy;
}

@property(readonly, nonatomic) NSObject<SVVideoPlaybackPolicy> *playbackPolicy; // @synthesize playbackPolicy=_playbackPolicy;
- (void).cxx_destruct;
- (id)createPlaybackPolicyObserver;
- (id)initWithPlaybackPolicy:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
