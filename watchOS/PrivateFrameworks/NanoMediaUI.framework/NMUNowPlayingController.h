//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMRNowPlayingController, NMUNowPlayingState;

@interface NMUNowPlayingController : NSObject
{
    NMRNowPlayingController *_nowPlayingController;
}

+ (id)sharedController;
- (void).cxx_destruct;
@property(readonly, nonatomic) int currentSource;
@property(readonly, nonatomic) NMUNowPlayingState *nowPlayingState;
- (void)dealloc;
- (id)init;

@end
