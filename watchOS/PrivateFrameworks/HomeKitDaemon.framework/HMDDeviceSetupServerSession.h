//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <HomeKitDaemon/HMDDeviceSetupSessionInternal.h>

#import "HMFLogging.h"

@class NSString;

@interface HMDDeviceSetupServerSession : HMDDeviceSetupSessionInternal <HMFLogging>
{
}

+ (id)logCategory;
+ (id)allowedClasses;
+ (_Bool)isSupported;
+ (int)role;
- (_Bool)processSessionData:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

