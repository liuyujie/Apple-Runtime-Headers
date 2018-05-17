//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MTAlarm.h"

#import "NTSAlertable.h"

@class NSDate, NSString;

@interface MTAlarm (NTSAlertable) <NTSAlertable>
+ (id)firingAlertForBulletin:(id)arg1 withAlertProvider:(id)arg2;
+ (id)_alertDateForBulletin:(id)arg1 userNotificationRequest:(id)arg2;
+ (_Bool)_isOldBulletinForUsForTemporaryLivability:(id)arg1;
+ (_Bool)supportsBulletin:(id)arg1;
+ (id)removalNotificationName;
@property(readonly, copy, nonatomic) NSString *repeatActionIdentifier;
@property(readonly, copy, nonatomic) NSString *snoozeActionIdentifier;
@property(readonly, copy, nonatomic) NSString *dismissActionIdentifier;
@property(readonly, nonatomic) _Bool isRepeatable;
@property(readonly, nonatomic) _Bool isSnoozeable;
@property(readonly, copy, nonatomic) NSString *alertID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayTitle;
@property(readonly, nonatomic) NSDate *firedDate;
@property(readonly) unsigned int hash;
@property(readonly, nonatomic) _Bool isFiring;
@property(readonly) Class superclass;
@end
