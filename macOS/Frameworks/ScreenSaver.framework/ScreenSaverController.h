//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ScreenSaverControl.h"

@interface ScreenSaverController : NSObject <ScreenSaverControl>
{
    void *_reserved;
}

+ (id)controller;
- (void)screenSaverDidFadeInBackground:(BOOL)arg1 psnHi:(unsigned int)arg2 psnLow:(unsigned int)arg3;
@property(readonly) BOOL screenSaverIsRunningInBackground;
@property(readonly) double screenSaverTimeRemaining;
- (void)restartForUser:(id)arg1;
- (void)screenSaverStopNow;
- (void)screenSaverStopNowWithOptions:(id)arg1;
- (void)screenSaverStartNow;
@property BOOL screenSaverCanRun;
@property(readonly) BOOL screenSaverIsRunning;

@end

