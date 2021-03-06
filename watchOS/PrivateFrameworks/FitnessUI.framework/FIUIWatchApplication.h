//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PUICApplication.h"

#import "FIUIApplication.h"

@class FIUIFormattingManager, FIUIUnitManager, HKHealthStore, NSString;

@interface FIUIWatchApplication : PUICApplication <FIUIApplication>
{
    HKHealthStore *_healthStore;
    FIUIFormattingManager *_formattingManager;
    FIUIUnitManager *_unitManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) FIUIUnitManager *unitManager;
@property(readonly, nonatomic) FIUIFormattingManager *formattingManager;
- (void)setHealthStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

