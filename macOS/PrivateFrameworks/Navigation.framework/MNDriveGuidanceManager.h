//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Navigation/MNClassicGuidanceManager.h>

__attribute__((visibility("hidden")))
@interface MNDriveGuidanceManager : MNClassicGuidanceManager
{
    int _currentContinuePhase;
}

- (int)transportType;
- (BOOL)_updateConsiderExecuteAnnouncement:(id)arg1 location:(id)arg2;
- (BOOL)_updateConsiderPrepareAnnouncement:(id)arg1 withMatch:(id)arg2;
- (BOOL)_updateConsiderContinueAnnouncement:(id)arg1 location:(id)arg2;
- (void)_updatePrepareForNextStep;
- (id)_nameInfoForContinueSign;
- (double)_distanceForSign;
- (int)_continuePhase;
- (const CDStruct_39925896 *)_announceSettings;
- (void)_resetStepState;

@end

