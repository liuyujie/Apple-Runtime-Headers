//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HMAccessorySettings, HMMediaSession;

@protocol HMMediaObject <NSObject>
@property(readonly) HMAccessorySettings *settings;
@property(readonly, copy) HMMediaSession *mediaSession;
@property __weak id <HMMediaObjectDelegate> delegate;
@end
