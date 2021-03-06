//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NAFuture, NSError;

@protocol HFMediaValueSource <NSObject>
@property(readonly, nonatomic) NSError *cachedPlaybackStateWriteError;
@property(readonly, nonatomic) _Bool hasPendingWrites;
@property(readonly, nonatomic) id <HFMediaProfileContainer> mediaProfileContainer;
- (NAFuture *)writePlaybackState:(int)arg1;
- (int)lastPlaybackStateForProfile;
@end

