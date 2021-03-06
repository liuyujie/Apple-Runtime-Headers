//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBObject.h"

#import "_AMSystemEventsGenericMethods.h"

@class NSDate, NSString;

@interface _AMSystemEventsQuickTimeData : SBObject <_AMSystemEventsGenericMethods>
{
}

- (void)moveTo:(id)arg1;
- (void)duplicateTo:(id)arg1 withProperties:(id)arg2;
- (void)delete;
- (void)printWithProperties:(id)arg1 printDialog:(BOOL)arg2;
- (void)saveIn:(id)arg1 as:(int)arg2;
- (void)closeSaving:(int)arg1 savingIn:(id)arg2;
@property(readonly) long long timeScale;
@property(readonly) BOOL storedStream;
@property(readonly) int presentationSize;
@property(readonly) int presentationMode;
@property(readonly) long long preferredVolume;
@property(readonly) long long preferredRate;
@property(readonly, copy) NSDate *modificationTime;
@property(readonly) BOOL looping;
@property(readonly, copy) NSString *href;
@property(readonly) long long duration;
@property(readonly) long long dataSize;
@property(readonly, copy) NSDate *creationTime;
@property(readonly) BOOL autoQuitWhenDone;
@property(readonly) BOOL autoPresent;
@property(readonly) BOOL autoPlay;
- (id)tracks;
- (id)annotations;

@end

