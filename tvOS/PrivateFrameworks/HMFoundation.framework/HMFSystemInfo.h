//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSObject<OS_dispatch_queue>, NSString;

@interface HMFSystemInfo : HMFObject
{
    NSString *_name;
    NSString *_model;
    NSString *_serialNumber;
    NSString *_regionInfo;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    struct MGNotificationTokenStruct *_notificationToken;
}

+ (id)systemInfo;
@property(readonly) struct MGNotificationTokenStruct *notificationToken; // @synthesize notificationToken=_notificationToken;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)setSerialNumber:(id)arg1;
@property(readonly, copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void)setRegionInfo:(id)arg1;
@property(readonly, copy) NSString *regionInfo; // @synthesize regionInfo=_regionInfo;
- (void)setModel:(id)arg1;
@property(readonly, copy) NSString *model; // @synthesize model=_model;
- (void)notifyNameUpdated:(id)arg1;
- (void)updateName;
@property(copy) NSString *name; // @synthesize name=_name;
- (void)startMonitoringSystemChanges;
- (void)dealloc;
- (void)__initialize;
- (id)init;

@end
