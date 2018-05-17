//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplicationController.h>

@interface NTKStopwatchComplicationController : NTKComplicationController
{
}

+ (_Bool)_acceptsComplicationType:(unsigned long long)arg1;
- (void)_handleTimeFormatChange;
- (void)_handleLocaleChange;
- (void)_handleReloadNotification;
- (void)_updateDisplay;
- (void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2;
- (id)complicationApplicationIdentifier;
- (void)performTapAction;
- (_Bool)hasTapAction;
- (void)_configureForLegacyDisplay:(id)arg1;
- (void)_stopStopwatchTimerUpdates;
- (void)_startStopwatchTimerUpdates;
- (void)_deactivate;
- (void)_activate;

// Remaining properties
@property(readonly, nonatomic) __weak id <NTKStopwatchComplicationDisplay> legacyDisplay; // @dynamic legacyDisplay;

@end
