//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableOrderedSet;

@interface NTSFiringAlertManager : NSObject
{
    Class _alertableClass;
    NSMutableOrderedSet *_alerts;
}

+ (id)sharedTimerManager;
+ (id)sharedAlarmManager;
@property(retain, nonatomic) NSMutableOrderedSet *alerts; // @synthesize alerts=_alerts;
@property(retain, nonatomic) Class alertableClass; // @synthesize alertableClass=_alertableClass;
- (void).cxx_destruct;
- (void)alertProvider:(id)arg1 invalidateBulletinIDs:(id)arg2;
- (void)alertProvider:(id)arg1 removeBulletin:(id)arg2;
- (void)alertProvider:(id)arg1 modifyBulletin:(id)arg2;
- (void)alertProvider:(id)arg1 addBulletin:(id)arg2 replaceBulletin:(id)arg3;
- (void)alertProvider:(id)arg1 addBulletin:(id)arg2;
- (_Bool)alertProvider:(id)arg1 wantsAlertForBulletin:(id)arg2;
- (_Bool)isBulletinForUs:(id)arg1;
- (id)firingAlerts;
- (void)clearBulletinForFiringAlert:(id)arg1 withBulletinActionBlock:(CDUnknownBlockType)arg2;
- (void)removeOrphanedLocalNotificationBulletin:(id)arg1 alertProvider:(id)arg2;
- (void)removeFiringAlert:(id)arg1;
- (void)dismissFiringAlert:(id)arg1;
- (void)repeatFiringAlert:(id)arg1;
- (void)snoozeFiringAlert:(id)arg1;
- (void)_sendResponse:(id)arg1;
- (void)_clearBulletin:(id)arg1 alertProvider:(id)arg2;
@property(readonly, nonatomic) id <NTSAlertable> nextFiringAlert;
- (id)_findAlertForAlertable:(id)arg1;
- (void)_removeAlert:(id)arg1;
- (void)_postChangeNotification;
- (void)addAlert:(id)arg1;
- (void)removeAlertWithBulletinID:(id)arg1;
@property(readonly, nonatomic) int numFiringAlerts;
- (void)alertsRemoved:(id)arg1;
- (void)dealloc;
- (void)setAlertProviderDelegate:(id)arg1;
- (id)alertProviderDelegate;
- (id)description;
- (id)_initWithAlertableClass:(Class)arg1;

@end

