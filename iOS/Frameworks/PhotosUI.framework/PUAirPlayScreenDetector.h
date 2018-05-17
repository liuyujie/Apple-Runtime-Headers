//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, PUAirPlayScreenMap;

__attribute__((visibility("hidden")))
@interface PUAirPlayScreenDetector : NSObject
{
    id <PUAirPlayScreenReceiver> _receiver;
    PUAirPlayScreenMap *__detectedScreensMap;
}

@property(retain, nonatomic, setter=_setDetectedScreensMap:) PUAirPlayScreenMap *_detectedScreensMap; // @synthesize _detectedScreensMap=__detectedScreensMap;
@property(nonatomic) __weak id <PUAirPlayScreenReceiver> receiver; // @synthesize receiver=_receiver;
- (void).cxx_destruct;
- (void)_appEnteringForeground:(id)arg1;
- (void)_appEnteredBackground:(id)arg1;
- (void)_tearDownApplicationNotifications;
- (void)_setUpApplicationNotifications;
- (void)_lostScreen:(id)arg1;
- (void)_detectedNewScreen:(id)arg1;
- (void)_tearDownScreenNotifications;
- (void)_setUpScreenNotifications;
- (void)_scanForAvailableScreensIfNeeded;
- (_Bool)shouldIgnoreScreen:(id)arg1;
@property(readonly, nonatomic) NSArray *availableScreens;
- (void)dealloc;
- (id)init;

@end
