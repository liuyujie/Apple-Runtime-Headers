//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

@class HKDisplayTypeController, HKHealthStore, HKUnitPreferenceController, NSArray;

@interface HKBeatToBeatViewController : HKTableViewController
{
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    NSArray *_bpmPoints;
}

@property(retain, nonatomic) NSArray *bpmPoints; // @synthesize bpmPoints=_bpmPoints;
@property(retain, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(retain, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)_displayStringForTime:(double)arg1;
- (id)_displayStringForInstantaneousBPM:(double)arg1;
- (void)viewDidLoad;
- (void)_addHeartbeatSequenceSample:(id)arg1;
- (id)initWithHRVSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;
- (id)initWithHeartbeatSequenceSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4;
- (id)_initWithHealthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3;

@end

